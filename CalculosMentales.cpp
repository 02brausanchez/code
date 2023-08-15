
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    double R; double sum; double sqrt; double div; double cub; 
    cin >> R; 
    cout <<fixed<< R <<endl;
    sum = R + 5; 
    cout <<fixed<< sum <<endl;
    sqrt = pow( sum , 2 );
    cout <<fixed<< sqrt <<endl;
    div = (sqrt / (R / 3 ));
    cout <<fixed<< div <<endl; 
    cub = pow(div,3); 
    cout <<fixed<< cub <<endl; 
 /*
    cout << sum << sqrt << div << cub <<endl;
    fixed sirve para mostrar los numeros sin la notacion cientifica 
 
 */
    return 0;
}
