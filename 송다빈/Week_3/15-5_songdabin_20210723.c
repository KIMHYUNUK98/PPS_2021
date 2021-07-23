bool isSubsequence(char * s, char * t){
    for (int i = 0; i < strlen(t); i++) {
        if (*s == t[i]) s++;
    }
    
    return *s == '\0';
}