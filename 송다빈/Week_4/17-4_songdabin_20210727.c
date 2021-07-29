bool isAnagram(char * s, char * t){
    int chk[128] = {0,};
    
    if (strlen(s) != strlen(t)) return false;
    
    for (int i = 0; i< strlen(s); i++) {
        chk[s[i]]++; chk[t[i]]--;
    }
    
    for (int i = 0; i< strlen(s); i++) {
        if (chk[s[i]] > 0) return false;
    }
    
    return true;
}