//Ejercicio 5 Haz un programa que cuente del 1 al 100 usando un ciclo y muestre los números en pantalla.

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    int i; // Declara una variable entera 'i' para usar en el ciclo

    printf("Contando del 1 al 100:\n"); // Mensaje inicial

    for (i = 1; i <= 100; i++) { // Bucle for que inicia en 1 y llega hasta 100
        printf("%d\n", i); // Imprime el valor actual de 'i'
    }

    return 0; 
}