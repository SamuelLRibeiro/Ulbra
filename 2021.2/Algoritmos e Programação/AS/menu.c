#include <stdio.h>
int main (){
    int tam = 6;
    int decisao;
    int vetor[tam];
    int i = 0;
    int j = 0;
    int soma = 0;
    int cont = 0;
    do
    {
        printf("Bem vindo ao nosso menu!\n");
        printf("Escolha a opcao mais apropriada: \n");
        printf("1. Ler o vetor de 6 numeros inteiros\n");
        printf("2. Exibir os numeros pares digitados\n");
        printf("3. Exibir a soma dos numeros pares digitados\n");
        printf("4. Exibir os numeros impares digitados\n");
        printf("5. A quantidade de numeros impares digitados\n");
        printf("6. FINALIZAR\n");
        scanf("%d%*c", &decisao);
        switch (decisao)
        {
        case 1:
            for(i; i < tam; i++){
                printf("Digite um valor para a posicao %d do vetor: \n", i);
                scanf("%d", &vetor[i]);
            }
            for(j; j < tam; j++){
                printf("Valor %d encontrado na posicao %d do vetor \n", vetor[j], j);
            }
            break;
        case 2:
            for(i; i < tam; i++){
                printf("Digite um valor para a posicao %d do vetor: \n", i);
                scanf("%d", &vetor[i]);
            }
            for(j; j < tam; j++){
                if(vetor[j] % 2 == 0){
                    printf("Valor %d na posicao %d e par!\n", vetor[j], j);
                }
            }
            break;
        case 3:
            for(i; i < tam; i++){
                printf("Digite um valor para a posicao %d do vetor: \n", i);
                scanf("%d", &vetor[i]);
            }
            for(j; j < tam; j++){
                if(vetor[j] % 2 == 0){
                    soma += vetor[j];
                }
            }
            printf("A soma dos valores pares equivale a %d \n", soma);
            break;
        case 4:
            for(i; i < tam; i++){
                printf("Digite um valor para a posicao %d do vetor: \n", i);
                scanf("%d", &vetor[i]);
            }
            for(j; j < tam; j++){
                if(vetor[j] % 2 != 0){
                    printf("Valor %d na posicao %d e impar!\n", vetor[j], j);
                }
            }
            break;
        case 5:
            for(i; i < tam; i++){
                printf("Digite um valor para a posicao %d do vetor: \n", i);
                scanf("%d", &vetor[i]);
            }
            for(j; j < tam; j++){
                if(vetor[j] % 2 != 0){
                    cont++;
                }
            }
            printf("Foram digitados %d numeros impares\n", cont);
            break;
        default:
            break;
        }
    } while (decisao != 6);
    return 0;
}