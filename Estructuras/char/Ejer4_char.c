//Ejercio 4 Escribe un programa que cuente cuántas veces aparece una letra en una palabra.

#include <stdio.h>
#include <string.h> // Librería para funciones con cadenas

int main() { // Función principal
    char palabra[] = "programacion"; // Declara una cadena (palabra) fija
    char letra = 'o'; // Declara la letra que queremos buscar
    int contador = 0; // Variable para contar las veces que aparece la letra

    // Recorre la palabra carácter por carácter
    for (int i = 0; i < strlen(palabra); i++) { 
        if (palabra[i] == letra) { // Si el carácter actual es igual a la letra buscada
            contador++; // Aumenta el contador
        }
    }

    // Muestra la palabra, la letra buscada y cuántas veces aparece
    printf("En la palabra \"%s\", la letra '%c' aparece %d veces.\n", palabra, letra, contador);

    return 0; 
}
