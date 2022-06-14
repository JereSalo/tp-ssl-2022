#include <stdio.h>
#include <stdlib.h>
#include <string.h>     // strlen
#include <ctype.h>      // toupper y isdigit
#include <math.h>       // pow

int acumuladorDecimal = 0;

typedef struct NodoEntero{      // Crear el Nodo para enteros
    int valor;
    struct NodoEntero *sig;
}Entero;

/* Funciones */

void sumarDecimales (int decimal){
    acumuladorDecimal += decimal;
}

int caracterHexadecimal(char caracter) {
    // isdigit: Comprueba sin el carácter es un dígito numerico (0-9)
    if (isdigit(caracter)) return caracter - '0';   // '0' en ASCCI es 48

// toupper: Toma un caracter y devuelve el mismo pero en mayuscula
return 10 + (toupper(caracter) - 'A');  // 'A' en ASCCI es 65
}

int ConversorDecimal(char *numeroAConvertir, int longitud, int base){
    unsigned long decimal = 0;
    int potencia = 0;   // Empieza en "0" y se incrementa a medida que pasamos de caracter a caracter

    switch (base){
    case 8:     // Octal
        for (int i = longitud - 1; i >= 0; i --){
            // Obtener el decimal a partir del valor del caracter en ASCCI
            int valorActual = numeroAConvertir[i] - '0';    // '0' en ASCCI es 48
            // pow: base ^ potencia
            unsigned long elevado = pow (base, potencia) * valorActual;    // numero * 8 ^ potencia

            decimal += elevado;   // Sumamos valores
            potencia ++;
        }
    break;
    
    case 16:    // Hexadecimal
        for (int i = longitud - 1; i >= 2; i --){     // Para ignorar el "0x - 0X" en la operacion
            // Obtener el decimal a partir del valor del caracter en ASCCI
            int valorActual = caracterHexadecimal (numeroAConvertir[i]);
            unsigned long elevado = pow (base, potencia) * valorActual;    // numero * 16 ^ potencia

            decimal += elevado;
            potencia ++;
        }
    break;
    }

return decimal;
}

Entero *agregarEntero(Entero *listaEnteros, int valor){
    Entero *nuevoEntero, *aux;
    // Reservar memoria suficiente para nuestros enteros
    nuevoEntero = (Entero *) malloc (sizeof(Entero));
    // Agregamos valores y apuntamos al siguiente Nodo
    nuevoEntero -> valor = valor;
    nuevoEntero -> sig = NULL;

    if (listaEnteros == NULL){
        listaEnteros = nuevoEntero;     // Para agregar el PRIMER ELEMENTO a la lista
    } else {
        aux = listaEnteros;             // Para agregar el RESTO DE ELEMENTOS a la lista

        while (aux -> sig != NULL){
            aux = aux -> sig;
        }

        aux -> sig = nuevoEntero;
    }

return listaEnteros;
}

void imprimirReporte (Entero *listaDecimales, Entero *listaOctales, Entero *listaHexadecimales){
    printf ("\nREPORTE:\n============================================\n\n");

    printf ("-> Constantes enteras octales halladas:\n\n");
    while (listaOctales != NULL){
        printf ("\tConstante de valor decimal: %d\n", listaOctales -> valor);
        listaOctales = listaOctales -> sig;
    }

    printf ("\n-----------------------------------------\n-> Constantes enteras decimales halladas:\n\n");
    while (listaDecimales != NULL){
        printf ("\tConstante decimal de valor: %d\n", listaDecimales -> valor);
        listaDecimales = listaDecimales -> sig;
    }
    printf("\nTotal acumulado de sumar todas ellas: %d\n", acumuladorDecimal);

    printf ("\n-----------------------------------------\n-> Constantes enteras hexadecimales halladas:\n\n");
    while (listaHexadecimales != NULL){
        printf ("\tConstante de valor decimal: %d\n", listaHexadecimales -> valor);
        listaHexadecimales = listaHexadecimales -> sig;
    }
}


/* Main */
/*
int main(){
    listaEnteros = agregarEntero(listaEnteros, 10, "Decimal");
    listaEnteros = agregarEntero(listaEnteros, 010, "Octal");
    listaEnteros = agregarEntero(listaEnteros, 0xF, "Hexadecimal");
    
    imprimirReporte(listaEnteros);
return 0;
}
*/