#include <stdio.h>
#include <string.h>

int main(){
    char sentence[600];
    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);
    if(strlen(sentence)<=600){
     printf("Your sentence is: %s", sentence);
	}
	else{
		printf("Your sentence is very long!");
    }
    return 0;
}
