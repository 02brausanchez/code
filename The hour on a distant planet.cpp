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
   int  s,days,hours, minutes, seconds; 
   cin >> s;
   seconds = s % 50, s /= 50; 
   minutes = s % 70, s /= 70; 
   hours = s % 12, s/= 12;
   days = s;
   cout << days <<" "<< hours <<" "<< minutes <<" "<< seconds <<endl;
    
   return 0;
}




