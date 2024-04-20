#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define TAM 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};
typedef struct tipo_pessoa tipo_pessoa;

int main(){
    tipo_pessoa lista[TAM];

    int i;

    for(i=0;i<TAM;i++){
        printf("Insira os dados de uma pessoa %d:\n",i+1);
        puts("Nome:");
        scanf("%50[^\n]d", lista[i].nome);
        fflush(stdin);
        puts("Idade:");
        scanf("%d",&lista[i].idade);
        fflush(stdin);
        puts("Peso:");
        scanf("%f", &lista[i].peso);
        fflush(stdin);

    }
    system("cls"); //limpa a tela preta//

    puts("Sua lista de dados:");
    for(i=0;i<TAM;i++){
        printf("---------- Dados Pessoa %d ----------\n",i+1);
        printf("Nome: %s\n",lista[1].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n",lista[i].peso);
    }




}
