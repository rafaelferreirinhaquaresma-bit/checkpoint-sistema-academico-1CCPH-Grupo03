#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    int opcao;
 
    do {
        printf("--- SISTEMA ACADEMICO DSA ---\n");
        printf("1. Calcular Media e Classificacao\n");
        printf("2. Calcular Derivada (Funcao Simples)\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);