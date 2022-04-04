#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int qtt;
    printf("Quantos nomes voce quer ler? \n");
    scanf("%d%*c", &qtt);
    char inputName[qtt][50];
    char phoneNumber[qtt][20];
    char search[50];
    for (int i = 0; i < qtt; i++){
        printf("Digite o nome da pessoa %d: \n", i);
        gets(inputName[i]);
        fflush(stdin);
        printf("Digite o telefone: \n");
        gets(phoneNumber[i]);
        fflush(stdin);
    }
    printf("Qual nome voce deseja buscar? \n");
    gets(search);
    fflush(stdin);
    for (int i = 0; i < qtt; i++){
        if (strcmp(search, inputName[i]) == 0){
            printf("Nome: %s\nTelefone: %s\n", inputName[i], phoneNumber[i]);
        }
    }
    return 0;
}