//Ejercicio 3 Realiza un programa que calcule el factorial de un número entero positivo

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    int numero; // Declara una variable entera 'numero'
    int i; // Variable de control para el bucle
    long long factorial = 1; // Declara una variable 'factorial' y la inicializa en 1 (usar long long para números grandes)

    printf("Ingresa un número entero positivo: "); // Pide al usuario un número
    scanf("%d", &numero); // Lee el valor ingresado y lo guarda en 'numero'

    if (numero < 0) { // Verifica si el número es negativo
        printf("El factorial no está definido para números negativos.\n"); // Mensaje de error
    } else {
        for (i = 1; i <= numero; i++) { // Bucle desde 1 hasta 'numero'
            factorial *= i; // Multiplica el valor acumulado por 'i'
        }
        printf("El factorial de %d es %lld\n", numero, factorial); // Imprime el resultado
    }

    return 0; 
}