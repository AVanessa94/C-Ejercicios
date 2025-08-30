//Ejercio 3 Realiza un programa que convierta una letra minúscula a mayúscula.

#include <stdio.h>
#include <ctype.h> // Librería para usar la función toupper

int main() { // Función principal
    char letra = 'g'; // Declara una variable char 'letra' y le asigna el carácter 'g' en minúscula

    char mayuscula = toupper(letra); // Convierte el carácter a mayúscula usando toupper

    printf("La letra minúscula es: %c y en mayúscula es: %c\n", letra, mayuscula); // Imprime la letra en minúscula y en mayúscula

    return 0; // Indica que el programa terminó correctamente
}
