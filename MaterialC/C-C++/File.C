#include <stdio.h>
#include <stdlib.h>

int main(){
    char *nome_arquivo ="cu.txt";
    FILE *file;
    file = fopen(nome_arquivo,"w");
    fprintf(file,"olá");

    fclose(file);
}