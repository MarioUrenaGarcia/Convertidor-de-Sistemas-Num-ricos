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
  char entrada[264];
  // Procesos
  printf("Ingrese:    ");
  scanf("%s", entrada);

  hex_to_dec(entrada);

  // FINALIZACIÓN DEL PROGRAMA
  printf("\n\n\tPrograma Finalizado con ÉXITO\n\n");
  return 0;
}

// Funciones -----------------------------------------------------------------------

/**
 *   Que hace
 *   @param
 *   @return
 *   @Ejemplo
 */
