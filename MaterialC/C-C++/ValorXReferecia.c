#include<stdio.h>

int main(){
    int valor=10;
    printf("Valor antes da funcao:%d\n",valor);
    alteraValor(&valor);
    printf("Valor depois da funcao:%d\n",valor);
}

void alteraValor(int *valor){
    *valor = *valor * 2;

    printf("Valor dentro da funcao:%d\n",*valor);
};