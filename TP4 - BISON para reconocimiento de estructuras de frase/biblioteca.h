#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct nodoSentenciasEncontradas{ // Crear el Nodo para elementos con tipo (Reservados y comentarios)
    char * tipoSentencia;
    int nroLinea;
    struct nodoSentenciasEncontradas * sig;
}detalleSentencia;



detalleSentencia* agregarListaSentencias (detalleSentencia *ListaSentencias, char *tipoSentencia, int nroLinea){
    
    /*Armo nuevo nodo con los datos ingresados por parámetro*/
    detalleSentencia *nuevoNodo = NULL;
    nuevoNodo = (detalleSentencia *) malloc(sizeof (detalleSentencia)); //Reservo memoria para el nodo
    nuevoNodo -> tipoSentencia = strdup (tipoSentencia);
    nuevoNodo -> nroLinea = nroLinea;
    nuevoNodo -> sig = NULL;

    /*Meto el nodo en la ListaSentencias*/

    detalleSentencia *aux = ListaSentencias;

    if (aux == NULL){
        ListaSentencias = nuevoNodo;
    } else {
        
        /*Agrega las sentencias reconocidas al final de la lista*/
        while (aux -> sig != NULL) aux = aux -> sig;

        if (aux -> sig == NULL) aux -> sig = nuevoNodo;

    }

    return ListaSentencias;
}


int recorrerListaSentencias(detalleSentencia *ListaSentencias){

    if(ListaSentencias==NULL){

        printf("\n\tLa lista está vacia");

        return 1;
    }else{

        while(ListaSentencias!=NULL){

            printf("\nSe encontro una %s en la linea %i",ListaSentencias->tipoSentencia,ListaSentencias->nroLinea);

            ListaSentencias = ListaSentencias->sig;

        }

    }

    return 0;
}