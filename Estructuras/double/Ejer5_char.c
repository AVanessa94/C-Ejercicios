//Ejercicio 5 Haz un programa que calcule la potencia de un número (base y exponente double).

#include <stdio.h>   // Incluye la biblioteca estándar de entrada y salida
#include <math.h>    // Incluye la biblioteca matemática para usar pow()


#include <stdio.h>  // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    double base, resultado = 1.0;
    int exponente; // Lo haremos entero para evitar usar pow()

    // Entrada de datos
    printf("Ingresa la base: ");
    scanf("%lf", &base);

    printf("Ingresa el exponente (entero): ");
    scanf("%d", &exponente);

    // Cálculo de la potencia manualmente
    if (exponente >= 0) {
        for (int i = 0; i < exponente; i++) {
            resultado *= base;
        }
    } else { 
        for (int i = 0; i < -exponente; i++) {
            resultado *= base;
        }
        resultado = 1.0 / resultado; // Si el exponente es negativo
    }

    // Salida de datos
    printf("%.2f elevado a %d es igual a %.5f\n", base, exponente, resultado);

    return 0; 
