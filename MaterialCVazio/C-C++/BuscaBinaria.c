#include <stdio.h>

int Busca(int arr[10],int x){
    int inicio=0;
    int meio;
    int final=9;

    while(final>inicio){
        meio=(final + inicio)/2;
        if(arr[meio]==x){
            return meio;
            
        } 
        else if(arr[meio]<x){
            inicio = meio + 1;
        }
        else 
        final = meio - 1;
    }
    return -1;

}

int main(){
    int x=20;
    int arr[10]={10,20,30,40,40,60,70,80,90,100};
    int meio = Busca(arr,x);
    printf("%d",meio);

}