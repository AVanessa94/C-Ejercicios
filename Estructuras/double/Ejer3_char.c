//Ejercicio 3 Realiza un programa que calcule el promedio de 5 números ingresados por el usuario.

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    double n1, n2, n3, n4, n5; // Declara 5 variables double para almacenar los números
    double promedio; // Declara una variable para guardar el promedio

    // Solicita al usuario ingresar los 5 números
    printf("Ingrese 5 números:\n");
    scanf("%lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5); // Lee los valores ingresados por el usuario

    promedio = (n1 + n2 + n3 + n4 + n5) / 5; // Calcula el promedio sumando y dividiendo entre 5

    // Imprime el resultado en pantalla
    printf("El promedio de los 5 números es: %.2f\n", promedio);

    return 0; 
}