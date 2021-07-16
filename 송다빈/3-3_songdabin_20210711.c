#include <stdio.h>
#include <string.h>

int main(){
	char string[1000];

	scanf("%s", string);

	for(int i=0; i<strlen(string); i++){
		if(string[i]<'D') string[i]=string[i]+26-3;
		else string[i]-=3;
    }
	printf("%s", string);
}