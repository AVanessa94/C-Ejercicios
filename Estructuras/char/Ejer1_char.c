//Ejercio 1 Escribe un programa que lea un carácter y muestre su código ASCII.

#include <stdio.h> // Librería estándar para entrada y salida

int main() {
    char letra = 'Z';   // 'Z' tiene ASCII 90
    printf("Caracter: %c  ASCII: %u\n", letra, (unsigned)letra);
    return 0;
}
