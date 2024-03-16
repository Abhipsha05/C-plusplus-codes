#include<iostream>
using namespace std;

int swapNumber(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;	
	return a,b;
}