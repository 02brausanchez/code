
/* 
    Formulas a evaluar: 
    y = x + 5 / 2(x + 1 ) 
    z = y*y + x ( x - 2y) / xy
    
    Calcular el valor de z dado x 

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    double x , y , z; 
    //double EformY ; double EformZ
    cin >> x; 
    y = (x + 5) / (2 * ( x + 1)); 
    z =  (pow( y , 2) + x) * ( x - 2 * y) / (x * y); 
    cout << z <<endl; 
 
    return 0;
}
