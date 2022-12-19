
#include <string.h>
#include "stdlib.h"
#include "stdio.h"

int lengthOfLongestSubstring(char * s){ 
    int i,j,k;
    int max = 0;
    int count = 0;
    int flag = 0;
    int len = strlen(s);
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            for(k=i;k<j;k++){
                if(s[k] == s[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                flag = 0;
                break;
            }
            count++;
        }
        if(count > max){
            max = count;
        }
        count = 0;
    }
    return max;
}

int main(){
    char s[] = "mekanin sahibi";
    printf("%d",lengthOfLongestSubstring(s));
    return 0;
}
