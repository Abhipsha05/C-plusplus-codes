#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int basic;
    float allow;
    char grade;
    cin>>basic>>grade;
    double hra = (0.2 * basic);
    double da = (0.5 * basic);
    double pf = (0.11 * basic);
    switch(grade){
        case 'A':
        allow = 1700; 
        break;
        
        case 'B':
        allow = 1500;
        break;

        default:
        allow = 1300;
    }
   
   double totsal = basic + hra + da + allow - pf;
cout << int(round(totsal));
    return 0;
 

    
}