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
    char cuarteto[5];
    int espacios = 0;
    int i;
    int j;
    // Procesos
    strcpy(salida, "");
    printf("Ingrese:    ");
    scanf("%s", entrada);

    espacios = strlen(entrada);
    // Alargar cadena para que la cadena sea divisible entre 4
    if (strlen(entrada) % 4 != 0)
    {
        strcpy(entrada_copia, "");
        for (espacios = strlen(entrada); espacios % 4 != 0; espacios++)
        {
            strcat(entrada_copia, "0");
        }
        strcat(entrada_copia, entrada);
        strcpy(entrada, entrada_copia);
    }

    // Convertir entrada binaria a hexadecimal

    for (i = 0; i + 3 < strlen(entrada); i += 4)
    {
        cuarteto[0] = entrada[i];
        cuarteto[1] = entrada[i + 1];
        cuarteto[2] = entrada[i + 2];
        cuarteto[3] = entrada[i + 3];
        cuarteto[4] = '\0';
        if (strcmp(cuarteto, "0000") == 0)
        {
            strcat(salida, "0");
        }
        else if (strcmp(cuarteto, "0001") == 0)
        {
            strcat(salida, "1");
        }
        else if (strcmp(cuarteto, "0010") == 0)
        {
            strcat(salida, "2");
        }
        else if (strcmp(cuarteto, "0011") == 0)
        {
            strcat(salida, "3");
        }
        else if (strcmp(cuarteto, "0100") == 0)
        {
            strcat(salida, "4");
        }
        else if (strcmp(cuarteto, "0101") == 0)
        {
            strcat(salida, "5");
        }
        else if (strcmp(cuarteto, "0110") == 0)
        {
            strcat(salida, "6");
        }
        else if (strcmp(cuarteto, "0111") == 0)
        {
            strcat(salida, "7");
        }
        else if (strcmp(cuarteto, "1000") == 0)
        {
            strcat(salida, "8");
        }
        else if (strcmp(cuarteto, "1001") == 0)
        {
            strcat(salida, "9");
        }
        else if (strcmp(cuarteto, "1010") == 0)
        {
            strcat(salida, "A");
        }
        else if (strcmp(cuarteto, "1011") == 0)
        {
            strcat(salida, "B");
        }
        else if (strcmp(cuarteto, "1100") == 0)
        {
            strcat(salida, "C");
        }
        else if (strcmp(cuarteto, "1101") == 0)
        {
            strcat(salida, "D");
        }
        else if (strcmp(cuarteto, "1110") == 0)
        {
            strcat(salida, "E");
        }
        else if (strcmp(cuarteto, "1111") == 0)
        {
            strcat(salida, "F");
        }
    }

    printf("\n\n%s", entrada);
    printf("\n\n%s", salida);

    // FINALIZACIÓN DEL PROGRAMA
    printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
    return 0;
}
