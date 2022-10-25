#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* =====================    N O D O S   ===================== */

typedef struct nodoSentenciasEncontradas{ // Crear el Nodo para elementos con tipo (Reservados y comentarios)
    char * tipoSentencia;
    int nroLinea;
    struct nodoSentenciasEncontradas * sig;
}detalleSentencia;

typedef struct nodoDeclaracionesEncontradas{ // Crear el Nodo para las declaraciones encontradas
    char * identificador;
    char * tipoDato;
    struct nodoDeclaracionesEncontradas * sig;
}detalleDeclaraciones;

typedef struct nodoParametros{ // Crear el Nodo para los parametros de las funciones
    char * identificador;
    char * tipoDato;
    struct nodoParametros * sig;
}detalleParametros;

typedef struct nodoFuncionesEncontradas{ // Crear el Nodo para las funciones encontradas
    char * identificador;
    char * tipoDato;
    int cantidadDeParametros;
    struct nodoParametros * parametros; // ver
    struct nodoFuncionesEncontradas * sig;
}detalleFunciones;

typedef struct nodoTipoParametros{ // Crear el Nodo para los parametros de las prototipos
    char * tipoDato;
    struct nodoTipoParametros * sig;
}detalleTipoParametros;

typedef struct nodoPrototiposEncontrados{ // Crear el Nodo para las funciones encontradas
    char * identificador;
    char * tipoDato;
    int cantidadDeParametros;
    struct nodoTipoParametros * parametros; 
    struct nodoPrototiposEncontrados * sig;
}detallePrototipos;


/* =====================    F U N C I O N E S   D E   L I S T A S  ===================== */

/* =====================    S E N T E N C I A S ===================== */
detalleSentencia* agregarListaSentencias (detalleSentencia *ListaSentencias, char *tipoSentencia, int nroLinea){
    
    /*Armo nuevo nodo con los datos ingresados por parámetro*/
    detalleSentencia *nuevoNodo = NULL;
    nuevoNodo = (detalleSentencia *) malloc(sizeof (detalleSentencia)); //Reservo memoria para el nodo
    nuevoNodo -> tipoSentencia = strdup (tipoSentencia);
    nuevoNodo -> nroLinea = nroLinea;
    nuevoNodo -> sig = NULL;

    /* Meto el nodo en la ListaSentencias de forma ordenada por nroLinea */
    detalleSentencia *aux = ListaSentencias;

    /* Para insertar el elemento en la primera posicion de la lista */
    if (aux == NULL || nroLinea < aux -> nroLinea){
        nuevoNodo -> sig = ListaSentencias;
        ListaSentencias = nuevoNodo;
    } else {
        // Para agregar el elementos en la posicion adecuada
        while (aux -> sig != NULL && aux -> sig -> nroLinea < nroLinea) aux = aux -> sig;
        if (aux -> sig != NULL) nuevoNodo -> sig = aux -> sig;
        aux -> sig = nuevoNodo;
    }

    return ListaSentencias;
}



int recorrerListaSentencias(detalleSentencia *ListaSentencias){

    if(ListaSentencias==NULL){

        printf("\n No se han encontrado sentencias.\n");

        return 1;
    }else{
        printf("\nSENTENCIAS\n\n");

        while(ListaSentencias!=NULL){
            
            printf("Linea %i: %s\n",ListaSentencias->nroLinea,ListaSentencias->tipoSentencia);
//            printf("\n Se encontro una %s en la linea %i",ListaSentencias->tipoSentencia,ListaSentencias->nroLinea);

            ListaSentencias = ListaSentencias->sig;

        }

    }

    return 0;
}

/* =====================    V A R I A B L E S    D E C L A R A D A S ===================== */

detalleDeclaraciones* agregarListaDeclaracionDeVariable (detalleDeclaraciones * ListaDeclaraciones, char * identificador, char * tipoDato){
    // Comprobamos si hay doble declaración
    detalleDeclaraciones * aux = NULL;
    for(aux = ListaDeclaraciones; aux != NULL; aux = aux -> sig) {
        // strcmp: Para comprobar si dos Strings son iguales
        if (strcmp (aux -> identificador, identificador) == 0) {
            printf("Error semantico: Doble declaracion del identificador %s\n", identificador);
            return ListaDeclaraciones; // Hubo coincidencia
        }
    }
    
    /* Armo nuevo nodo con los datos ingresados por parámetro*/
    detalleDeclaraciones *nuevoNodo = NULL;
    nuevoNodo = (detalleDeclaraciones *) malloc(sizeof (detalleDeclaraciones)); //Reservo memoria para el nodo
    nuevoNodo -> tipoDato = strdup (tipoDato);
    nuevoNodo -> identificador = strdup (identificador);
    nuevoNodo -> sig = NULL;

    /* Meto el nodo en la ListaDeclaraciones */
    aux = ListaDeclaraciones;

    if (aux == NULL){
        ListaDeclaraciones = nuevoNodo;
    } else {
        
        /*Agrega las declaraciones reconocidas al final de la lista*/
        while (aux -> sig != NULL) aux = aux -> sig;

        if (aux -> sig == NULL) aux -> sig = nuevoNodo;

    }
    
    return ListaDeclaraciones;
}


