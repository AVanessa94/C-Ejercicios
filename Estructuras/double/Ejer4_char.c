//Ejercicio 4 Escribe un programa que determine si un número double es positivo, negativo o cero.


#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    double numero; // Declara una variable double para almacenar el número

    // Solicita al usuario ingresar un número
    printf("Ingrese un número: ");
    scanf("%lf", &numero); // Lee el número ingresado por el usuario

    // Condiciones para verificar si es positivo, negativo o cero
    if (numero > 0) {
        printf("El número %.2f es positivo.\n", numero);
    } else if (numero < 0) {
        printf("El número %.2f es negativo.\n", numero);
    } else {
        printf("El número es cero.\n");
    }

    return 0; 
}