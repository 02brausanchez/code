#include <bits/stdc++.h>
using namespace std;

int numStudents;
int studentsAges[25];

void readStudentsAges(){
    cin >> numStudents;
    for(int i = 0; i < numStudents; i++){
        cin >> studentsAges[i];
    }
}

int findMinimumAge(int ages[], int quantity){
    int minAge = ages[0];
    for(int i = 0; i < quantity; i++){
        if( minAge > ages[i]){
            minAge = ages[i];
        }
    }
 return minAge;
}

int main(){

    int minAge;
    readStudentsAges();
    minAge = findMinimumAge(studentsAges, numStudents);
    cout << minAge << endl;

    return  0;
}
