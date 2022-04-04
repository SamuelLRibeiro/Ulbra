#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char nome1[50];

    printf("Digite o valor de nome: \n");
    gets(nome1);

    for (int i = 0; i < 4; i++){
        printf("%c\n", nome1[i]);
            for (int i = 0; i < 4; i++);
    }
    printf("\n");
    return 0;
}