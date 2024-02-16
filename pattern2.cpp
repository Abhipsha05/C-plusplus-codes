#include<iostream>
using namespace std;
int main(){

int i=1;
int n;
cout<<"enter a no.";
cin >> n;

while(i<=n){
    for ( int j=1; j<=i; j++){
        cout<<j;

    }
    cout<<endl;
    i++;
}
cout<<endl;
int m=1, count = 1;
while(m<=n){
    for ( int j=1; j<=m; j++){
        cout<<count;
        count++;

    }
    cout<<endl;
    m++;
}
}
