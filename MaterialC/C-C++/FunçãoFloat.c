#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float maior(float num1,float num2){
    if(num1>num2)
        return num1;
    else 
        return num2;
}
    

int main(){
    float x,y,m;
    printf("Insira um valor:");
    scanf("%f", &x);
    printf("Insira outro valor:");
    scanf("%f", &y);
    m=maior(x,y);
    printf("O valor maior e %.2f",m);
}
