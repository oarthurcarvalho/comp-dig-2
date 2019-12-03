#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void shift_string(char *str){
    int i;
    char ch;
    for (i = 0; str[i] != '\0'; i++){
        ch = str[i];
        if ((str[i] == 90) || (str[i] == 122)){
            str[i] -= 25;
        } else if (!((str[i] >= 48) && (str[i] <= 57))) {
            str[i]++;
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
            shift_string(buffer);
            printf("%s\n", buffer);
}
