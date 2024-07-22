#include <bits/stdc++.h>
using namespace std;
#define TAM 100 

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int tt, m; 
    cin >> tt >> m;  // Leer el tamaño de la matriz tt x m

    vector<int> count(TAM, 0);  // Array para contar objetos, asumimos un máximo de TAM tipos diferentes
    int matrix[TAM][TAM];

    for (int i = 0; i < tt; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] > 0 && matrix[i][j] < TAM) {
                count[matrix[i][j]]++;  // Incrementar el conteo para el tipo de objeto
            }
        }
    }

    // Imprimir los tipos de objetos y sus cantidades
    bool first = true;
    for (int i = 1; i < TAM; i++) {
        if (count[i] > 0) {
            if (!first) {
                cout << " ";
            }
            cout << count[i];
            first = false;
        }
    }
    cout << "\n";

    return 0; 
}