int recorrerListaDeclaracionesVariables(detalleDeclaraciones *ListaDeclaraciones){
    printf("\nDECLARACIONES\n\n");

    if(ListaDeclaraciones==NULL){

        printf("\n No se han declarado variables.");
        return 1;
    }else{
        printf("Se declarararon los siguientes identificadores: \n");

        while (ListaDeclaraciones!=NULL){
            printf("--Nombre: %s -> Tipo: %s \n", ListaDeclaraciones->identificador,ListaDeclaraciones->tipoDato);
            ListaDeclaraciones = ListaDeclaraciones->sig;
        }
    }

    return 0;

}

/* =====================    P A R A M E T R O S ===================== */
detalleParametros* agregarListaParametros (detalleParametros *ListaParametros, char *identificador, char *tipoDato){
    /*Armo nuevo nodo con los datos ingresados por parámetro*/
    detalleParametros *nuevoNodo = NULL;
    nuevoNodo = (detalleParametros *) malloc(sizeof (detalleParametros)); //Reservo memoria para el nodo
    nuevoNodo -> tipoDato = strdup (tipoDato);
    nuevoNodo -> identificador = strdup (identificador);
    nuevoNodo -> sig = NULL;

    /*Meto el nodo en la ListaParametros*/

    detalleParametros *aux = ListaParametros;
    if (aux == NULL){
        ListaParametros = nuevoNodo;
    } else {
        /*Agrega los parametros reconocidos al final de la lista*/
        while (aux -> sig != NULL) aux = aux -> sig;

        if (aux -> sig == NULL) aux -> sig = nuevoNodo;
    }
    
    return ListaParametros;
}

int recorrerListaParametros(detalleParametros *ListaParametros){

    if(ListaParametros==NULL){

        printf("--No hay declarados parametros.\n");

        return 1;
    }else{
        printf("--Parametros: \n");

        while (ListaParametros!=NULL){
            printf("----Nombre: %s -> Tipo: %s \n", ListaParametros->identificador,ListaParametros->tipoDato);
            ListaParametros = ListaParametros->sig;
        }
    }

    return 0;
}
/* =====================    F U N C I O N E S    D E C L A R A D A S    ===================== */
int verificarParametros(detalleTipoParametros * ListaTipoParametros, detalleParametros *ListaParametros){
    detalleTipoParametros * aux = NULL;
    detalleParametros * aux2 = NULL;
    for(aux = ListaTipoParametros, aux2 = ListaParametros; aux != NULL && aux2 != NULL; aux = aux -> sig, aux2 = aux2 -> sig) {
        if (strcmp (aux -> tipoDato, aux2 -> tipoDato) == 0 ) {
            continue;
        } else {
            return 1;
        }
    }
    return 0;
}

int verificarFuncionConPrototipo (detalleFunciones *nuevoNodoFuncion, detallePrototipos *ListaPrototipos){
    detallePrototipos * aux = NULL;
    for(aux = ListaPrototipos; aux != NULL; aux = aux -> sig) {
        // strcmp: Para comprobar si dos identificadores son iguales
        if (strcmp (aux -> identificador, nuevoNodoFuncion -> identificador) == 0 ) {
            // Para comprobar si los tipos de funciones son iguales
            if (strcmp (aux -> tipoDato, nuevoNodoFuncion -> tipoDato) == 0) {
                // Para comprobar que tengan la misma cantidad de parametros
                if(aux -> cantidadDeParametros == nuevoNodoFuncion -> cantidadDeParametros){
                    // Para comprobar que tengan los mismos tipos de parametros
                    if (verificarParametros(aux -> parametros, nuevoNodoFuncion -> parametros) == 0){
                        return 0;
                    } else {
                        printf("Error semantico: Validacion de tipos en parametros en funcion %s\n", aux -> identificador);
                        return 1;
                    }
                } else {
                    printf("Error semantico: Cantidad de parametros incorrecta en funcion %s\n", aux -> identificador);
                    return 1;
                }
            } else {
                printf("Error semantico: Validacion de tipos en funcion %s\n", aux -> identificador);
                return 1;
            }
        }
    }
    return 0;
}



