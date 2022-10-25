/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 

main(){
    int qtd100, qtd50, qtd10, qtd5, qtd2, qtd1, valor;
    
    printf("INFORME UM VALOR EM REAIS:\n");
    scanf("%d",&valor);
    
    qtd100 = valor / 100;
    
    
    qtd50 = valor / 50;
    
    
    qtd10 = valor / 10;
    
    
    qtd5 = valor / 5;
   
    
    qtd2 = valor / 2;
    
    
    qtd1 = valor;
    
    printf("O NUMERO DE NOTAS DE 100 REAIS É: %d", qtd100);
    printf("O NUMERO DE NOTAS DE 50 REAIS É: %d", qtd50);
    printf("O NUMERO DE NOTAS DE 10 REAIS É %d", qtd10);
    printf("O NUMERO DE NOTAS DE 5 REAIS É: %d", qtd5);
    printf("O NUMERO DE NOTAS DE 2 REAIS É: %d", qtd2);
    printf("O NUMERO DE NOTAS DE 1 REAL É: %d", qtd1);
    
    
}

