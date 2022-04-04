#include <stdio.h>
#include <string.h>

int main () {
    char input[50];
    printf("Digite uma frase, iremos retirar retirar os espacos dela: \n");
    gets(input);

    for (int i = 0; i <strlen(input); i++){
        if (input[i] == ' '){
            ;
        }
    }
    puts(input);
    return 0;
}