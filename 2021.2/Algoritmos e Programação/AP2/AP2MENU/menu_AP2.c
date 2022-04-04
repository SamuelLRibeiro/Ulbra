#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
    char userName[50];
    char input[50];
    int opcao, a, i;
    char temporaria;
    printf("Ola, seja bem vindo ao nosso sistema \nPoderia nos informar o seu nome?\n");
    scanf("%s", userName);
    printf("Muito prazer, %s!\n", userName);
    sleep(2);
    printf("Voce recebeu acesso ao nosso menu...");
    sleep(2);
    do
    {
        printf("\nMENU DE OPCOES\n");
        printf("1- ORDENAR \n2- SUBSTITUICAO \n3- ENCERRAR \nEscolha a opcao: \n");
        scanf("%d", &opcao);
        fflush(stdin);
        switch (opcao)
        {
        case 1:
            printf("Digite uma palavra que mostraremos as letras em ordem alfabetica: \n");
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
            printf("Veja o resultado: \n");
            puts(input);
            sleep(1);
            break;
        case 2:
            printf("Digite uma frase e mostraremos ela ao contrario e os espacos preenchidos por '_': \n");
            gets(input);
            strupr(input);
            fflush(stdin);
            strrev(input);
            for (int i = 0; i < strlen(input); i++){
                if (input[i] == ' '){
                    input[i] = '_';
                }
            }
            printf("Veja o resultado: \n");
            puts(input);
            sleep(1);
            break;
        case 3:
            sleep(2);
            printf("Encerrando o sistema\n");
            sleep(1);
            printf("Ate logo, %s!", userName);
            break;
        }
    } while (opcao != 3); 
    return 0;
}