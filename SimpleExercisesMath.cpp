// La funcion pow, sirve para elevar un numero a una potencia x que se le asigne 
# include <iostream>
# include <cmath>
using namespace std;

int main ()
{
    /*
    
    float myfloat = 7.7f; 
    cout << myfloat <<"en potencia de 2 es:" << pow(myfloat, 2 ) <<endl;
     
    cout <<" Ingrese un numero por favor"<<endl; 
    cin >> num; 
    cout <<num<<" en potencia 2 es: "<< pow(num,2) <<endl;
    cout <<num<<" en potencia 3 es: "<< pow(num,3) <<endl;
    cout <<num<<" en potencia 4 es: "<< pow(num,4) <<endl;
    
    */
    double c1, c2,h,num;
    cout <<" cuando h > c"<<endl; 
    cout <<" ingresa el valor de h "<<endl; 
    cin >> h; 
    cout <<" ingresa ahora el valor de c1"<<endl; 
    cin >> c1; 

    if( h > c1){
        c2 = sqrt(pow(h,2)-pow(c1,2)); 
        cout <<" el valor de c2 es "<<c2<<endl;
    }else{
        cout<<" haz colocado mal los datos! "<<endl;
    }
   
    return 0;
}
