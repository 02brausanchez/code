#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int numero, suma, n, cont;
        // ========== Ciclo while ============ //
    cout <<"Cuantos numeros quieres sumar usando ciclo while?"<<endl; 
    cin >> n; 
    suma = 0; 
    cont = 1;
    while(cont<=n)
    {
    cout << "Ingrese numero" << endl; 
    cin >> numero;
    suma += numero; //suma = suma + numero
    cont += 1;      // cont = cont + 1
    }
    cout << "la suma de n numeros con el ciclo while es: "<<suma<<endl;
    // ========== Ciclo for ============ //
    cout << "Cuantos numeros quieres sumar con el ciclo for?"<<endl;
    cin >> n; 
    suma = 0;
    cont = 1;
    for (cont = 1; cont <= n; cont++)
    {
    cout << "Ingresa numero"<<endl;
    cin >> numero;
    suma += numero;       
    }
    cout <<"la suma de n numeros con el ciclo for es: "<<suma<<endl; 
    // ========== Ciclo do-while ============ //
    cout <<"Cuantos numeros quieres sumar ocupando ciclo do-while?"<<endl; 
    cin >> n; 
    suma = 0; 
    cont = 1;
    do
    {
    cout <<"Ingresa numero"<<endl;
    cin >> numero; 
    suma += numero;
    cont += 1;

    } while (cont <= n);
    cout <<"la suma de n numeros con el ciclo do-while es: "<<suma<<endl; 
    return 0; 
}       