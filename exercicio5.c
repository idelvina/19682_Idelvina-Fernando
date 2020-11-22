/**
 * @file exercicio5.c
 * @author Idelvina Fernando e Joel Jonassi
 * @brief Somatorio
 * @version 0.1
 * @date 2020-11-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
int somatorio(int n); //funcao somatorio, n para entrada de dados 

int main()
{
    int n;
    printf("Insira um numero natural: \n");
    scanf("%d", &n); 
    printf(" O somatorio de 1 a %d = %d", n, somatorio(n));
}
/**
 * @brief função que calcula o somátorio
 * @param n varivel de entrada de dados para o somatorio de n elementos
 * @param i valor inicial
 * @param x x recebe x + i, e faz o somatorio
 * @return int 
 * 
 */
    int somatorio(int n)
        {
            int i, x;
            for(i = 1, x = 0; i <= n; i ++)
                {
                    x = x + i;
                }
            return(x);
        }