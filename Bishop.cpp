#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;
const string Red("\033[1;91m");
const string Reset("\033[0m");
const string Green("\033[1;92m");
const string Blue("\033[1;34m");
const string Yellow("\033[0;33m");
const string Purple("\033[0;35m");

int main(){

    int casos;
    string tabla[8][8];
    system("title Bishop");

    do{
        cout<<"Ingresa el numero de casos del juego ---> ";cin>>casos;
    }while(casos<1 || casos>36);
    





    return 0;
    system("pause");
}