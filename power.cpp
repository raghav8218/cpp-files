#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){
	if (b==0){
		return 1;
	}
	int temp=power(a,b/2);
	if (b%2==0){
		return temp*temp;
	}
	else{
		return temp*temp*a;
	}
}