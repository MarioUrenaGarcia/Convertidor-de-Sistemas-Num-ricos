#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de Decimal a Hexadecimal

  Entradas: Numero Decimal

  Salidas: Numero Hexadecimal

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

    for (i = entrada; i > 0; i = i / 16)
    {
        if (i % 16 == 0)
        {
            strcat(conversion, "0");
        }
        else if (i % 16 == 1)
        {
            strcat(conversion, "1");
        }
        else if (i % 16 == 2)
        {
            strcat(conversion, "2");
        }
        else if (i % 16 == 3)
        {
            strcat(conversion, "3");
        }
        else if (i % 16 == 4)
        {
            strcat(conversion, "4");
        }
        else if (i % 16 == 5)
        {
            strcat(conversion, "5");
        }
        else if (i % 16 == 6)
        {
            strcat(conversion, "6");
        }
        else if (i % 16 == 7)
        {
            strcat(conversion, "7");
        }
        else if (i % 16 == 8)
        {
            strcat(conversion, "8");
        }
        else if (i % 16 == 9)
        {
            strcat(conversion, "9");
        }
        else if (i % 16 == 10)
        {
            strcat(conversion, "A");
        }
        else if (i % 16 == 11)
        {
            strcat(conversion, "B");
        }
        else if (i % 16 == 12)
        {
            strcat(conversion, "C");
        }
        else if (i % 16 == 13)
        {
            strcat(conversion, "D");
        }
        else if (i % 16 == 14)
        {
            strcat(conversion, "E");
        }
        else if (i % 16 == 15)
        {
            strcat(conversion, "F");
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
