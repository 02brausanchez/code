/*

Descripcion:  
* los minutos en este planeta son de 50 segundos 
* las horas de 70 minutos 
* los dias de 12 horas 

*/

#include <bits/stdc++.h>
using namespace std;
//using lli = long long int;

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int  S,days,hours, minutes, seconds; 
   cin >> S;

   seconds = S % 50, S /= 50; 
   minutes = S % 70, S /= 70; 
   hours = S % 12, S/= 12;
   days = S;
   cout << days <<" "<< hours <<" "<< minutes <<" "<< seconds <<endl;
    
   return 0;
}




