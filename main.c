/**
 * @file main.c
 * @author francsco (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int  main(){

    //variaveis
    int num1, num2;
    int soma;
    int subtraçao;
    int multiplicaçao;
    float divisao;

    //declarar variaveis
    num1 = 6;
    num2 = 5;

    //calcular soma
    soma = num1 + num2;
    printf("a soma e: %d\n",soma);

    //calcular subtraçao
    subtraçao = num1 - num2;
    printf("a subtracao e: %d\n", subtraçao);

    //calcular multiplicaçao
    multiplicaçao = num1*num2;
    printf("a multiplicaçao e: %d\n", multiplicaçao);

    //calcular divisao
    divisao = num1/num2;
    printf("a divisao e: %f\n", divisao);

    return 0;
}