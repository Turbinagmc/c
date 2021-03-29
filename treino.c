#include <stdio.h>
#include <stdlib.h>
#define TAM 5
main () {
    // declaração do vetor
    float notas[TAM];
    int i;
    // leitura dos dados para o vetor
    for (i = 0; i < TAM; i++) {
        printf ("Digite a nota do aluno %d: ", i);
        scanf ("%f", &notas[i]);
    }
    // calcula a soma das notas e apresenta cada nota na tela
    float soma = 0;
    for (i = 0; i < TAM; i++) {
        soma = soma + notas[i];
        printf ("Nota %d = %.1f\n", i, notas[i]);
    }
    // calcula e apresenta a média das notas
    float media = soma / TAM;
    printf ("Media das notas = %.1f\n", media);
    system ("PAUSE");
}
