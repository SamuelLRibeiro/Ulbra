#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <time.h> //sleep();

int main(){
    int opcao, encerraLoop;
    int loop = 1;
    char letras[26] = {'A', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'W', 'Y', 'Z'};
    char palavra[50];
    char ordemAlf;
    printf("Ola, seja bem vindo ao menu do nosso sistema\n");
    sleep(3);
    printf("MENU DE OPCOES\n");
    printf("1- ORDENAR \n2- SUBSTITUICAO \n3- ENCERRAR \nEscolha a opcao: \n");
    scanf("%d", &opcao);
    fflush(stdin);
    if (opcao == 1){
        printf("Opcao computada\n");
        sleep(2);
        printf("Digite uma palavra: \n");
        gets(palavra);
        fflush(stdin);
        puts(palavra);
        for (int i = 0; i <= strlen(palavra); i++){
            if(palavra[i] == letras){
                strcpy(palavra, letras[i]);
                printf("%s", palavra);
            }
        }
        printf("%s", palavra);
        //printf("Deseja voltar ao menu? 1- SIM 2-NAO\n");
        //scanf("%d", &encerraLoop);
    }
    return 0;
}