#include "funciones.h"

void pfijo(void)
{
    float x0,tol,x;
    int maxit, cont=1;

    system("clear");

	printf("Programa que implementa el metodo de Newton-Raphson para encontrar la\n");
	printf("raiz de una funcion\n\n");

	printf("\nDar el valor inicial x0: ");
	scanf("%f",&x0);
	printf("\nDar el valor de la tolerancia: ");
	scanf("%f",&tol);
	printf("\nDar el numero maximo de iteraciones:  ");
	scanf("%d",&maxit);

	printf ("\n\n|  i |    x0    |    x    |   f(x)  |\n");
  printf ("_______________________________________\n");

	while(cont <= maxit)
	{
	    printf("| %2d | %8.4f | %8.4f | %8.4f |\n",cont,x0,x,f(x));

        x = (-x0*x0)/2 ;

        if (fabs(f(x)) <= tol)
        {
            break;
        }
        x0 = x;
        cont++;

	}
	printf("\n\nLa Raiz es: %f",x);
}
