#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n, digit, ans = 0;
    cout<<"enter a no.";
    cin>>n;
    while(n != 0 )
    {
        digit= n%10;
        if ((ans > INT_MAX) || (ans < INT_MIN)){
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n/10;  
   
    }
    cout<<ans;
}