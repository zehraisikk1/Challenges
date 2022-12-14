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

 
//for ile direkt yazdırma
#include <stdio.h>

int main(){
    char sentence[500] = "Başarının önündeki bütün ayak bağlarından kurtulmalısın. Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısınız.";
    for(int i= 0;i<=500;i++){
    printf("%c",sentence[i]);
    }
}

//for ile yazırma
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[500];
    int length;
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);
    

    length = strlen(sentence); // strlen() fonksiyonu ile bir karakter dizisinin uzunluğunu elde ederek, elde ettiği değeri ekrana yazar.
    
    for(int i=0;i<length;i++){
    printf("%c",sentence[i]);
    }
    return 0;
 }
   
//for ile yazdırma(gets kullanarak)

#include <stdio.h>
#include <string.h>
int main() {
    char sentence[500];
    int length;
    printf("Enter a sentence: ");
    gets(sentence);
    

    length = strlen(sentence); // strlen() fonksiyonu ile bir karakter dizisinin uzunluğunu elde ederek, elde ettiği değeri ekrana yazar.
    
    for(int i=0;i<length;i++){
    printf("%c",sentence[i]);
    }
    return 0;
 }

//while ile yazdırma
#include <string.h>
#include <stdio.h>

int main() {
char sentence[500];
int length,i=0;

printf("Enter a sentence: ");
scanf("%[^\n]",sentence);

length = strlen(sentence); // strlen() fonksiyonu ile bir karakter dizisinin uzunluğunu elde ederek, elde ettiği değeri ekrana yazar.

    while (i<length)
    {
        printf("%c",sentence[i]);
        i++;
    }
    return 0;
}

//while ile yazdırma(gets kullanarak)
#include <string.h>
#include <stdio.h>

int main() {
char sentence[500];
int length,i=0;

printf("Enter a sentence: ");
gets(sentence);

length = strlen(sentence); // strlen() fonksiyonu ile bir karakter dizisinin uzunluğunu elde ederek, elde ettiği değeri ekrana yazar.

    while (i<length)
    {
        printf("%c",sentence[i]);
        i++;
    }
    return 0;
}

//while ile direkt yazdırma
#include <stdio.h>
#include <string.h>


int main() {

int i = 0;
char sentence[500] = "Başarının önündeki bütün ayak bağlarından kurtulmalısın. Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısınız.";


    while (i<500)
    {
        printf("%c",sentence[i]);
        i++;
    }
    return 0;
}

//do-while ile yazdırma
#include <stdio.h>
#include <string.h>


int main() {

int i = 0;
char sentence[500] = "Başarının önündeki bütün ayak bağlarından kurtulmalısın. Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısınız.";


    do
    {
        printf("%c",sentence[i]);
        i++;
    }
    while (i<500);
    
return 0;
}

//do-while ile yazdırma
#include <stdio.h>
#include <string.h>

int main() {
char sentence[500];
int length,i=0;

printf("Enter a sentence:");
scanf("%[^\n]", sentence);
length = strlen(sentence); // strlen() fonksiyonu ile bir karakter dizisinin uzunluğunu elde ederek, elde ettiği değeri ekrana yazar.

    do
    {
        printf("%c",sentence[i]);
        i++;
    }
    while (i<length);
}

    



