#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main(){

    printf("comment tu tappele \n");

    char str[50];

    scanf("%s", str);

    printf("tu tappele %s \n", str);

    printf("quelle age avez vous ? \n");
    
    int tm_year = clock(tm_year);
    int années = 2026;
    int number;

    scanf("%d", &number);

    int resultat = tm_year - number;

    printf("vous etes n'ée en %d \n", resultat);
    
    exit(0);
}