//Print a lengthy statement using a loop.

//Bir döngü kullanarak şu cümleyi yazdırın.
// cümle : Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'


#include <stdio.h>

int main() {
    char sentence[500];
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);
    printf("You entered: %s", sentence);
    return 0;

}

// output= Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'

