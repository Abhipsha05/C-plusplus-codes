#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

 int countBits( int n){
     int count = 0;
     int x=n;
     while(x!=0){
         count++;
          x= x/2;
     }
     int a[count-1];
     for(int j=count-1; j>=0; j--){
         a[j]=n%2;
         n= n/2;
     }
  int count2 = 0;
    
    // Count number of set bits
    for (int i = 0; i < count; i++) {
        if (a[i] == 1) { // Use == for comparison
            count2++;
        }
    }
    
    return count2;
     
 }

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
} 