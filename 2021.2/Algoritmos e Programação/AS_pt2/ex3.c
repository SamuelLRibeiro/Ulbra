#include <stdio.h>

int main() {
    int qtt = 10;
    char studentName[qtt][50];
    float studentGrade[qtt];
    float sum = 0;
    float average = 0;
    for (int i = 0; i < qtt; i++) {
        printf("Digite o nome %d: \n", i+1);
        gets(studentName[i]);
        fflush(stdin);
        printf("Digite a nota desse aluno: \n");
        scanf("%f%*c", &studentGrade[i]);
        sum = sum + studentGrade[i];
    }
    average = sum / qtt;
    for (int i = 0; i < qtt; i++){
        if (studentGrade[i] > average){
            printf("O aluno %s esta acima da media\n", studentName[i]);
        }
    }
    return 0;
}