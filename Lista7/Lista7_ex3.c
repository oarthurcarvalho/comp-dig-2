#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void minusculo(char *str){
    int i;
    for (i = 0; str[i] != '\0'; i++){
        if (str[i]>='A' && str[i]<='Z'){
            str[i] = str[i] + 32;
        }
    }
}

void inputStr(char *buffer){
    printf("Entre com uma string de caracteres:\n");
    scanf(" %80[^\n]", buffer);
}
int main(void){
    char selection, buffer[81], buffer2[81], *outBuffer, ch;
    int counter;

            inputStr(buffer);
            minusculo(buffer);
            printf("%s\n", buffer);
}
