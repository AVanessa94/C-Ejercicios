//Ejercicio 2 Crea un programa que sume dos números de punto flotante de doble precisión.

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    double num1 = 5.98; // Declara una variable double 'num1' y le asigna el valor 5.75
    double num2 = 5.40; // Declara una variable double 'num2' y le asigna el valor 3.40
    double suma = num1 + num2; // Declara una variable 'suma' y almacena la suma de 'num1' y 'num2'

    // Imprime el resultado en pantalla mostrando los números y su suma
    printf("La suma de %.2f y %.2f es %.2f\n", num1, num2, suma);

    return 0; // Indica que el programa terminó correctamente
}