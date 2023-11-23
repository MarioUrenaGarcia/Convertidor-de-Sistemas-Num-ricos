#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de Decimal a Octal

  Entradas: Numero Decimal

  Salidas: Numero Octal

*/

// Main
// ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

    // Variables
    char salida[264];
    char conversion[256];
    int entrada = 0;
    int i;
    int j = 0;

    // Procesos
    printf("Ingrese:    ");
    scanf("%d", &entrada);

    // Convertir entrada decimal a Hexadecimal

    for (i = entrada; i > 0; i = i / 8)
    {
        if (i % 8 == 0)
        {
            strcat(conversion, "0");
        }
        else if (i % 8 == 1)
        {
            strcat(conversion, "1");
        }
        else if (i % 8 == 2)
        {
            strcat(conversion, "2");
        }
        else if (i % 8 == 3)
        {
            strcat(conversion, "3");
        }
        else if (i % 8 == 4)
        {
            strcat(conversion, "4");
        }
        else if (i % 8 == 5)
        {
            strcat(conversion, "5");
        }
        else if (i % 8 == 6)
        {
            strcat(conversion, "6");
        }
        else if (i % 8 == 7)
        {
            strcat(conversion, "7");
        }
    }
    // Invertir cadena de salida
    for (i = strlen(conversion) - 1; i >= 0; i--)
    {
        salida[j] = conversion[i];
        j++;
    }

    printf("\n\n%s", salida);

    // FINALIZACIÓN DEL PROGRAMA
    printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
    return 0;
}
