#include <stdio.h>
#include <string.h>
#include <time.h> //sleep();

int main(){
    char input[50];
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
    return 0;
}