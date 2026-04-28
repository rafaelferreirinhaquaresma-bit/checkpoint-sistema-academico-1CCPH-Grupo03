#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcularMedia();
void calcularDerivada();
void limparTela();

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

    do {
        printf("\nDigite a Nota 1 (0 a 10): ");
        scanf("%f", &n1);
        if (n1 < 0 || n1 > 10) {
            printf("Nota invalida! A nota deve estar entre 0 e 10.\n");
        }
    } while (n1 < 0 || n1 > 10);

    do {
        printf("Digite a Nota 2 (0 a 10): ");
        scanf("%f", &n2);
        if (n2 < 0 || n2 > 10) {
            printf("Nota invalida! A nota deve estar entre 0 e 10.\n");
        }
    } while (n2 < 0 || n2 > 10);

    media = (n1 + n2) / 2;
    printf("\nMedia: %.2f\n", media);

    if (media >= 7.0) {
        printf("Status: APROVADO\n");
    } else if (media >= 4.0) {
        printf("Status: EXAME FINAL\n");
    } else {
        printf("Status: REPROVADO\n");
    }
}
void calcularDerivada() {
    float a, b, c;

    printf("\n--- CALCULO DE DERIVADA [f(x) = ax^2 + bx + c] ---\n");
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    printf("\nFuncao original: f(x) = %.2fx^2 + %.2fx + %.2f\n", a, b, c);
    printf("Derivada correspondente: f'(x) = %.2fx + %.2f\n", 2 * a, b);
}
void limparTela() {

    printf("\nPressione Enter para continuar...");

    getchar(); 

    getchar(); 

    #ifdef _WIN32

        system("cls");

    #else

        system("clear");

    #endif
}

