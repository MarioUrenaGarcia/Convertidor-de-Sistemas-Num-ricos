#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de binario a decimal

  Entradas: Numero Binario

  Salidas: Numero Decimal

*/

// Main
// ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

    // Variables
    char entrada[264];
    int salida = 0;
    int i;
    // Procesos
    printf("Ingrese:    ");
    scanf("%s", entrada);

    // Convertir entrada binaria a decimal
    for (i = 0; i < strlen(entrada); i++)
    {
        if (entrada[i] == '1')
        {
            salida = salida + pow(2, strlen(entrada) - 1 - i);
            printf("%d\n", salida);
        }
        else if (entrada[i] == '0')
        {
            salida = salida + 0;
        }
    }

    printf("\n\n%d", salida);

    // FINALIZACIÓN DEL PROGRAMA
    printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
    return 0;
}
