#include <stdio.h>
#include <time.h>
#include <string.h>
int main() {
    int qttEmployee;
    float salary;
    float newSalary;
    printf("Bem vindo ao menu da RaLummertz Company\n");
    sleep(1);
    printf("Quantos funcionarios voce deseja ler o salario? \n");
    scanf("%d%*c", &qttEmployee);
    for (int i = 0; i < qttEmployee; i++){
        printf("Digite o valor do salario do funcionario numero %d\n", i+1);
        scanf("%f%*c", &salary);
        if (salary < 500){
            newSalary = (salary + (salary * 5) / 100) + 150;
            printf("O salario de %.2f recebeu uma bonificacao de 5%% e AUXILIO ESCOLA de R$150,00 e agora passa a ser %.2f\n", salary, newSalary);
        } else if (salary >= 500 && salary <= 1200){
            newSalary = (salary + (salary * 12) / 100) + 100;
            printf("O salario de %.2f recebeu uma bonificacao de 12%% e AUXILIO ESCOLA de R$100,00 agora passa a ser %.2f\n", salary, newSalary);
        } else if (salary > 1200){
            newSalary = salary + 100;
            printf("O salario de %.2f nao recebe bonificacao, mas recebe AUXILIO ESCOLA no valor de R$100,00 ficando entao %.2f", salary, newSalary);
        }
    }
    return 0;
}