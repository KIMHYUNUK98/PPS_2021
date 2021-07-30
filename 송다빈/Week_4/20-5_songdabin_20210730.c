int firstUniqChar(char * s){
    int chk[26] = {0,};
    
    for (int i = 0; i < strlen(s); i++) chk[s[i] - 'a']++;
    
    for (int i = 0; i < strlen(s); i++) {
        if (chk[s[i] - 'a'] == 1) {
            return i;
        }
    }
    
    return -1;
}