#include <stdio.h>
#include <string.h>
#include <time.h> //sleep();

int main(){
    char input[50];
    int opcao, a, i;
    char temporaria;
    printf("Ola, seja bem vindo ao menu do nosso sistema\n");
    sleep(3);
    printf("MENU DE OPCOES\n");
    printf("1- ORDENAR \n2- SUBSTITUICAO \n3- ENCERRAR \nEscolha a opcao: \n");
    scanf("%d", &opcao);
    fflush(stdin);
    switch (opcao)
    {
    case 1:
        printf("DIGITE UMA PALAVRA: \n");
        gets(input);
        strupr(input);
        fflush(stdin);
        for (a = 0; a < strlen(input); a++){
            for (i = a + 1; i <strlen(input); i++){
                if (input[a] > input[i] && input != '\0'){
                    temporaria = input[a];
                    input[a] = input[i];
                    input[i] = temporaria;
                }
            }
        }
        printf("%s", input);
        break;
    case 2:
        printf("DIGITE UMA PALAVRA: \n");
        gets(input);
        strupr(input);
        fflush(stdin);
        strrev(input);
        for (int i = 0; i < strlen(input); i++){
            if (input[i] == ' '){
                input[i] = '_';
            }
        }
        puts(input);
        break;
    case 3:
        sleep(2);
        printf("Encerrando o sistema\n");
        sleep(1);
        printf("Ate logo!");
        break;
    }
    return 0;
}