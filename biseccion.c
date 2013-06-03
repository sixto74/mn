//#include "header.h"
#include "funciones.h"

void biseccion(void)
{
  float xa, xb, tol, xm;
  int cont, maxit;

  system("clear");

  printf("Programa para calcular una raiz por el Metodo de la Biseccion\n");

  printf ("\nDe el valor del limite izquierdo xa: ");
  scanf("%f",&xa);
  printf ("\nDe el valor del limite derecho xb: ");
  scanf("%f",&xb);
  printf ("\nDe el valor de la tolerancia tol: ");
  scanf("%f",&tol);
  printf ("\nDe el numero maximo de iteraciones: ");
  scanf("%d",&maxit);

  printf ("\n\n|  i |    xa    |    xb    |  f(xa)   |  f(xb)   |    xm    |  f(xm)   | \n");
  printf ("_______________________________________________________________________\n");
  cont = 0;

  if (f(xa)*f(xb) < 0)
    {
      while( cont <= maxit )
	{

	xm = (xa + xb)/2.0;

	if (f(xa)*f(xm)<0)
	  {
	    xb = xm;
	  }
	else
	  {
	    xa = xm;
	  }
	cont++;
	printf ("| %2d | %8.4f | %8.4f | %8.4f | %8.4f | %8.4f | %15.8f |\n",cont,xa, xb, f(xa), f(xb), xm, f(xm) );

	if ( fabs(f(xm)) <= tol )
	  break;

	}
      printf ("\nLa Raiz es %6.4f\n",xm);
    }
}
