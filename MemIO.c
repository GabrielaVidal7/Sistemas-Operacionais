#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define TAM_MAX 101
int main(void) {
    char in[TAM_MAX];
    char aux[TAM_MAX];
    int tam = 0;
    printf("Escreva a frase que quer inverter:\n");
    fgets(in,100,stdin);
    for(int i = 0; in[i] != '\n'; i++){
        tam++;
    }
    for(int i = 0; i < tam; i++){
                aux[i] = in[tam - i - 1];
    }
    aux[tam] = '\0';
    char *out = (char*)malloc(sizeof(char)*tam);
    out = aux;
    printf("\nFrase invertida:\n%s\n",out);
    return 0;
}
