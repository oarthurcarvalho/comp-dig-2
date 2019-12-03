#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* converte(char *s){
    char *str;
    int sz = strlen(s);
    int i, j = 0;

    str = (char*)malloc((sz+1)*sizeof(char));

    for (i = 0; s[i] != '\0'; i++){
        if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            str[j] = s[i];
            j++;
        }
    }
    str[j] = '\0';
    return str;
}

void inputStr(char *buffer){
    printf("Entre com uma string de caracteres:\n");
    scanf(" %80[^\n]", buffer);
}

int main(void){
    char selection, buffer[81], buffer2[81], *outBuffer, ch;
    int counter;

            inputStr(buffer);
            outBuffer = converte(buffer);
            printf("String resultante: %s\n", outBuffer);
}
