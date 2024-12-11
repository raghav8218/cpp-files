#include <bits/stdc++.h>
using namespace std;
int main(){
	//to declare normal array
	int arr[]={32,55,31,98,75,36};
	cout<<arr[5]<<endl;

	//pointers
	int i=4;
	int*b=&i;
	cout<<i<<endl;//prints i
	cout<<*b<<endl;//prints value at b
	cout<<b<<endl; //prints b i.e. address


	//pointers in array
	int*a=arr; //note that here we didnt used & because the name of the array is an address of the first index of an array. So to use ampersand "&" with the array name for assigning the address to a pointer is wrong.
	cout<<a<<endl; //this will print address of array
	cout<<*a<<endl; //this will print value at a
	cout<<*(a+1); //pointer shifts to next value




}