//
// Created by 02bra on 28/06/2023.
//
    # include <bits/stdc++.h>
    //#include <iostream>
    using namespace std;
    //#include <string>
    //#include <cmath>
    using lli = long long int;
    /*
    int main(){
    int num;
    double radio, angulo;
    double a, b;
    double pi = 3.1416;
        std::cout <<" Conversion de unidades polares a cartesianas "<<std::endl;
        std::cout <<" Ingresa el radio "<<std::endl;
        std::cin >> radio;
        std::cout <<" Ahora ingresa el valor del angulo "<<std::endl;
        std::cin >> angulo;
        angulo = angulo * pi/180;

        a = radio * cos(angulo);
        b = radio * sin(angulo);
        std::cout<<" El valor de x es: "<< a <<std::endl;
        std::cout<<" El valor de y es: "<< b <<std::endl;
 //=============================================================================//
        std::cout<<" Ingrese un numero "<<std::endl;
        std::cin >> num;
        if(num % 2 == 0){
        std::cout<< num << " es un numero par "<<std::endl;
        } else{
        std::cout<< num <<" es numero impar "<<std::endl;
        }
        return 0;
        }
*/
 // ============================================================================ //


    int main(){
     /* long long int */
        lli num, cont, digito,num_orig;
        //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        cout <<" Ingresa un numero entero ";
        cin >> num;
        num_orig = num;
        cont = 1;
        cout <<" Los digitos de: "<< num <<" son:"<<endl;
        while (num > 9){
            digito = num % 10;
            cout<<" Digito: "<< digito <<endl;
            cont = cont + 1;
            num = trunc(num/10);
        }
        cout<<" num "<< num <<std::endl;
        cout<< num_orig <<" tiene "<< cont <<" digitos! "<<endl;

        return 0;
    }

    
    /*
    int main(){
        string nombre, escuela;
        int edad;
        double promedio;
        char carrera;
        cout<<" ===== Llenado de datos personales ==== "<<endl;
        cout<<" Ingresa tu nombre por favor "<<endl;
        std::getline(cin,nombre);
        cout<<" Ahora ingresa tu edad "<<endl;
        cin>>edad;
        cout<<" Como se llamo tu escuela anterior?"<<endl;
        std::getline(std::cin,escuela);
        cout<<" Con que promedio saliste de tu escuela?"<<endl;
        cin>>promedio;
        cout<<" Elige algunas de las siguientes opciones la Inicial de tu carrera "<<endl;
        cout<<" Ing.Biomedica(B), Ing.Computacion(C), Ing.Electronica(C)"<<endl;
        cin>>carrera;
        cout<<" Tu nombres es "<<nombre<<" tienes "<<edad<<" years old "<<" estuviste en "<<escuela<<" saliste con un promedio de "<<promedio<<" la inicial de tu carrera es: "
                                                                                                                                     <<carrera<<endl;
        cout<<" hasta luego "<<nombre<<endl;
        return 0;

    }*/