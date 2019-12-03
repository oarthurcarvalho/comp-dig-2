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

int conta_vogais(char *str){
    int i, counter = 0;
    minusculo(str);
    for (i = 0; str[i] != '\0'; i++){
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')){
            counter ++;
        }
    }
    return counter;
}

void inputStr(char *buffer){
    printf("Entre com uma string de caracteres:\n");
    scanf(" %80[^\n]", buffer);
}

int main(void){
    char selection, buffer[81], buffer2[81], *outBuffer, ch;
    int counter;

    inputStr(buffer);
    counter = conta_vogais(buffer);
    printf("A string tem %d vogais.\n", counter);
}
