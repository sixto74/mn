#include "funciones.h"

void secante(void)
{
  float x0, x1, tol, x;
  int cont, maxit;

  system("clear");

  printf("Programa para calcular una raiz por el Metodo de la Secante\n");

  printf ("\nDe el valor del valor inicial x0: ");
  scanf("%f",&x0);
  printf ("\nDe el valor de x1: ");
  scanf("%f",&x1);
  printf ("\nDe el valor de la tolerancia tol: ");
  scanf("%f",&tol);
  printf ("\nDe el numero maximo de iteraciones: ");
  scanf("%d",&maxit);

  printf ("\n\n|  i |    x0    |    x1    |  f(x0)   |  f(x1)   |    x    |  f(x)   | \n");
  printf ("_______________________________________________________________________\n");
  cont = 1;


  while( cont <= maxit )
	{

	x = x1 - ((x1 - x0)*f(x1)) / (f(x1)-f(x0));

	x0=x1;
	x1=x;
	cont++;
	printf ("| %2d | %8.4f | %8.4f | %8.4f | %8.4f | %8.4f | %8.4f |\n",cont,x0, x1, f(x0), f(x1), x, f(x) );

	if ( fabs(f(x)) <= tol )
	  break;

	}
      printf ("\nLa Raiz es %6.4f\n",x);

}
