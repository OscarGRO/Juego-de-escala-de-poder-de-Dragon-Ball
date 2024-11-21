// COMP2120.
//Proyecto de Logica de programacion.
//Nombre: Oscar G. Rodríguez Marzán, Jannexiel A, Victoria García.
//Numero de estudiante: Y00645637, Y00634465.
//Referencias: https://youtu.be/ok7Y5y7TIBo?si=uNhXbEKhysV9fJ60
//https://youtu.be/tpqxsFY89uU?si=ZGSNaa4p8Aj1Uf5M
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
string nombre;
int numero, raza;
//Oscar G. Rodríguez.
    srand(time(NULL));
    numero = (rand() % 150000000) + 1;
    cout << "Bienvenido al escalador de poder de Dragon Ball.\n";
    cout << "Introduzca su nombre: ";
    cin >> nombre;
    
    cout << "Eliga su raza: \n"; 
    cout << "1) para Terricola\n";
    cout << "2) para Saiyan\n";
    cout << "**********************************\n";
    cin >> raza;
    cout << "**********************************\n";
    
    switch(raza)  
    {   
    case 1: 
    cout << nombre << ", usted es raza terricola con un nivel de poder de: " << numero << "\n";
    break;
    
    case 2:
    cout << nombre << ", usted es raza saiyan con un nivel de poder de: " << numero << "\n";
    break;
    
    default:
    cout << "Invalido, intentelo de nuevo";
    return 0;
    }
//Jannexiel A, Victoria.
    if (numero <1200) {        
    cout << "Te a matado un saibamen.\n"; 
    
    } else if (numero < 7000) {
    cout << "Te a matado Nappa.\n";
    
    } else if (numero < 18000) {         
    cout << "Te a matado Vegeta.\n"; 
    
    } else if (numero < 530000) {
    cout << "Te a matado Freezer 1ra forma.\n"; 
    
    } else if (numero < 75000000) {
    cout << "Te a matado Freezer forma final (50%)\n"; 
    
    } else if (numero < 105000000) {
    cout << "Te a matado Freezer forma final (70%)\n";
   
    } else if (numero > 105000000) {
    cout << "Felicitaciones, Haz podido derrotar a todos tus enemigos.\n";
    }
    
   for (int i = 0; i <3; i++)
   {
       for (int j = 0; j < 21; j++) 
       {  
           cout << " * ";
       }
       cout << endl;
   }
//Oscar G. Rodríguez.
    string agradecimientoDes[3][2] = 
    {    
        {"Gracias por jugar.", "Espero que te haya gustado."},
        {"Gracias por su tiempo.", "Hasta pronto."},
        {"Espero que vuelva a utilizar nuestro programa.", "Goku te manda un saludo."}
    };
// Estas tres lineas de codigo fueron copiadas de Copilot.
    srand(time(0));
    int filaAleatoria = rand() % 3;
    int columnaAleatoria = rand() % 2;
//********************************************************
    cout << agradecimientoDes [filaAleatoria][columnaAleatoria] << endl;
    
    return 0;
}
