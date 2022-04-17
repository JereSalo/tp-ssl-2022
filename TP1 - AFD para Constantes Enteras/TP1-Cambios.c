/*
Explicación Breve del Programa:

Tenemos un archivo entrada.txt que tiene distintas palabras separadas por comas.
El programa utilizará un Autómata Finito para reconocer que tipo de palabras son estas.
Este Autómata Finito solo reconoce 3 tipos de palabras!
Constante Octal, Hexadecimal y Decimal (números enteros)
Por cada palabra que lea va a identificar en un archivo de salida (salida.txt) que tipo de palabra es.
Si la palabra no fue reconocida por el Autómata entonces dirá simplemente que no fue reconocida.
*/

#include <stdio.h>
#include <stdlib.h>
#define cantEstados 7
#define gruposDeCaracteres 6

void cargarTablaTransiciones(int[cantEstados][gruposDeCaracteres]); // Carga la tabla de transiciones (la del OneDrive)
void recorrerAutomata(int[cantEstados][gruposDeCaracteres]); // Esta función recorre el autómata utilizando la Tabla de Transiciones ya cargada!
int definirTipoDato(char); // Define que tipo de dato es el leido por el autómata.

int main(){ 
    int TablaTransiciones[cantEstados][gruposDeCaracteres];
    cargarTablaTransiciones(TablaTransiciones); 
    recorrerAutomata(TablaTransiciones); 
    
    getchar();
    return 0;
}

void recorrerAutomata(int TablaTransiciones[cantEstados][gruposDeCaracteres]){
    int estadoActual = 0;
    int tipoDato;
    char t;

    FILE* archEntrada = fopen("entrada.txt","r");
    FILE* archSalida = fopen("salida.txt","w");
    
    while(t!=EOF){
        t = getc(archEntrada); // Cada vez que se ejecuta getc() se lee un caracter del archivo (va avanzando hasta el final)

        if(t == ',' || t == EOF){
            switch(estadoActual){
                case 1: printf(" -> Octal\n"); fprintf(archSalida,"%s", " -> Octal\n"); break;
                case 2: printf(" -> Decimal\n"); fprintf(archSalida,"%s", " -> Decimal\n");break;
                case 4: printf(" -> Hexadecimal\n"); fprintf(archSalida,"%s", " -> Hexadecimal\n");break;
                case 5: printf(" -> Octal\n"); fprintf(archSalida,"%s", " -> Octal\n"); break;
                default: printf(" -> No reconocida\n"); fprintf(archSalida,"%s", " -> No reconocida\n"); break;
            }

            estadoActual = 0;
            continue;
        }
        else{
            printf("%c",t);
            fprintf(archSalida,"%c", t);
        }

        tipoDato = definirTipoDato(t);

        // Estamos en un estado, dependiendo el tipo de dato leido, pasaremos a otro estado (esto está indicado en la Tabla de Transiciones).
        estadoActual = TablaTransiciones[estadoActual][tipoDato];
    }

    fclose(archEntrada);
    fclose(archSalida);
}

char num1al7[7] = {'1','2','3','4','5','6','7'};
char letrasHexa[12] = {'a','b','c','d','e','f','A','B','C','D','E','F'};

// Esta función toma el dato ingresado y devuelve que tipo de dato es (para que la Tabla de Transiciones lo reconozca como tal).
int definirTipoDato(char t){
    int tipo = 5;
    for(int j=0;j<7;j++){
        if(t==num1al7[j]){
            tipo = 1;
        }
    }
    for(int j=0;j<12;j++){
        if(t==letrasHexa[j]){
            tipo = 3;
        }
    }        
    if(t == '0'){
        tipo = 0;
    }
    else if(t == '8' || t == '9'){
        tipo = 2;
    }
    else if(t=='x' || t=='X'){
        tipo = 4;
    }

    return tipo;
}


// Esta es la tabla de transiciones del OneNote de Sintaxis! (https://onedrive.live.com/redir?resid=73A86BFF829778D1%21269&authkey=%21AO1GED7Gink1j1g&page=View&wd=target%28AF.one%7C98d52e32-fca4-4b4d-9e51-a21304f9edc1%2FEjemplo%20Constantes%20Enteras%20de%20C%7Cc06b2d48-a235-485d-8c64-e0219aa9cb46%2F%29)
// Las filas de la matriz representan los estados del autómata. (Hay 6 estados, del q0 al q6)
// Las columnas de la matriz representan el tipo de caracter ingresado. (Hay 6 tipos de datos definidos en el autómata)
/*
Tipos de Datos y sus valores numéricos:

0 -> '0'
1 -> Números del 1 al 7
2 -> Números 8 y 9
3 -> Letras a-f y A-F
4 -> 'x' y 'X'
5 -> Otro tipo de dato (no nos interesa cual)
*/

// Para qué sirve la tabla de transiciones?
// Para saber cual es el estado siguiente dado un estado actual y un dato ingresado!
// Así es como se recorre un autómata!!! Pasando de un estado al otro a medida que vamos leyendo los caracteres de la palabra.

void cargarTablaTransiciones(int TablaTransiciones[cantEstados][gruposDeCaracteres]){
    TablaTransiciones[0][0] = 1;
    TablaTransiciones[0][1] = 2;
    TablaTransiciones[0][2] = 2;
    TablaTransiciones[0][3] = 6;
    TablaTransiciones[0][4] = 6;
    TablaTransiciones[0][5] = 6;

    TablaTransiciones[1][0] = 5;
    TablaTransiciones[1][1] = 5;
    TablaTransiciones[1][2] = 6;
    TablaTransiciones[1][3] = 6;
    TablaTransiciones[1][4] = 3;
    TablaTransiciones[1][5] = 6;

    TablaTransiciones[2][0] = 2;
    TablaTransiciones[2][1] = 2;
    TablaTransiciones[2][2] = 2;
    TablaTransiciones[2][3] = 6;
    TablaTransiciones[2][4] = 6;
    TablaTransiciones[2][5] = 6;

    TablaTransiciones[3][0] = 4;
    TablaTransiciones[3][1] = 4;
    TablaTransiciones[3][2] = 4;
    TablaTransiciones[3][3] = 4;
    TablaTransiciones[3][4] = 6;
    TablaTransiciones[3][5] = 6;

    TablaTransiciones[4][0] = 4;
    TablaTransiciones[4][1] = 4;
    TablaTransiciones[4][2] = 4;
    TablaTransiciones[4][3] = 4;
    TablaTransiciones[4][4] = 6;
    TablaTransiciones[4][5] = 6;

    TablaTransiciones[5][0] = 5;
    TablaTransiciones[5][1] = 5;
    TablaTransiciones[5][2] = 6;
    TablaTransiciones[5][3] = 6;
    TablaTransiciones[5][4] = 6;
    TablaTransiciones[5][5] = 6;

    for(int i=0;i<cantEstados;i++){
        TablaTransiciones[6][i] = 6;
    }
}