//Ejercio 4 Escribe un programa que encuentre el mayor de tres números enteros dados. 

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    int a, b, c; // Declara tres variables enteras 'a', 'b' y 'c'

    printf("Ingresa tres números enteros separados por espacio: "); // Pide al usuario 3 números
    scanf("%d %d %d", &a, &b, &c); // Lee los 3 números ingresados

    int mayor = a; // Supone que 'a' es el mayor inicialmente

    if (b > mayor) { // Compara si 'b' es mayor que 'mayor'
        mayor = b; // Actualiza el valor de 'mayor'
    }

    if (c > mayor) { // Compara si 'c' es mayor que 'mayor'
        mayor = c; // Actualiza el valor de 'mayor'
    }

    printf("El número mayor entre %d, %d y %d es: %d\n", a, b, c, mayor); // Imprime el mayor número

    return 0;
}