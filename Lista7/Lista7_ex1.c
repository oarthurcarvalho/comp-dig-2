#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int conta_ocorrencias(char *s, char c){
    int i, counter = 0;

    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == c){
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
    char buffer[81], buffer2[81], ch;
    int counter;

    printf("Entre com o caracter cuja ocorrencia deseja-se detectar na string: ");
    scanf(" %c", &ch);
    inputStr(buffer);
    counter = conta_ocorrencias(buffer, ch);
    printf("O caracter %c, aparece %d vezes na string.\n", ch, counter);

}
