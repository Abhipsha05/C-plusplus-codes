#include<iostream>
using namespace std;
int main(){
    int n, digit, ans = 0;
    cout<<"enter a no.";
    cin>>n;
    while(n != 0 )
    {
        digit= n%10;
        ans = (ans * 10) + digit;
        n = n/10;  
   
    }
    cout<<ans;
}