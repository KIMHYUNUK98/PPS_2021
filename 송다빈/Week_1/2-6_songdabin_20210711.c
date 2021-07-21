#include<stdio.h>
#include<string.h>

int funtion(char str[], int num){
	int i, j, key=0;
	for (i=0; i<num; i++) {
        for (j=0; j<num; j++) {
            if(str[i]==str[j]) {
                key=j-i;
                if(key>1)
                    if(str[j-1]!=str[j]) return 0;
            }
        }
	}
	return 1;
}

int main(){
    int list_num;
    char input_str[101];
    int i, sum=0;   
    scanf("%d", &list_num);
    for( i=0; i<list_num; i++){
        scanf("%s", input_str);
        sum+=funtion(input_str, strlen(input_str));
    }
    printf("%d", sum);
    return 0;
}