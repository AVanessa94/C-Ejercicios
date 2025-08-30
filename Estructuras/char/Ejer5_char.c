//Ejercio 5 Haz un programa que verifique si un carácter ingresado es un dígito numérico.


#include <stdio.h>

int main() { // Función principal
    char caracter; // Variable para almacenar el carácter ingresado

    // Pide al usuario un carácter
    printf("Ingresa un caracter: ");
    scanf("%c", &caracter); // Lee el carácter desde el teclado

    // Verifica si el carácter es un dígito (entre '0' y '9')
    if (caracter >= '0' && caracter <= '9') {
        printf("El caracter '%c' es un dígito numerico.\n", caracter);
    } else {
        printf("El caracter '%c' NO es un dígito numerico.\n", caracter);
    }

    return 0; // Indica que el programa terminó correctamente
}
