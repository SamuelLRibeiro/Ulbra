#include <stdio.h>

int main() {
    int qtt;
    float sum = 0;
    float average = 0;
    printf("Digite a quantidade de notas a serem lidas: \n");
    scanf("%d%*c", &qtt);
    float grades[qtt];
    for (int i = 0; i < qtt; i++){
        printf("Digite a nota %d: \n", i+1);
        scanf("%f%*c", &grades[i]);
        sum = sum + grades[i];
    }
    average = sum / qtt;
    printf("A media das notas digitadas e: %.2f\n", average);
    printf("---------------------------------------\n");
    printf("NOTAS MAIORES QUE A MEDIA: \n");
    for (int i = 0; i < qtt; i++){
        if(grades[i] > average){
            printf("Nota %.2f maior que a media %.2f\n", grades[i], average);
        }
    }
    printf("---------------------------------------\n");
    printf("NOTAS MENORES QUE A MEDIA: \n");
    for (int i = 0; i < qtt; i++){
        if (grades[i] < average){
            printf("Nota %.2f menor que a media %.2f\n", grades[i], average);
        }
    }
    return 0;
}