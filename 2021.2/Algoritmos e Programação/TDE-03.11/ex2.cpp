#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char nome1[50];
    char nome2[50];

    printf("Digite o valor de nome 1: \n");
    gets(nome1);
    printf("Digite o valor do nome 2: \n");
    gets(nome2);

    if(strcmp(nome1, nome2) == 0){
        printf("Strings iguais!\n");
    } else {
        printf("Strings diferentes! \n");
    }

    return 0 ;
}