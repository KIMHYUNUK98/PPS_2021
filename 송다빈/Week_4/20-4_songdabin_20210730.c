int longestPalindrome(char *s) {
    int chk[128] = {0,};
    int cnt = 0, remain = 0;

    for (int i = 0; i < strlen(s); i++) chk[s[i]]++;

    for (int i = 0; i < 128; i++) {
        if (chk[i] % 2 == 0) cnt += chk[i];
        else {
            cnt += chk[i]-1;
            remain = 1;
        }
    }

    return cnt + remain;
}