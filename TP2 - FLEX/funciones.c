#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct NodoConValor{ // Crear el Nodo para elementos con valor
    char *elemento;
    int valor;
    struct NodoConValor *sig;
}ConValor;

typedef struct NodoConContador{ // Crear el Nodo para elementos con contador
    char *elemento;
    int contador;
    struct NodoConContador *sig;
}ConContador;

typedef struct NodoConTipo{ // Crear el Nodo para elementos con tipo
    char *elemento;
    char *tipo;
    struct NodoConTipo *sig;
}ConTipo;

typedef struct NodoEntero{ // Crear el Nodo para Enteros (Octales, Decimales y Hexadecimales)
    int valor;
    struct NodoEntero *sig;
}Entero;

typedef struct NodoReal{ // Crear el Nodo para Reales (Numeros decimales)
    double valor;
    struct NodoReal *sig;
}Real;

typedef struct NodoCaracter{ // Crear el Nodo para Caracteres
    char caracter;
    struct NodoCaracter *sig;
}Caracter;


/* Funciones */

ConValor *agregarListaConValor(ConValor *Lista, char *elemento, int valor){
    ConValor *aux = Lista;
    // Comprobamos si ya existe el valor ingresado
    while (aux != NULL){
        //strcmp: Comprueba si dos elementos son iguales
        if (strcmp(aux -> elemento, elemento) == 0){
            return Lista; // Hubo coincidencia
        }
        aux = aux -> sig;
    }
    
    ConValor *nuevoElemento = NULL;
    // Reservar memoria suficiente para nuestros enteros
    nuevoElemento = (ConValor *) malloc (sizeof(ConValor));
    // Agregamos valores y apuntamos al siguiente Nodo
    nuevoElemento -> elemento = elemento;
    nuevoElemento -> valor = valor;
    nuevoElemento -> sig = NULL;
    
    if (Lista == NULL || valor < Lista -> valor){
        nuevoElemento -> sig = Lista;
        Lista = nuevoElemento; // Para agregar el PRIMER ELEMENTO a la lista
    } else {
        aux = Lista; // Para agregar el RESTO DE ELEMENTOS a la lista
        // Buscamos la posicion donde insertamos el elemento
        while (aux -> sig != NULL && aux -> sig -> valor < valor){
            aux = aux -> sig;
        }
        if (aux -> sig != NULL){
            nuevoElemento -> sig = aux -> sig;
        }
        aux -> sig = nuevoElemento;
    }

return Lista;
}

ConContador *agregarListaContador(ConContador *Lista, char *valor){
    ConContador *aux = Lista;
    // Comprobamos si ya existe el valor ingresado
    while (aux != NULL){
        //strcmp: Comprueba si dos elementos son iguales 
        if (strcmp(aux -> elemento, valor) == 0){
            aux -> contador ++;
            return Lista; // Hubo coincidencia
        }
        aux = aux -> sig;
    }
    
    ConContador *nuevoElemento = NULL;
    // Reservar memoria suficiente para nuestros enteros
    nuevoElemento = (ConContador *) malloc (sizeof(ConContador));
    // Agregamos valores y apuntamos al siguiente Nodo
    nuevoElemento -> elemento = valor;
    nuevoElemento -> contador = 1;
    nuevoElemento -> sig = NULL;
    
    if (Lista == NULL || strcmp(Lista -> elemento, valor) == 1){
        nuevoElemento -> sig = Lista;
        Lista = nuevoElemento; // Para agregar el PRIMER ELEMENTO a la lista
    } else {
        aux = Lista; // Para agregar el RESTO DE ELEMENTOS a la lista
        // Buscamos la posicion donde insertamos el elemento
        while (aux -> sig != NULL && strcmp(aux -> sig -> elemento, valor) == -1){
            aux = aux -> sig;
        }
        if (aux -> sig != NULL){
            nuevoElemento -> sig = aux -> sig;
        }
        aux -> sig = nuevoElemento;
    }

return Lista;
}

