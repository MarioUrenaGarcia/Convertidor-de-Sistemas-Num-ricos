#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Descripción e intención del programa: Convierte de hexadecimal a decimal

  Entradas: Numero Hexadecimal

  Salidas: Numero Decimal
*/
char hex_conv_dec(char entrada[264])
{
    // Variables
    int salida = 0;
    int i;
    // Procesos

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
    return salida;
}