#include "alfaconv.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*

  Mario Ureña García

  Descripción e intención del programa:

  Entradas:

  Salidas:

*/

// Declarar Estructuras ------------------------------------------------------------

// Declarar funciones --------------------------------------------------------------

// Main ----------------------------------------------------------------------------

int main(int argc, char *argv[])
{
  printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

  // Variables
  char entrada[256];
  char salida[256];
  char conversion[2];
  int proceso = 0;
  int entrada_int = 0;
  int salida_int = 0;
  int abrir = 0;

  FILE *fp;
  char archivo[256];

  // Procesos
  if (argc < 2)
  {
    printf("Ingrese un número:    ");
    scanf("%s", entrada);

    printf("\nIngrese la base de salida:    ");
    scanf("%s", conversion);

    printf("\n¿Desea guardar el resultado en un archivo? (1 = Sí, 0 = No):    ");
    scanf("%d", &abrir);

    if (abrir == 1)
    {
      printf("\nIngrese el nombre del archivo:    ");
      scanf("%s", archivo);
    }
  }

  if (entrada[0] == '0' && entrada[1] != 'x')
  {
    proceso = 1; // La entrada es un octal
  }
  else if (entrada[0] == '0' && entrada[1] == 'x' || entrada[1] == 'X')
  {
    proceso = 2; // La entrada es un hexadecimal
  }
  else if (entrada[0] == 'b')
  {
    proceso = 3; // La entrada es un binario
  }
  else
  {
    proceso = 4; // La entrada es un decimal
  }

  if (proceso == 4 && strcmp(conversion, "b") == 0)
  {
    printf("\n\nDECIMAL A BINARIO");
    entrada_int = atoi(entrada);
    dec_to_bin(entrada_int);
  }

  else if (proceso == 4 && strcmp(conversion, "h") == 0)
  {
    printf("\n\nDECIMAL A HEXADECIMAL");
    entrada_int = atoi(entrada);
    dec_to_hex(entrada_int, salida);
  }

  else if (proceso == 4 && strcmp(conversion, "0") == 0)
  {
    printf("\n\nDECIMAL A OCTAL");
    entrada_int = atoi(entrada);
    dec_to_oct(entrada_int);
  }

  else if (proceso == 3 && strcmp(conversion, "d") == 0)
  {
    printf("\n\nBINARIO A DECIMAL");
    bin_to_dec(entrada);
  }

  else if (proceso == 3 && strcmp(conversion, "h") == 0)
  {
    printf("\n\nBINARIO A HEXADECIMAL");
    bin_to_hex(entrada);
  }
  else if (proceso == 2 && strcmp(conversion, "d") == 0)
  {
    printf("\n\nHEXADECIMAL A DECIMAL");
    salida_int = hex_to_dec(entrada);
  }

  else if (proceso == 2 && strcmp(conversion, "b") == 0)
  {
    printf("\n\nHEXADECIMAL A BINARIO");
    hex_to_bin(entrada);
  }

  else if (proceso == 1 && strcmp(conversion, "d") == 0)
  {
    printf("\n\nOCTAL A DECIMAL");
    salida_int = oct_to_dec(entrada);
  }
  else
  {
    printf("\n\n\tNo Implementado");
  }

  if (abrir == 1)
  {
    fp = fopen(archivo, "a");
    fprintf(fp, "%s  ->  %s \n", entrada, salida);
    fclose(fp);
  }
  // FINALIZACIÓN DEL PROGRAMA
  printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
  return 0;
}
