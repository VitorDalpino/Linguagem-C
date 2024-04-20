void inicializa (char sala[]){
    for (int i = 0 ;  i < 60 ; i++)
        sala[i] = 'D';
}

void escolher_lugar (char sala[], int *qtd){
    int lugar;
    while (1){
        printf ("Escolha o lugar: ");
        scanf ("%d", &lugar);
        if (sala[lugar - 1]=='D'){
            sala[lugar -1 ] = 'X';
            *qtd=*qtd - 1;
            break;
        }
        else printf ("Lugar ocupado\n");
    }
    //return 1;
}

void exibir_sala (char sala[], int *qtd){
    for (int i = 1 ; i <= 60; i++)
        if (i%10==0)
            printf ("\t%d-%c\n",i, sala[i-1]);
        else
            printf ("\t%d-%c",i, sala[i-1]);
    printf ("\n\nLegenda: D - Disponivel    X - Ocupada\n\n");
   
}


void menu(){
    int qtd=60, op=-1; // op com qualquer valor diferente de 0,1,2 ou 3
    char sala[60];
    inicializa(sala);
    while (op){
        printf ("Lugares disponiveis: %d\n\n1) Exibir Sala\n2) Escolher lugar\n3) Sair\nOpcao: ", qtd);
        scanf ("%d", &op);
        if (op==1) exibir_sala(sala, &qtd);
        if (op==2) {exibir_sala (sala, &qtd);escolher_lugar(sala,&qtd);}
        if (op==3) op=0;
    }
}


int main(){
    menu();
    printf ("\n---Fim---\n");
}