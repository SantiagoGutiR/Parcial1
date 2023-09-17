#include <iostream>

using namespace std;

void verificiacion(int **arreglo);
void patron_usuario(int **arreglo);
void mostrar_matriz(int **arreglo);

int main()
{
    int **arreglo = new int*[8];
    for ( short i = 0 ; i < 8 ; i++){
        arreglo[i] = new int[8];
        for ( short j = 0 ; j < 8 ; j++){
            arreglo[i][j] = 0;
        }
    }
    mostrar_matriz(arreglo);
    verificiacion(arreglo);
    patron_usuario(arreglo);
    mostrar_matriz(arreglo);


    return 0;
}

void mostrar_matriz(int **arreglo){
    for (short i = 7; i >= 0 ; i--){
        for ( short j = 7 ; j >= 0 ; j--){
            if (arreglo[i][j] == 1){
                cout << "+" ;// Pin 1 en HIGH
            }
            else{
                cout << " "; // Pin 1 en LOW
            }
            //El pin 2 ponerlo en HIGH
            //Delay(200)
            //El pin 2 ponerlo en LOW
        }
        cout << endl; //Pasa al siguiente integrado
    }
    // Mostrar en al matriz
    /*for (veces_repetidas = 0 ; veces_repetidas  ; veces_repetidas ++){
    Pin 3 en HIGH
    Delay(200)
    Pin 3 en LOW
    }*/
}
void verificiacion(int **arreglo){
    for ( short i = 0 ; i < 8 ; i++){
        for ( short j = 0 ; j < 8 ; j++){
            arreglo[i][j] = 1;
        }
    }
    mostrar_matriz(arreglo);
}

void patron_usuario(int **arreglo){
    short x = 0;
    cout << "Ingrese el estado de cada led...";
    cout << "Ingrese 1 si desea prender el led..." << endl;
    cout << "Ingrese 0 si desea el led apagado..." << endl;
    for(short i = 0; i < 8 ; i++){
        for( short j = 0; j < 8 ; j++){
            cout << "Ingrese el estado del led: ";
            cin >> x;
            arreglo[i][j] = x;
        }
    }
    //return arreglo;
}
