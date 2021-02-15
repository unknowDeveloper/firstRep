#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){

    int n1, n2, result;
    int op;

    printf("\t\t\t==========CALCULADORA 2.0==========\n");

    do
    {

        printf("(0)SAIR\n");
        printf("(1)SOMA\n");
        printf("(2)SUBTRACAO\n");
        printf("(3)MULTIPLICACAO\n");
        printf("(4)DIVISAO\n");

        printf("\nQual operacao deseja ?\n");
        scanf("%i", &op);

        if (op == 1 || op == 2 || op == 3 || op == 4) {
                
            printf("\nV1: \n");
            scanf("%i", &n1);

            printf("\nV2: \n");
            scanf("%i", &n2);
        }

        if (op != 1 || op != 2 || op != 3 || op != 4) {
            printf("Operacao inexistente! Digite uma operacao valida!\n\n");
        }

        if (op == 1) {
            printf("\n\nResultado: %i\n\n", n1 + n2);
        }else if (op == 2) {
            printf("\n\nResultado: %i\n\n", n1 - n2);
        }else if (op == 3) {
            printf("\n\nResultado: %i\n\n", n1 * n2);
        }else if (op == 4) {
            printf("\n\nResultado: %i\n\n", n1 / n2);
        }

       
    }while(op != 0);

    system("clear");

    return 0;
}