#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de binario a Hexadecimal

  Entradas: Numero Binario

  Salidas: Numero Hexadecimal

*/

// Main
// ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

    // Variables
    char entrada[264];
    char entrada_copia[264];
    char salida[264];
    char cuarteto[4];
    int espacios = 0;
    int i;
    int j;
    // Procesos
    printf("Ingrese:    ");
    scanf("%s", entrada);

    espacios = strlen(entrada);
    // Alargar cadena para que la cadena sea divisible entre 4
    if (strlen(entrada) % 4 != 0)
    {
        for (espacios = strlen(entrada); espacios % 4 != 0; espacios++)
        {
            strcat(entrada_copia, "0");
        }
        strcat(entrada_copia, entrada);
        strcpy(entrada, entrada_copia);
    }

    // Convertir entrada binaria a hexadecimal

    printf("\n\n%s", entrada);

    // FINALIZACIÓN DEL PROGRAMA
    printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
    return 0;
}
