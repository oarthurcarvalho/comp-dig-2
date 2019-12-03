#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char* concatena(char *s1, char *s2, char sep){
    int sz = (strlen(s1) + strlen(s2) + 1);
    int i = 0;
    int j = 0;
    char *str;

    str = (char*)malloc((sz+1)*sizeof(char));

    while (s1[i] != '\0'){
        str[i] = s1[i];
        i++;
    }
    str[i] = sep;
    i++;
    while (s2[j] != '\0'){
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
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
            printf("Entre com UM caracter separador: ");
            scanf(" %c", &ch);
            inputStr(buffer2);
            outBuffer = concatena(buffer, buffer2, ch);
            printf("String resultante: %s\n", outBuffer);
}
