#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n1, n2, cont;
    cin >> n1 >> n2; 
    cont = n1;           
    do{                   //while(cont <= n2);               
    cout << cont << endl; //cout << cont << endl;       
    cont++;               //cont++;                      
    }while(cont <= n2);
    
    return 0;
}
