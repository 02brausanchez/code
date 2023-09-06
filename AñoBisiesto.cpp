#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a;
    cout <<" Enter the year "<<endl;
    cin >>a;
    if(a % 4 == 0){
        if(a % 100 == 0){
            if(a % 400 == 0){
                cout <<a<<" is a leap year "<<endl;
            }else{
                cout <<a<< " is not a leap year "<<endl;
            }
        }else{
            cout <<a<<" is a leap year "<<endl;
        }
    }else{
        cout <<a<<" is not a leap year "<<endl;
    }
    
    return 0;
}