ConTipo *agregarListaTipos(ConTipo *Lista, char *valor, char *tipo){
    ConTipo *aux = Lista;
    // Comprobamos si ya existe el valor ingresado
    while (aux != NULL){
        //strcmp: Comprueba si dos elementos son iguales
        if (strcmp(aux -> elemento, valor) == 0){
            return Lista; // Hubo coincidencia
        }
        aux = aux -> sig;
    }
    
    ConTipo *nuevoElemento = NULL;
    // Reservar memoria suficiente para nuestros enteros
    nuevoElemento = (ConTipo *) malloc (sizeof(ConTipo));
    // Agregamos valores y apuntamos al siguiente Nodo
    nuevoElemento -> elemento = valor;
    nuevoElemento -> tipo = tipo;
    nuevoElemento -> sig = NULL;
    
    if (Lista == NULL){
        Lista = nuevoElemento; // Para agregar el PRIMER ELEMENTO a la lista
    } else {
        aux = Lista; // Para agregar el RESTO DE ELEMENTOS a la lista
        while (aux -> sig != NULL){
            aux = aux -> sig;
        }
        aux -> sig = nuevoElemento;
    }

return Lista;
}

Entero *agregarEntero(Entero *Lista, int valor){
    Entero *aux = Lista;
    // Comprobamos si ya existe el valor ingresado
    while (aux != NULL){
        if (aux -> valor == valor){
            return Lista; // Hubo coincidencia
        }
        aux = aux -> sig;
    }
    
    Entero *nuevoEntero = NULL;
    // Reservar memoria suficiente para nuestros enteros
    nuevoEntero = (Entero *) malloc (sizeof(Entero));
    // Agregamos valores y apuntamos al siguiente Nodo
    nuevoEntero -> valor = valor;
    nuevoEntero -> sig = NULL;
    
    if (Lista == NULL){
        Lista = nuevoEntero; // Para agregar el PRIMER ELEMENTO a la lista
    } else {
        aux = Lista; // Para agregar el RESTO DE ELEMENTOS a la lista
        while (aux -> sig != NULL){
            aux = aux -> sig;
        }
        aux -> sig = nuevoEntero;
    }

return Lista;
}

Real *agregarReales(Real *Lista, double valor){
    Real *aux = Lista;
    // Comprobamos si ya existe el valor ingresado
    while (aux != NULL){
        if (aux -> valor == valor){
            return Lista; // Hubo coincidencia
        }
        aux = aux -> sig;
    }
    
    Real *nuevoReal = NULL;
    // Reservar memoria suficiente para nuestros Reales
    nuevoReal = (Real *) malloc (sizeof(Real));
    // Agregamos valores y apuntamos al siguiente Nodo
    nuevoReal -> valor = valor;
    nuevoReal -> sig = NULL;
    
    if (Lista == NULL){
        Lista = nuevoReal; // Para agregar el PRIMER ELEMENTO a la lista
    } else {
        aux = Lista; // Para agregar el RESTO DE ELEMENTOS a la lista
        while (aux -> sig != NULL){
            aux = aux -> sig;
        }
        aux -> sig = nuevoReal;
    }

return Lista;
}

Caracter *agregarCaracter(Caracter *Lista, char valor){
    Caracter *aux = Lista;
    // Comprobamos si ya existe el valor ingresado
    while (aux != NULL){
        if (aux -> caracter == valor){
            return Lista; // Hubo coincidencia
        }
        aux = aux -> sig;
    }
    
    Caracter *nuevoCaracter = NULL;
    // Reservar memoria suficiente para nuestros enteros
    nuevoCaracter = (Caracter *) malloc (sizeof(Caracter));
    // Agregamos valores y apuntamos al siguiente Nodo
    nuevoCaracter -> caracter = valor;
    nuevoCaracter -> sig = NULL;
    
    if (Lista == NULL){
        Lista = nuevoCaracter; // Para agregar el PRIMER ELEMENTO a la lista
    } else {
        aux = Lista; // Para agregar el RESTO DE ELEMENTOS a la lista
        while (aux -> sig != NULL){
            aux = aux -> sig;
        }
        aux -> sig = nuevoCaracter;
    }

return Lista;
}

int sumarDecimales (Entero *Lista){
    Entero *aux = Lista;
    int contador = 0;

    while (aux != NULL){
        contador += aux -> valor;
        aux = aux -> sig;
    }

return contador;
}

