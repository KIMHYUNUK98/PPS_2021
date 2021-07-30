bool isIsomorphic(char* s, char* t) {
    char st[128] = {0,};
	char ts[128] = {0,};

    for (int i = 0; i < strlen(s); ++i) {
        if (st[s[i]] == 0 && ts[t[i]] == 0) {
            st[s[i]] = t[i];
            ts[t[i]] = s[i];
        }
        
        else {
            if (st[s[i]] != t[i] || ts[t[i]] != s[i]) return false;
        }
    }

    return true;    
}