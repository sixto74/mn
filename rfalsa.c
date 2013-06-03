//#include "header.h"
#include "funciones.h"

void rfalsa(void)
{
  float xa, xb, tol, xr;
  int cont, maxit;

  system("clear");

  printf("Programa para calcular una raiz por el Metodo de la Regla Falsa\n");

  printf ("\nDe el valor del limite izquierdo xa: ");
  scanf("%f",&xa);
  printf ("\nDe el valor del limite derecho xb: ");
  scanf("%f",&xb);
  printf ("\nDe el valor de la tolerancia tol: ");
  scanf("%f",&tol);
  printf ("\nDe el numero maximo de iteraciones: ");
  scanf("%d",&maxit);

  printf ("\n\n|  i |    xa    |    xb    |  f(xa)   |  f(xb)   |    xr    |  f(xr)   | \n");
  printf ("_______________________________________________________________________\n");
  cont = 0;

  if (f(xa)*f(xb) < 0)
  {
    while( cont <= maxit )
	{

        xr = xb - (f(xb)*(xa - xb))/(f(xa) - f(xb));

        if (f(xa)*f(xr)<0)
          {
            xb = xr;
          }
        else
          {
            xa = xr;
          }
        cont++;
        printf ("| %2d | %8.4f | %8.4f | %8.4f | %8.4f | %8.4f | %8.4f |\n",cont,xa, xb, f(xa), f(xb), xr, f(xr) );

        if ( fabs(f(xr)) <= tol )
        {
          break;
        }
	}
    printf ("\nLa Raiz es %6.4f\n",xr);
  }
}