void imprimirReporte (ConContador *listaIdentificadores, ConValor *listaLiteralesCadena, ConTipo *listaReservadas, Entero *listaDecimales, Entero *listaOctales, Entero *listaHexadecimales, Real *listaReales, Caracter *listaCaracteres, ConContador *listaOperadoresPuntuacion, ConTipo *listaComentarios, ConValor *listaNoReconocidos){
    printf ("REPORTE:\n============================================\n\n");

    printf ("-> Identificadores halladas: \n\n");
    while (listaIdentificadores != NULL){
        // la lista tiene que estar ordenada antes de esto
        printf ("\t- %s aparece %d veces\n", listaIdentificadores -> elemento, listaIdentificadores -> contador);
        listaIdentificadores = listaIdentificadores -> sig;
    }
    printf ("\n-----------------------------------------\n-> Literales cadenas halladas: \n\n");
    while (listaLiteralesCadena != NULL){
        printf ("\t- %s tiene longitud %d\n", listaLiteralesCadena -> elemento, listaLiteralesCadena -> valor);
        listaLiteralesCadena = listaLiteralesCadena -> sig;
    }
    printf ("\n-----------------------------------------\n-> Palabras Reservadas halladas: \n\n");
    while (listaReservadas != NULL){
        printf ("\t- %s (Palabra reservada de tipo %s)\n", listaReservadas -> elemento, listaReservadas -> tipo);
        listaReservadas = listaReservadas -> sig;
    }
    printf ("\n-----------------------------------------\n-> Constantes enteras octales halladas:\n\n");
    while (listaOctales != NULL){
        printf ("\t- 0%o Constante de valor decimal: %d\n", listaOctales -> valor, listaOctales -> valor);
        listaOctales = listaOctales -> sig;
    }
    printf ("\n-----------------------------------------\n-> Constantes enteras decimales halladas:\n\n");
    int contadorDecimales = sumarDecimales (listaDecimales);
    while (listaDecimales != NULL){
        printf ("\t- Constante decimal de valor: %d\n", listaDecimales -> valor);
        listaDecimales = listaDecimales -> sig;
    }
    printf("\n\tTotal sumado: %d\n", contadorDecimales);

    printf ("\n-----------------------------------------\n-> Constantes enteras hexadecimales halladas:\n\n");
    while (listaHexadecimales != NULL){
        printf ("\t- 0x%x Constante de valor decimal: %d\n", listaHexadecimales -> valor, listaHexadecimales -> valor);
        listaHexadecimales = listaHexadecimales -> sig;
    }
    printf("\n-----------------------------------------\n-> Constantes reales halladas:\n\n");
    while (listaReales != NULL){
        double parteDecimal, parteEntera;
        // modf: Separa parte entera y la parte decimal de un numero tipo "double"
        parteDecimal = modf(listaReales -> valor, &parteEntera);
        printf ("\t- %f Parte entera: %f. Parte decimal: %f\n", listaReales -> valor, parteEntera, parteDecimal);
        listaReales = listaReales -> sig;
    }
    printf ("\n-----------------------------------------\n-> Constantes caracteres halladas:\n\n");
    int contador = 0;
    while (listaCaracteres != NULL){
        contador ++;
        printf ("\t- %d) '%c'\n", contador, listaCaracteres -> caracter);
        listaCaracteres = listaCaracteres -> sig;
    }
    printf ("\n-----------------------------------------\n-> Operadores/caracteres de puntuacion hallados: \n\n");
    while (listaOperadoresPuntuacion != NULL){
        printf ("\t- %s aparece %d veces\n", listaOperadoresPuntuacion -> elemento, listaOperadoresPuntuacion -> contador);
        listaOperadoresPuntuacion = listaOperadoresPuntuacion -> sig;
    }
    printf ("\n-----------------------------------------\n-> Comentarios hallados: \n\n");
    while (listaComentarios != NULL){
        printf ("- Comentario de %s:\n%s\n\n", listaComentarios -> tipo, listaComentarios -> elemento);
        listaComentarios = listaComentarios -> sig;
    }
    printf ("\n-----------------------------------------\n-> Caracteres no reconocidos halladas: \n\n");
    while (listaNoReconocidos != NULL){
        printf ("\t- %s tiene longitud %d\n", listaNoReconocidos -> elemento, listaNoReconocidos -> valor);
        listaNoReconocidos = listaNoReconocidos -> sig;
    }
}

// strcmp(String1,String2) ->
// Devuelve 1 si String2 es menor que String1
// 0 si son iguales
// -1 si String1 es menor que String2