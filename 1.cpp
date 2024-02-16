//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

//You can return the answer in any order.

#include<iostream>
using namespace std;
class solution1
{   private:
    int n;
    int num[100];

    public:
     void getdata(){
         cout<<"enter no. of elemments:";
         cin>>n;
         cout<<"enter elements in array:";
         for(int i=1;i<=n ; i++)
          {
              cin>>num[i];
          }
     }

     void gettarget()
     {
         int t;
         cout<<"enter the target to achieve:";
         cin>>t;
         for(int i=0; i<n; i++){
             for(int j=i+1; j<n; j++)
             {
                 if((num[i]+num[j]) == t){
                     cout<<"output ="<<i<<","<<j;
                 }
             }
         }
     }
};

int main()
{
    solution1 s;
    s.getdata();
    s.gettarget();
}