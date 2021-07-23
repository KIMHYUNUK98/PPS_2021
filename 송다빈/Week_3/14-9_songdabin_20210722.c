char * decodeString(char * s) {
    char *result = calloc(300*30, sizeof(char));
    int res_idx = 0;
    int number[15] = {0,}, idx = 0;
    int leftstart[15] = {0,}, left_idx = 0;
    
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            number[idx] *= 10;
            number[idx] += (s[i] - '0');
        }
        if (s[i] >= 'a' && s[i] <= 'z') result[res_idx++] = s[i];
        if (s[i] == '[') {
            idx++;
            leftstart[left_idx++] = res_idx;
        }
        if (s[i] == ']') {
            int right = res_idx;
            while (number[idx-1] != 1) {
                for (int j = leftstart[left_idx - 1]; j < right; j++)
                    result[res_idx++] = result[j];
                number[idx - 1]--;
            }
            idx--;
            left_idx--;
            number[idx] = 0;
        }
    }
    return result;
}