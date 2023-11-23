#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Descripción e intención del programa: Convierte de hexadecimal a decimal

  Entradas: Numero Hexadecimal

  Salidas: Numero Decimal
*/

char hex_to_dec(char entrada[264]) // serie3a
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

/*
  Descripción e intención del programa: Convierte de binario a decimal

  Entradas: Numero Binario

  Salidas: Numero Decimal
*/

int bin_to_dec(char entrada[264]) // serie3b
{
    // Variables
    int salida = 0;
    int i;
    // Procesos
    // Convertir entrada binaria a decimal
    for (i = 0; i < strlen(entrada); i++)
    {
        if (entrada[i] == '1')
        {
            salida = salida + pow(2, strlen(entrada) - 1 - i);
        }
        else if (entrada[i] == '0')
        {
            salida = salida + 0;
        }
    }

    printf("\n\n%d", salida);

    return salida;
}

/*
  Descripción e intención del programa: Convierte de Octal a decimal

  Entradas: Numero Octal

  Salidas: Numero Decimal
*/

int oct_to_dec(int entrada[256]) // Serie 3c
{
    // Variables
    int salida = 0;
    int i;
    // Procesos
    // Convertir entrada Octal a decimal

    for (i = strlen(entrada) - 1; i >= 0; i--)
    {
        salida += (entrada[i] - 48) * pow(8, strlen(entrada) - 1 - i);
    }
    printf("\n\n%d", salida);

    return salida;
}

/*
  Descripción e intención del programa: Convierte de Decimal a Hexadecimal

  Entradas: Numero Decimal

  Salidas: Numero Hexadecimal
*/
char dec_to_hex(int entrada) // serie3d
{
    // Variables
    char salida[264];
    char conversion[256];
    int i;
    int j = 0;

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
    salida[j] = '\0';

    printf("\n\n%s", salida);
    return salida;
}

/*
  Descripción e intención del programa: Convierte de Decimal a Binario

  Entradas: Numero Decimal

  Salidas: Numero Binario
*/
char dec_to_bin(int entrada) // serie3e
{
    // Variables
    char salida[264];
    char conversion[256];
    int i;
    int j = 0;

    // Procesos
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
    return salida;
}

/*

  Descripción e intención del programa: Convierte de Decimal a Octal

  Entradas: Numero Decimal

  Salidas: Numero Octal

*/
char dec_to_oct(int entrada) // serie3f
{
    // Variables
    char salida[264];
    char conversion[256];
    int i;
    int j = 0;

    // Procesos
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
    salida[j] = '\0';
    printf("\n\n%s", salida);
    return salida;
}

/*
  Descripción e intención del programa: Convierte de binario a Hexadecimal

  Entradas: Numero Binario

  Salidas: Numero Hexadecimal

*/
char bin_to_hex(char entrada[256]) // serie3g
{
    printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

    // Variables
    char entrada_copia[264];
    char salida[264];
    char cuarteto[5];
    int espacios = 0;
    int i;
    int j;
    // Procesos
    strcpy(salida, "");

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

    printf("\n\n%s", salida);
    return salida;
}

/*

  Mario Ureña García

  Descripción e intención del programa: Convierte de Hexadecimal a Binario

  Entradas: Numero Hexadecimal

  Salidas: Numero Binario

*/
char hex_to_bin(char entrada[256]) // serie 3h
{
    // Variables
    char salida[264];
    int i;

    // Procesos
    strcpy(salida, "");

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
    printf("\n\n%s", salida);
    return salida;
}