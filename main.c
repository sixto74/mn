#include "header.h"

int main()
{
    char resp;
    int opc;

    do{
        system("clear");
        menu();
        scanf("%d",&opc);

        switch(opc)
        {
            case 1:
                biseccion();
                break;
            case 2:
                rfalsa();
                break;
            case 3:
                secante();
                break;
            case 4:
                newton();
                break;
            case 5:
                pfijo();
                break;
            case 0:
                printf("\nAdios!");
                break;
            default:
                printf("\nOpcion Invalida\n");
        }
        fflush(stdin);
        printf("\n\nDeseas realizar otro calculo?: (s/n)");
        scanf("%c",&resp);
        //fflush(stdin);
    }while(resp=='s');

    return 0;
}
