#include<iostream>
using namespace std;
int factorial(int n){
    int ans =  1;
    for(int i=1; i<=n; i++){
        ans = ans * i;
    }
   return ans;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denum = factorial(n-r)*factorial(n);
    int ans2= num/denum;
    return ans2;
}



int main(){
    int m, o;
    cin>>m;
    
     cout<<"Factorial of "<<m<<" is: "<<factorial(m)<<endl;
    nCr(m,o);
    cout<<"nCr: "<< nCr(m,o);
}