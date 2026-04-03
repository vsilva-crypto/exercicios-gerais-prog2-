#include <stdio.h>
#include "matrix_utils.h"

void ImprimeMenu()
{
    printf ("1 - Somar Matrizes\n");
    printf ("2 - Subtrair Matrizes\n");
    printf ("3 - Multiplicar Matrizes\n");
    printf ("4 - Multiplicacao de matriz por escalar\n");
    printf ("5 - Transposta de uma matriz\n");
    printf ("6 - Encerrar o programa\n");
    printf ("Opcao escolhida: ");
}

int main ()
{
    ImprimeMenu();
    return 0;
}