#include <stdio.h>
long somatorio(int n); //funcao somatorio, n para entrada de dados 

int main(void)
{
    int num;
    printf("insira um numero natural\n"); //escrever numero
    scanf("%d", &num); //ler o numero
    printf(" O somatorio de %d é igual a %d", num, somatorio(num));
}

long somatorio(int n)//funcao somatorio com parametro n
{
    int i, x;// duas variaveis do tipo inteiro
    for(i = 1, x = 0; i <= n; i ++)//
    {
        x = x + i;//x recebe x mais i, e faz o somatorio
    }
    return(x);
}