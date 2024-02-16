#include<iostream>
using namespace std;
int main() {
    int i=1;
    int n = 4;
    while(i<=n){
        char ch = 'A' + i - 1;
        for (int j=1; j<= n; j++){
            cout<< ch;
        }
        cout<<endl;
        i++;

    }
    cout<<endl;
    i = 1;
    while(i<=n){
        
        for (int j=1; j<= i; j++){
            char ch = 'A' + i + j - 2;
            cout<< ch;
        }
        cout<<endl;
        i++;

    }
    cout<<endl;
    i = 1;
    while(i<=n){
        
        for (int j=1; j<= n; j++){
            char ch = 'A' + i + j - 2;
            cout<< ch;
        }
        cout<<endl;
        i++;

    }
    
}