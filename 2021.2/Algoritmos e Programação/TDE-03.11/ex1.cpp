#include <stdio.h>
#include <string.h>

int main(){
    char valor[50];
    int tamanho = 0;
    printf("Escreva a string\n");
    scanf("%s%*c", valor);
    for (int i = 0; valor[i] !='\0'; i++){
        tamanho++;
    }
    printf("Tamanho = %d \n", tamanho);
    return 0;
}