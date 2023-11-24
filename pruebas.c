#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cambio(char cadena[]);

int main(void)
{
    char str[256];

    strcpy(str, "Hola mundo");
    printf("\n%s", str);
    cambio(str);
    printf("\n%s", str);
}

void cambio(char cadena[])
{
    strcpy(cadena, "Adios mundo");
}