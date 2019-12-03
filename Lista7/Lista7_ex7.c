#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* retira_sufixo(char *s, int n){
    int i, sz = strlen(s);
    char *str;

    if(n>sz){
        n = sz;
    }

    str = (char*)malloc((sz+1)*sizeof(char));
    strcpy(str,s);

    for (i = 0; i < sz; i++){
        if (i >= (sz-n)){
            str[i] = '\0';
        }
    }
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
            printf("Quantos caracteres devem ser removidos do fim: ");
            scanf(" %d", &counter);
            outBuffer = retira_sufixo(buffer, counter);
            printf("String resultante: %s\n", outBuffer);
}
