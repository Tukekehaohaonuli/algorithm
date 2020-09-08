#include<iostream>
int main(){
	using namespace std;
	long long a,b,n;
	cin >>a >>b>>n;
	long long  x=a+(b-a)*(n-1);
	long long  sum=(a+x)*n/2;
	cout<< sum;
	return 0;
} 
