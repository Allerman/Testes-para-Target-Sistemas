//Programa que calcula percentual de que cada estado teve do valor total da distribuidora.
//por Thayssa A. Silva 2023

#include <stdio.h>

int main() {
    float sp = 67836.43,
            rj = 36678.66,
            mg = 29229.88,
            es = 27165.48,
            outros = 19849.53;

    float total = sp + rj + mg + es + outros;

    float perc_sp = sp / total * 100;
    float perc_rj = rj / total * 100;
    float perc_mg = mg / total * 100;
    float perc_es = es / total * 100;
    float perc_outros = outros / total * 100;

    printf("Percentual de representacao:\n");
    printf("SP: %.2f%%\n", perc_sp);
    printf("RJ: %.2f%%\n", perc_rj);
    printf("MG: %.2f%%\n", perc_mg);
    printf("ES: %.2f%%\n", perc_es);
    printf("Outros: %.2f%%\n", perc_outros);

    return 0;
}

/*Resposta= Percentual de representacao:
            SP: 37.53%
            RJ: 20.29%
            MG: 16.17%
            ES: 15.03%
            Outros: 10.98%
*/