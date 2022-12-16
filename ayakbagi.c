//Print a lengthy statement using a loop.

//Bir döngü kullanarak şu cümleyi yazdırın.
// cümle : Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'
//scanf'e girdi olarak 500 karakter sınırlı bir cümle girelebilir
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
int i = 0;
char sentence[500];
char *ichi;

printf("Enter a sentence:");
scanf("%[^\n]", sentence);

ichi=strtok(sentence,"."); // Strtok:It is used to separate the letter or word that we specify.
while (ichi != NULL)  {
      printf ("%s\n", ichi);
      ichi = strtok (NULL, ".");
    }
for(int i=0;i<500;i++)
{
printf("%c",ichi);
}
return 0;
}
