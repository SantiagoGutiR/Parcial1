#include <iostream>

using namespace std;

void verificiacion(int **arreglo);
void patron_usuario(int **arreglo);
void mostrar_matriz(int **arreglo);//, int v_repetir ,int tiempo);
void patron_1(int **arreglo);
void patron_3(int **arreglo);
void patron_2(int **arreglo);

int main()
{
    int **arreglo;
    arreglo = new int*[8];
    for ( short i = 0 ; i < 8 ; i++){
        arreglo[i] = new int[8];
        for ( short j = 0 ; j < 8 ; j++){
            arreglo[i][j] = 1;
        }
    }

    mostrar_matriz(arreglo);
    patron_2(arreglo);
    mostrar_matriz(arreglo);

    for (short n = 0 ; n < 8 ; n++){
        delete []arreglo[n];
    }
    delete []arreglo;
    return 0;
}

void mostrar_matriz(int **arreglo){//,int v_repetir ,int tiempo){
    //for (short repeticiones = 1; repeticiones <= v_repetir ; repeticiones ++){
        for (short i = 7; i >= 0 ; i--){
            for ( short j = 7 ; j >= 0 ; j--){
                if (arreglo[i][j] == 1){
                    cout << "+" ;// Pin 1 en HIGH
                }
                else{                                   //Escribo patron
                    cout << " "; // Pin 1 en LOW
                }
                //El pin 2 ponerlo en HIGH
                //Delay(200)
                //El pin 2 ponerlo en LOW
            }
            cout << endl; //Referencia de que pasa al siguiente integrado 74HC595
        }
        // Mostrar en al matriz
        /*Pin 3 en HIGH
        Delay(tiempo*1000)
        Pin 3 en LOW
        */
        for (short i = 7; i >= 0 ; i--){
            for ( short j = 7 ; j >= 0 ; j--){
                cout << " "; // Pin 1 en LOW
                //El pin 2 ponerlo en HIGH              //Apago
                //Delay(200)
                //El pin 2 ponerlo en LOW
            }
            cout << endl; //Referencia de que pasa al siguiente integrado 74HC595
        }
        // Mostrar en al matriz
        /*Pin 3 en HIGH
        Delay(tiempo*1000)
        Pin 3 en LOW
        */
    //}
}
void verificiacion(int **arreglo){
    for ( short i = 0 ; i < 8 ; i++){
        for ( short j = 0 ; j < 8 ; j++){
            arreglo[i][j] = 1;
        }
    }
}

void patron_usuario(int **arreglo){
    short x = 0;
    cout << "Ingrese el estado de cada led...";
    cout << "Ingrese 1 si desea prender el led..." << endl;
    cout << "Ingrese 0 si desea el led apagado..." << endl;
    for(short i = 0; i < 8  ; i++){
        for( short j = 0; j < 8 ; j++){
            cout << "Ingrese el estado del led: ";
            cin >> x;
            arreglo[i][j] = x;
        }
    }
}

void patron_1(int **arreglo){
    for ( short i = 0 ; i <= 3 ; i++){
        for ( short j = 0 ; j < 8 ; j++){
            if ( (3-i) <= j && j <= (4+i)){
                    arreglo[i][j] = 1;
            }
            else{
                    arreglo[i][j] = 0;
            }
        }
    }
    for ( short i = 4 ; i < 8 ; i++){
        for ( short j = 0 ; j < 8 ; j++){
            if ( (i - 4) <= j && j <= (11 - i)){
                    arreglo[i][j] = 1;
            }
            else{
                    arreglo[i][j] = 0;
            }
        }
    }
}

void patron_3(int **arreglo){
    for ( short i = 0 ; i < 8 ; i++){
        for ( short j = 0 ; j < 8 ; j++){
            if ( i == 0 || i == 1 || i == 4 || i == 5 ){
                    if ( j == 2 || j == 5 ){
                        arreglo[i][j] = 0;
                    }
            }
            else if ( i == 2 || i == 3 || i == 6 || i == 7 ){
                    if ( j == 0 || j == 3 || j == 6 ){
                        arreglo[i][j] = 0;
                    }
            }
            else{
                    arreglo[i][j] = 1;
            }
        }
    }
}

void patron_2(int **arreglo){
    short constante = 7;
    for ( short i = 0 ; i < 8 ; i++){
        for ( short j = 0 ; j < 8 ; j++){
            if ( i == j){
                arreglo[i][j] = 1;
            }
            else{
                arreglo[i][j] = 0;
            }
        }
        arreglo[i][constante] = 1;
        constante --;
    }
}
