#include<stdio.h>
#include<stdlib.h>

void opcao1(){
    printf("Opcao escolhida: oi\n");
};

void opcao2(){
    printf("Opcao escolhida: ola\n");
};

void opcao3(){
    printf("Opcao escolhida: Hello\n");
}


void menu(){
    int escolha;
do{
    printf("Menu:\n");
    printf("1- Opcao 1\n");
    printf("2- Opcao 2\n");
    printf("3- Opcao 3\n");
    printf("4- Sair\n");
    printf("Escolha uma das opcoes:\n");
    scanf("%d", &escolha);


switch(escolha) {
case 1:
opcao1();
    break;

case 2:
opcao2();
break;

case 3:
opcao3();
break;

case 4:
printf("Saindo do programa");
break;

default:
printf("Opção invalida,tente novamente");
    break;
}
}while(escolha != 4);
}

int main(){
    menu();
    return 0;
}