#include <bits/stdc++.h>
using namespace std;
const double pi = 3.1416;
   
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
double radio, angulo;
double a, b, x, y, r;
cout <<" Conversion de unidades polares a cartesianas "<<endl;
cout <<" Ingresa el radio "<<endl;
cin >> radio;
cout <<" Ahora ingresa el valor del angulo "<<endl;
cin >> angulo;
angulo = angulo * pi/180;
a = radio * cos(angulo);
b = radio * sin(angulo);
cout<<" El valor de x es: "<< a <<endl;
cout<<" El valor de y es: "<< b <<endl;
cout<<" "<<endl;
cout <<" Conversion de unidades cartesianas a polares "<<endl;
cout <<" Ingresa el valor de x "<<endl;
cin >> x; 
cout <<" Ingrsa el valor de y "<<endl;
cin >> y;
if( x != 0){
r = sqrt(pow(x,2) + pow(y,2));
angulo = atan(y / x) * 180 / pi;
}else{
if(y > 0){
angulo = 90.0;
r = y;
}else if( y < 0){
angulo  = 270;
r = -y;
}else{
angulo = 0.0;
r = 0.0; 
}
}

cout <<" El valor de r: "<< r <<endl;
cout <<" El valor de w: "<< angulo <<endl;

 return 0;
}
