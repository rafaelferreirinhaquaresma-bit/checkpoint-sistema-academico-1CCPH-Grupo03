#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    int opcao;
 
    do {
        printf("--- SISTEMA ACADEMICO GRUPO 3   ---\n");
        printf("1. Calcular Media e Classificacao\n");
        printf("2. Calcular Derivada (Funcao Simples)\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                calcularMedia();
                break;
            case 2:
                calcularDerivada();
                break;
            case 3:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
          if (opcao != 3) {
            limparTela();
        }
          } while (opcao != 3);
 
    return 0;
}

void calcularMedia() {
    float n1, n2, media;
    printf("\nDigite a Nota 1: ");
    scanf("%f", &n1);
    printf("Digite a Nota 2: ");
    scanf("%f", &n2);
    media = (n1 + n2) / 2;
 
    printf("Media: %.2f\n", media);