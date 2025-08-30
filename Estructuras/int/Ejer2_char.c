//Ejercicio 2  Crea un programa que determine si un número entero ingresado es par o impar.

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    int numero; // Declara una variable entera 'numero'

    printf("Ingresa un número entero: "); // Pide al usuario un número entero
    scanf("%d", &numero); // Lee el valor ingresado y lo guarda en 'numero'

    if (numero % 2 == 0) { // Verifica si el número es divisible entre 2
        printf("El número %d es par.\n", numero); // Imprime que el número es par
    } else { // Si no es divisible entre 2
        printf("El número %d es impar.\n", numero); // Imprime que el número es impar
    }

    return 0; 
}

