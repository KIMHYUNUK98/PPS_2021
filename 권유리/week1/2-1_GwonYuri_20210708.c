#include <stdio.h>
#include <string.h>

int main(){
    char input[20];
    int acp_ok, vw_ok, vw_count, cs_count;

    while (1) {  
        acp_ok=1;      
        vw_ok=0;
        vw_count=0;
        cs_count=0;

        scanf("%s", input);

        if (strcmp(input, "end") == 0) break;

        for (int i = 0; i < strlen(input); i++) {
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
                vw_ok=1;
                vw_count++;
                cs_count=0;
            }
            else {
                cs_count++;
                vw_count=0;
            }
            
            if (i < strlen(input) - 1) {
                if (input[i] == 'e' && input[i + 1] == 'e' || input[i] == 'o' && input[i + 1] == 'o') continue;
                else if (input[i] == input[i + 1]) {
                    acp_ok = 0;
                    break;
                }
            }
            if (vw_count == 3 || cs_count == 3) {
                acp_ok = 0;
                break;
            }
        }
        if (acp_ok==1 && vw_ok==1) 
            printf("<%s> is acceptable.\n", input);
        else 
            printf("<%s> is not acceptable.\n", input);
    }

    return 0;
}