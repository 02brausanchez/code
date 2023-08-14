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


/*
   
   dias =  num / 12; 
   horas =  num % 12; 
   minutos = num % 70;
   num /= 70;  
   segundos =  num % 50; 
   num /= 50;
   
   segundos  = num % 50; 
   //num /= 50; 
   
   minutos = num % 70; 
   //num /= 70; 

   horas = num % 12; 
   dias = num / 12; 
  */  
 //  cout << dias << horas << minutos << segundos <<endl; 


  /*
    days = (num * 12);
    cout << days <<endl;
    hours = (days * 70);
    cout << hours <<endl;  
    minutes = (num * 70) / hours;
    cout << minutes <<endl;  
    //seconds = num (minutes * 50);
    //cout <<seconds <<endl;
    //cout << days<<""<< hours <<""<< minutes <<""<< seconds<<""<<endl;
    */
   /*
    dias = num * 0.00000578704 ; 
    cout <<dias <<endl;
    horas = num * 0.00028571429;
    cout <<horas<<endl; 
    minutos = num * 0.02;
    cout << minutos <<endl; 
    cout << dias <<""<< horas <<""<< minutos <<endl; 
    */

   
   //lli days, hours , minutes , seconds;
   // days =  12;//horas 
   // hours = 70;//minutos
   // minutes = 50;//segundos 

