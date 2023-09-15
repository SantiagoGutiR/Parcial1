#include <iostream>

using namespace std;

void verficiacion(int arreglo[]);

int main()
{
    int arreglo[64] = {};
    for (int i = 0 ; i < 64 ; i++ ){
        arreglo[i] = 1;
    }
    verficiacion(arreglo);
    return 0;
}

void verficiacion(int arreglo[]){
    for (int n = 63; n >= 0 ; n--){
        if (arreglo[n] == 1){
            cout << "+" ;// Pin 1 en HIGH
        }
        else{
            cout << " "; // Pin 1 en LOW
        }
        //El pin 2 ponerlo en HIGH
        //Delay(200)
        //El pin 2 ponerlo en LOW
    }
    //Pin 3 en HIGH
    //Delay(200)
    //Pin 3 en LOW
}
