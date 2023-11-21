#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de Decimal a Binario

  Entradas: Numero Decimal

  Salidas: Numero Binario

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

    // Convertir entrada decimal a binaria

    for (i = entrada; i > 0; i = i / 2)
    {
        if (i % 2 == 0)
        {
            strcat(conversion, "0");
        }
        else
        {
            strcat(conversion, "1");
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
