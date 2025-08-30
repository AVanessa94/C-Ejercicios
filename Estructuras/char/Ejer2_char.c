//Ejercio 2 Crea un programa que determine si un carácter es una vocal o consonante

#include <stdio.h>

int main() { // Función principal
    char letra = 'e'; // Declara una variable char 'letra' y le asigna el carácter 'e'

    // Verifica si 'letra' es una vocal (minúscula o mayúscula)
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("El carácter %c es una VOCAL\n", letra); // Imprime que es vocal
    } else {
        printf("El carácter %c es una CONSONANTE\n", letra); // Imprime que es consonante
    }

    return 0;
}
