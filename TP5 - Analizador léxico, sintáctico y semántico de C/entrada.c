$
1+'h';
'h'+3;
2+3;
1+2+3;
1+"h";
1+2+"f";
1+3*4-3*3/2;
"a"+2*3;
prueba + 2;

int prueba2;

prueba2 + 2;

int suma = 1+3*4-3*3/2;
int resta = 'a'- 3;
int multiplicacion = "a" * 3;

int correcto (int, int);
void incorrectoTipo (int);
int incorrectoCantParametros (int);
int incorrectoParametros2 (int, char);
int incorrectoParametros1 (char, int);

int incorrectoParametros1 (int g, int h){ //da error en cantidad de parametros cuando deberia ser tipos (Solucionado)
    int x; 
    
    return 0;
}

int correcto (int a, int b){
    int c;
    c = sinPrototipo(1, 3);
    return 0;
}

int incorrectoTipo (int d){
    return 0;
}


int incorrectoCantParametros (int e, int f){
    return 0;
}

int incorrectoParametros2 (int i, int j){

    return 0;
}

int hola (int i, int j){
    
    return 0;
}

int sinPrototipo (int k, int l){
    return 0;
}

int main (){ // Dice que la cantidad de parámetros es 3 (Arreglado)
    c = sinPrototipo(1, 3);
    sinPrototipo(k);
    return 0;
}

void x(){
    sinPrototipo(1,2);
}

void y(){
  int n;
}

int a;
int a;



