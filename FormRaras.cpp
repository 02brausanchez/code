//
// Created by 02bra on 28/07/2023.
//

#include <bits/stdc++.h>
using namespace std;
const double pi = 3.1416;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    double  x , y, z;
    double formula;
    cin >>  x >> y >> z;
    formula = (x + x * ( y + z * z  ) )/ (( x + pi ) * ( y + pi ));
    cout << formula << endl;
    
    return 0;
}

/*
     Nota para operaciones "mas complejas", se necesita incluir los parentesis
     y es muy importantes los signos de operaciones para esperar el resultado
     esperado.
 */