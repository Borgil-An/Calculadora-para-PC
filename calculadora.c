#include <math.h>
#include <stdio.h>
#include <stdlib.h>


double somar (double n1, double n2);
double subtrair (double n1, double n2);
double dividir (double n1, double n2);
double multiplicar (double n1, double n2);
double fatorial (double n1);

int main (){
    double n1,n2;
    int op;

    while (1){
        printf ("\n MENU \n");
        printf ("1)SOMAR \n");
        printf ("2)SUBTRAIR \n");
        printf ("3)DIVIDIR \n");
        printf ("4)MULTIPLICAR \n");
        printf ("5)FATORIAL \n");
        printf ("6)SAIR \n");
        scanf ("%d", &op);

        switch (op)
        {
        case 1:
            printf ("\n Escolha seu primeiro numero\n");
            scanf ("%lf", &n1);
            printf ("\n Escolha seu segundo numero\n");
            scanf ("%lf", &n2);
            printf ("\n%lf", somar(n1,n2));
        break;
        
        case 2:
            printf ("\n Escolha seu primeiro numero\n");
            scanf ("%lf", &n1);
            printf ("\n Escolha seu segundo numero\n");
            scanf ("%lf", &n2);
            printf ("\n%lf", subtrair(n1,n2));
        break;

        case 3:
            printf ("\n Escolha seu primeiro numero\n");
            scanf ("%lf", &n1);
            printf ("\n Escolha seu segundo numero\n");
            scanf ("%lf", &n2);
            if (n2==0){
                printf ("\nNão é possivel dividir por zero\n");
                }
            else 
            printf ("\n%lf", dividir(n1,n2));
        break;

        case 4:
            printf ("\n Escolha seu primeiro numero\n");
            scanf ("%lf", &n1);
            printf ("\n Escolha seu segundo numero\n");
            scanf ("%lf", &n2);
            printf ("\n%lf", multiplicar(n1,n2));
        break; 

        case 5:
            printf ("\nEscolha seu numero\n");
            scanf ("%lf", &n1);
            if (n1<0){
                printf ("\nNão é possivel fatoriar negativos\n");
                }
            else 
           printf ("\n%lf", fatorial(n1));
        break;
        
        case 6:
        exit(0);
        break;

        default:
            printf ("\nDigitou algo invalido!\n");
        }
        printf ("\n\n");
}
return 0;
}

double somar (double n1, double n2){
    return n1+n2;
}
double subtrair (double n1, double n2){
    return n1-n2;
}
double dividir (double n1, double n2){
    return n1/n2;
}
double multiplicar (double n1, double n2){
    return n1*n2;
}
double fatorial (double n1){
    int fat;
    n1 = round(n1);
    for(fat = 1; n1 > 1; n1 = n1 - 1){
    fat = fat * n1;
    }
    return fat;
}
