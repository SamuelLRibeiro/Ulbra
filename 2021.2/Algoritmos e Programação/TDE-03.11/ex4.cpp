#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char nome1[50];
    char caracter;
    char nCaracter;
    int cont = 0;
    printf("Digite o valor de nome: \n");
    gets(nome1);
    fflush(stdin);
    printf("Digite o caracter: \n");
    scanf("%c", &caracter);
    fflush(stdin);
    printf("Digite o novo caracter: \n");
    scanf("%c", &nCaracter);
    fflush(stdin);
    for (int i = 0; i < strlen(nome1); i++){
        if(nome1[i]==caracter){
            cont++;
            nome1[i] = nCaracter;
        }
    }
    printf("Foram encontradas %d ocorrencias\n", cont);
    printf("Nova string %s", nome1);
    return 0;
}