#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de Octal a decimal

  Entradas: Numero Octal

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

    // Convertir entrada Octal a decimal

    for (i = strlen(entrada) - 1; i >= 0; i--)
    {
        salida += (entrada[i] - 48) * pow(8, strlen(entrada) - 1 - i);
    }
    printf("\n\n%d", salida);

    // FINALIZACIÓN DEL PROGRAMA
    printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
    return 0;
}