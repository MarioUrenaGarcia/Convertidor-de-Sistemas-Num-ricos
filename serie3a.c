#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de hexadecimal a decimal

  Entradas: Numero Hexadecimal

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

    // Convertir entrada hexadecimal a decimal

    for (i = strlen(entrada) - 1; i >= 0; i--)
    {
        if (entrada[i] == 'A')
        {
            salida += 10 * pow(16, strlen(entrada) - 1 - i);
        }
        else if (entrada[i] == 'B')
        {
            salida += 11 * pow(16, strlen(entrada) - 1 - i);
        }
        else if (entrada[i] == 'C')
        {
            salida += 12 * pow(16, strlen(entrada) - 1 - i);
        }
        else if (entrada[i] == 'D')
        {
            salida += 13 * pow(16, strlen(entrada) - 1 - i);
        }
        else if (entrada[i] == 'E')
        {
            salida += 14 * pow(16, strlen(entrada) - 1 - i);
        }
        else if (entrada[i] == 'F')
        {
            salida += 15 * pow(16, strlen(entrada) - 1 - i);
        }
        else
        {
            salida += (entrada[i] - 48) * pow(16, strlen(entrada) - 1 - i);
        }
    }
    printf("\n\n%d", salida);

    // FINALIZACIÓN DEL PROGRAMA
    printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
    return 0;
}