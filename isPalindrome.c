
//Bu code hatali olabilir cunku cok uzun surede calisiyor ve hata veriyor ama mantigi dogru olabilir buna bakin
// hatayi giderin ve calistirin, hatayi gideren ilk kişinin adi yazilacak


#include "stdio.h"
#include "stdlib.h"
#include "string.h"

bool isPalindrome(int x) {
    int i,j;
    int len = 0;
    int flag = 0;
    char str[100];
    sprintf(str,"%d",x);
    len = strlen(str);
    for(i=0,j=len-1;i<len/2;i++,j--){
        if(str[i] != str[j]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        return false;
    }
    else{
        return true;
    }
    
}

int main() 
{
    int x = 121;
    printf("%d",isPalindrome(x));
    return 0;
}
