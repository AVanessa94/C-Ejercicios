//Ejercicio 1 Escribe un programa que calcule el valor de pi usando la serie de Leibniz con 1000 términos.

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    int n = 1000; // Número de términos de la serie
    double pi = 0.0; // Variable para almacenar el valor aproximado de pi

    // Ciclo que suma los 1000 términos de la serie de Leibniz
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1); // Suma si el índice es par
        } else {
            pi -= 1.0 / (2 * i + 1); // Resta si el índice es impar
        }
    }

    pi = pi * 4; // Multiplica el resultado por 4 para aproximar pi

    // Imprime el valor calculado de pi
    printf("El valor aproximado de pi con %d terminos es: %.10f\n", n, pi);

    return 0; // Indica que el programa terminó correctamente
}
