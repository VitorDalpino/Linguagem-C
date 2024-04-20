#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    //criando e inicilizando//
    tipo_pessoa pessoa={0,0.0,"Teste"};

    printf("Inicio:\n");
    printf("Idade:%d\n",pessoa.idade);
    printf("Peso:%.2f\n",pessoa.peso);
    printf("Nome:%s\n\n", pessoa.nome);

//altetando os dados via codigo//
pessoa.idade=10;
pessoa.peso=99;
strcpy(pessoa.nome,"Junin");

printf("Dados alterados por codigo:\n");
    printf("Idade:%d\n",pessoa.idade);
    printf("Peso:%.2f\n",pessoa.peso);
    printf("Nome:%s\n\n", pessoa.nome);

//coletando os dados do usuario//
printf("Coleta de dados:\n");
printf("Informe a idade:\n");
scanf("%d",&pessoa.idade);
printf("Informe o peso:\n");
scanf("%f",&pessoa.peso);
fflush(stdin);
printf("Informe o nome:\n");
scanf("%49[^\n]s",&pessoa.nome);

printf("Dados adicionados pelo usuario:\n");
    printf("Idade:%d\n",pessoa.idade);
    printf("Peso:%.2f\n",pessoa.peso);
    printf("Nome:%s\n\n", pessoa.nome);

}