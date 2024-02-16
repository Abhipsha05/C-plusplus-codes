#include<iostream>
using namespace std;
int main(){
    int i=1, n=4;
    int j;
    while(i<=n){
        for(j=1;j<=n;j++)
        {
            cout<<" ";

        }
         for(j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    i=1;
    while(i<=n){
        int space= n-i;
        while(space){
            cout<<" ";
            space--;

        }
       int j=1;
       while(j<=i){
         cout<<"*";
         j++;
       }
       cout<<endl;
       i++;
    }

}