detalleFunciones* agregarListaFunciones (detalleFunciones *ListaFunciones, char *identificador, char *tipoDato, detalleParametros *ListaParametros, int cantidadDeParametros, detallePrototipos *ListaPrototipos){
    /*Armo nuevo nodo con los datos ingresados por parámetro*/
    detalleFunciones *nuevoNodo = NULL;
    nuevoNodo = (detalleFunciones *) malloc(sizeof (detalleFunciones)); //Reservo memoria para el nodo
    nuevoNodo -> tipoDato = strdup (tipoDato);
    nuevoNodo -> identificador = strdup (identificador);
    nuevoNodo -> cantidadDeParametros = cantidadDeParametros;
    nuevoNodo -> parametros = ListaParametros;
    nuevoNodo -> sig = NULL;

    /*Meto el nodo en la ListaFunciones*/
    if(verificarFuncionConPrototipo (nuevoNodo, ListaPrototipos)==0){
        detalleFunciones *aux = ListaFunciones;
        if (aux == NULL){
            ListaFunciones = nuevoNodo;
        } else {
            /*Agrega las funciones reconocidas al final de la lista*/
            while (aux -> sig != NULL) aux = aux -> sig;

            if (aux -> sig == NULL) aux -> sig = nuevoNodo;
        }
    return ListaFunciones;
    } else {
        return ListaFunciones;
    }
}

int recorrerListaFunciones(detalleFunciones *ListaFunciones){

    if(ListaFunciones==NULL){

        printf("\n No se han declarado funciones.");

        return 1;
    }else{
        printf("\n Se declarararon las siguientes funciones: \n");

        while (ListaFunciones!=NULL){
            printf("\n--Nombre de funcion: %s -> Tipo de funcion: %s -> Cant. de parametros: %d\n", ListaFunciones->identificador,ListaFunciones->tipoDato, ListaFunciones->cantidadDeParametros);
            recorrerListaParametros(ListaFunciones->parametros);
            ListaFunciones = ListaFunciones->sig;
        }
    }

    return 0;
}

/* =====================    T I P O S   D E   P A R A M E T R O S ===================== */
detalleTipoParametros* agregarTipoParametro (detalleTipoParametros * ListaTipoParametros, char * tipoDato){
    /*Armo nuevo nodo con los datos ingresados por parámetro*/
    detalleTipoParametros *nuevoNodo = NULL;
    nuevoNodo = (detalleTipoParametros *) malloc(sizeof (detalleTipoParametros)); //Reservo memoria para el nodo
    nuevoNodo -> tipoDato = strdup (tipoDato);
    nuevoNodo -> sig = NULL;

    /*Meto el nodo en la ListaTipoParametros*/

    detalleTipoParametros *aux = ListaTipoParametros;
    if (aux == NULL){
        ListaTipoParametros = nuevoNodo;
    } else {
        /*Agrega los parametros reconocidos al final de la lista*/
        while (aux -> sig != NULL) aux = aux -> sig;

        if (aux -> sig == NULL) aux -> sig = nuevoNodo;
    }
    
    return ListaTipoParametros;
}

int recorrerListaTiposParametros(detalleTipoParametros *ListaTipoParametros){

    if(ListaTipoParametros==NULL){

        printf("--No hay declarados parametros.\n");

        return 1;
    }else{
        printf("--Parametros: \n");

        while (ListaTipoParametros!=NULL){
            printf("----Tipo: %s \n", ListaTipoParametros->tipoDato);
            ListaTipoParametros = ListaTipoParametros->sig;
        }
    }

    return 0;
}
/* =====================    P R O T O T I P O   D E   F U N C I O N E S    ===================== */
detallePrototipos* agregarListaPrototipo (detallePrototipos *ListaPrototipos, char *identificador, char *tipoDato, detalleTipoParametros *ListaTipoParametros, int cantidadDeParametros){
    /*Armo nuevo nodo con los datos ingresados por parámetro*/
    detallePrototipos *nuevoNodo = NULL;
    nuevoNodo = (detallePrototipos *) malloc(sizeof (detallePrototipos)); //Reservo memoria para el nodo
    nuevoNodo -> tipoDato = strdup (tipoDato);
    nuevoNodo -> identificador = strdup (identificador);
    nuevoNodo -> cantidadDeParametros = cantidadDeParametros;
    nuevoNodo -> parametros = ListaTipoParametros;
    nuevoNodo -> sig = NULL;

    detallePrototipos *aux = ListaPrototipos;
    if (aux == NULL){
        ListaPrototipos = nuevoNodo;
    } else {
        /*Agrega las funciones reconocidas al final de la lista*/
        while (aux -> sig != NULL) aux = aux -> sig;

        if (aux -> sig == NULL) aux -> sig = nuevoNodo;
    }
    
    return ListaPrototipos;
}

int recorrerListaPrototipos(detallePrototipos *ListaPrototipos){

    if(ListaPrototipos==NULL){

        printf("\n No se han declarado prototipos.");

        return 1;
    }else{
        printf("\n Se declarararon los siguientes prototipos: \n");

        while (ListaPrototipos!=NULL){
            printf("\n--Nombre de prototipo: %s -> Tipo de prototipo: %s -> Cant. de parametros: %d\n", ListaPrototipos->identificador,ListaPrototipos->tipoDato, ListaPrototipos->cantidadDeParametros);
            recorrerListaTiposParametros(ListaPrototipos->parametros);
            ListaPrototipos = ListaPrototipos->sig;
        }
    }

    return 0;
}



