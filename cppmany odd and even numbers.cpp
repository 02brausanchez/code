#include <bits/stdc++.h>
using namespace std;

int main() {
 ios_base::sync_with_stdio(0); cin.tie(0);
 random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,50);
    int num, contP, contI, total;
    contP = 0; contI = 0;
    cout <<" Cuantos numeros quieres generar? " <<endl;
    cin >> total;
    cout <<""<<endl;
    while (total > 0){
        num = dist(gen);
        cout <<"" <<num <<endl;
        if(num % 2 == 0){
            contP++;
        }else{
            contI++;
        }
        total--;

    }
    cout <<" hay "<< contP <<" pares"<<endl;
    cout <<" hay "<< contI <<" impares"<<endl;

    return 0;
}
