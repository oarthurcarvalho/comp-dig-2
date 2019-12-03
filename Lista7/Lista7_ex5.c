#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void string_oposta(char *str){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'A' && str[i] <= 'M'){
            str[i] = 'Z' - (str[i] - 'A');
        } else if (str[i] >= 'N' && str[i] <= 'Z'){
            str[i] = 'A' + ('Z' - str[i]);
        } else if (str[i] >= 'a' && str[i] <= 'm'){
            str[i] = 'z' - (str[i] - 'a');
        } else if (str[i] >= 'n' && str[i] <= 'z'){
            str[i] = 'a' + ('z' - str[i]);
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
            string_oposta(buffer);
            printf("%s\n", buffer);
}
