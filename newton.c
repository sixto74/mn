#include "funciones.h"

void newton(void)
{
    float x0,x1,tol,e;
    int maxit, cont=0;

    system("clear");

	printf("Programa que implementa el metodo de Newton-Raphson para encontrar la\n");
	printf("raiz de una funcion\n\n");

	printf("\nDar el valor inicial x0: ");
	scanf("%f",&x0);
	x1=x0;
	printf("\nDar el valor de la tolerancia: ");
	scanf("%f",&tol);
	printf("\nDar el numero maximo de iteraciones:  ");
	scanf("%d",&maxit);

	printf ("\n\n|  i |    x0    |    x1    |   f(x0)  |   e   \n");
  printf ("_______________________________________\n");

  e=100;

	while(cont <= maxit)
	{

        x1 = x0 - f(x0)/df(x0);

	    printf("| %2d | %8.4f | %8.4f | %8.4f | %15.8f \n",cont,x0,x1,f(x0),e);

        e=fabs((x1-x0)/x1)*100;

        if (fabs(f(x0)) <= tol)
        {
            break;
        }
        x0 = x1;
        cont++;

	}
}

