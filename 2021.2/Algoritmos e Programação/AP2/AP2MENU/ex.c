#include <stdio.h>
#include <string.h>
//#include <conio.h>
//#include <ctype.h>
#include <time.h> //sleep();

int main(){
    char input[50];
    int a, i;
    char temporaria;
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
    return 0;
}