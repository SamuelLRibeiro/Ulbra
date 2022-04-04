#include <stdio.h>

int main() {
    int tam = 10;
    int array[tam];
    for(int i = 0; i <= tam; i++){
        printf("Digite um valor para a posicao %d do array: \n", i);
        scanf("%d%*c", &array[i]);
    }
    for (int i = tam; i > 0; i--){
        printf("Valor %d na posicao %d\n", array[i], i);
    }
    return 0;
}