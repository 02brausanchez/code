    # include <bits/stdc++.h>
    using namespace std;
    using lli = long long int;

    int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli num, cont, digito,num_orig;
    cout <<" Ingresa un numero entero ";
    cin >> num;
    num_orig = num;
    cont = 1;
    cout <<" Los digitos de: "<< num <<" son:"<<endl;
    while (num > 9){
     digito = num % 10;
     cout<<" Digito: "<< digito <<endl;
     cont += 1;
     num = trunc(num/10);
    }
     cout<<" num "<< num <<std::endl;
     cout<< num_orig <<" tiene "<< cont <<" digitos! "<<endl;

        return 0;
    }


