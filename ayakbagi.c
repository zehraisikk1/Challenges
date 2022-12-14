//Print a lengthy statement using a loop.

//Bir döngü kullanarak şu cümleyi yazdırın.
// cümle : Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'
//scanf'e girdi olarak 500 karakter sınırlı bir cümle girelebilir
#include "stdio.h"
#include "stdlib.h"
int main()
{
char sentence[500];
    do{
    printf("Enter a sentence: ");
    scanf("%[^\n]%*c",sentence);
    printf("You entered: %s", sentence);
    }
    while(0);
    return 0;

}

// output= Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'

