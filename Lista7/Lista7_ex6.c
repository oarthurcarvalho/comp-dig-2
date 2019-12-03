#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void roda_string(char *str){
    int i, sz = strlen(str);
    char ch = str[sz-1];
    for (i = sz - 1; i >= 0; i--){
        if (i == 0){
            str[i] = ch;
        } else {
            str[i] = str[i-1];
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
            roda_string(buffer);
            printf("%s\n", buffer);
}
