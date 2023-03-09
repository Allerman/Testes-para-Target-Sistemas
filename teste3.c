//Programa que calcula O menor, maior e numero de dias que o valor de faturamento foi superior a media.
//por Thayssa A. Silva 2023

#include <stdio.h>

#define N 30 // número de dias no mês

int main() {
    float faturamento[N] = {
        22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 
        42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 
        2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 
        18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 
        13220.495, 8414.61
    };

    int i;
    float menor = faturamento[0], maior = faturamento[0], soma = 0.0;
    int count = 0; // contador de dias com faturamento acima da média
    for (i = 0; i < N; i++) {
        if (faturamento[i] != 0.0) {
            if (faturamento[i] < menor) {
                menor = faturamento[i];
            }
            if (faturamento[i] > maior) {
                maior = faturamento[i];
            }
            soma += faturamento[i];
            count++;
        }
    }
    float media = soma / count;

    printf("Menor faturamento diario: R$%.2f\n", menor);
    printf("Maior faturamento diario: R$%.2f\n", maior);
    printf("Dias com faturamento acima da media mensal: %d\n", count);

    return 0;
}

/* Resposta =   Menor faturamento diario: R$373.78
                Maior faturamento diario: R$48924.25
                Dias com faturamento acima da media mensal: 21 */