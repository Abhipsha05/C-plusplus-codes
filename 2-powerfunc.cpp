#include<iostream>
using namespace std;

int power(int a,int b){
    int ans=1;
    cout<< a <<" to the power "<< b<<":";
    for (int i=1; i<=b; i++)
    {
        ans = ans * a;
    }
   cout<<" "<<ans;
}
int main(){
    int m,n;
    cout<<"enter the base and power";
    cin>>m>>n;
    power(m,n);

}