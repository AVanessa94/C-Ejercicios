//Ejercio 1  Escribe un programa que pida al usuario dos números enteros y muestre su suma.


#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    int a; // Declara una variable entera 'a'
    int b; // Declara una variable entera 'b'
    int suma; // Declara una variable 'suma' para almacenar la suma de 'a' y 'b'

    printf("Ingresa el primer número entero: "); // Pide al usuario el primer número
    scanf("%d", &a); // Lee el valor ingresado y lo guarda en 'a'

    printf("Ingresa el segundo número entero: "); // Pide al usuario el segundo número
    scanf("%d", &b); // Lee el valor ingresado y lo guarda en 'b'

    suma = a + b; // Calcula la suma de 'a' y 'b' y la guarda en 'suma'

    printf("La suma de %d y %d es %d\n", a, b, suma); // Imprime el resultado en pantalla

    return 0; 
}