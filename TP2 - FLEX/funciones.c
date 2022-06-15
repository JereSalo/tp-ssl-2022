#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int acumuladorDecimal = 0;

typedef struct NodoEntero{      // Crear el Nodo para enteros
    int valor;
    struct NodoEntero *sig;
}Entero;

typedef struct NodoReal{
    double valor;
    struct NodoReal *sig;
}Real;

typedef struct NodoCaracter{
    char valor;
    int ordenAparicion;
    struct NodoCaracter *sig;
}Caracter;



/* Funciones */

void sumarDecimales (int decimal){
    acumuladorDecimal += decimal;
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

Real *agregarReales(Real *listaReales, float valor){
    Real *nuevoReal, *aux;

    nuevoReal = (Real *) malloc (sizeof(Real));

    nuevoReal -> valor = valor;
    nuevoReal -> sig = NULL;

    if (listaReales == NULL){
        listaReales = nuevoReal;
    } else {
        aux = listaReales;

        while (aux -> sig != NULL){
            aux = aux -> sig;
        }
        
        aux -> sig = nuevoReal;
    }

return listaReales;
}

void imprimirReporte (Entero *listaDecimales, Entero *listaOctales, Entero *listaHexadecimales, Real *listaReales){
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

    printf("\n-----------------------------------------\n-> Constantes reales halladas:\n\n");
    while (listaReales != NULL){
        double parteDecimal, parteEntera;
        // modf: Separa parte entera y la parte decimal de un numero tipo "double"
        parteDecimal = modf(listaReales -> valor, &parteEntera);
        printf ("\tParte entera: %f. Parte decimal: %f\n", parteEntera, parteDecimal);
        listaReales = listaReales -> sig;
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