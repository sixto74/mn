#include "header.h"

int main()
{
    char opc,resp;

    do{
        menu();
        scanf("%c",&opc);

        switch(opc)
        {
            case '1':
                biseccion();
                break;
            case '2':
                rfalsa();
                break;
            case '3':
                secante();
                break;
            case '4':
                newton();
                break;
            case '5':
                pfijo();
                break;
            case '0':
                printf("\nAdios!");
                break;
            default:
                printf("\nOpcion Invalida\n");
        }
        printf("\n\nDeseas realizar otro calculo?: (s/n)");
        scanf("%c %c",&resp);
    }while(resp=='s');

    return 0;
}
