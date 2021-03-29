#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
    int *v, n=0, i, med=0, tnota=0;
    int nota;

    printf("Quantidade de alunos: ");	//Nao entendi por que tinha ,nota depois das aspas
    scanf ("%d", &n);
    printf("Insira as notas:\n");
    v = (int *) malloc (n * sizeof (int));
    for (i = 0; i < n; i++)
        scanf ("%d", v + i);	//Aqui e o endereco onde o valor vai ser guardado

    for (i = 0; i < n; i++)
        tnota += *(v + i); 		//Valor guardado
    med = tnota / n;
    printf("%.2d", med);
    free(v);	//Aqui libera a memoria alocada
    getch();
}
