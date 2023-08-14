# include <bits/stdc++.h>
//# include <iostream>
//# include <string>
using namespace std;
using lli = long long int;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);  
  string name;   
  lli numtarjeta; 
  int nip, secret; 
  secret = 1545; 
  int intentos = 0;
  int max_intentos = 4;

  cout <<" Ingrese su nombre de usuario:"<<endl;
  getline(cin , name);
  cout <<" Ingrese su numero de tarjeta: "<<endl; 
  cin >> numtarjeta;  
  
  bool esNipCorrecto = false;

  while (intentos < max_intentos)
  {
    cout << " Ingresa tu NIP:"<<endl;
    cin >> nip;
    if(nip == secret){
        esNipCorrecto = true;
        break;
    }else{
        cout <<" NIP incorrecto, intentos restantes: "<<(max_intentos - intentos - 1)<<endl;
    }
    intentos += 1; 
  }
    if(esNipCorrecto){
        cout << " El NIP es correcto! "<<endl;
        cout << " Bienvenido a su cuenta "<<name<<endl;
    }else{
        cout <<" Su cuenta ha sido bloqueado, paso el limite de intentos "<<endl;
    }

    return 0;
}

