#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de Hexadecimal a Binario

  Entradas: Numero Hexadecimal

  Salidas: Numero Binario

*/

// Main
// ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

    // Variables
    char entrada[264];
    char salida[264];
    int i;
    // Procesos
    strcpy(salida, "");
    printf("Ingrese:    ");
    scanf("%s", entrada);

    // Convertir entrada Hexadeximal a Binario

    for (i = 0; i < strlen(entrada); i++)
    {
        if (entrada[i] == '1')
        {
            strcat(salida, "0001");
        }
        else if (entrada[i] == '2')
        {
            strcat(salida, "0010");
        }
        else if (entrada[i] == '3')
        {
            strcat(salida, "0011");
        }
        else if (entrada[i] == '4')
        {
            strcat(salida, "0100");
        }
        else if (entrada[i] == '5')
        {
            strcat(salida, "0101");
        }
        else if (entrada[i] == '6')
        {
            strcat(salida, "0110");
        }
        else if (entrada[i] == '7')
        {
            strcat(salida, "0111");
        }
        else if (entrada[i] == '8')
        {
            strcat(salida, "1000");
        }
        else if (entrada[i] == '9')
        {
            strcat(salida, "1001");
        }
        else if (entrada[i] == 'A' || entrada[i] == 'a')
        {
            strcat(salida, "1010");
        }
        else if (entrada[i] == 'B' || entrada[i] == 'b')
        {
            strcat(salida, "1011");
        }
        else if (entrada[i] == 'C' || entrada[i] == 'c')
        {
            strcat(salida, "1100");
        }
        else if (entrada[i] == 'D' || entrada[i] == 'd')
        {
            strcat(salida, "1101");
        }
        else if (entrada[i] == 'E' || entrada[i] == 'e')
        {
            strcat(salida, "1110");
        }
        else if (entrada[i] == 'F' || entrada[i] == 'f')
        {
            strcat(salida, "1111");
        }
    }

    printf("\n\n%s", entrada);
    printf("\n\n%s", salida);

    // FINALIZACIÓN DEL PROGRAMA
    printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
    return 0;
}