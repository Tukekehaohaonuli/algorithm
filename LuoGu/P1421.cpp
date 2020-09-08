#include<iostream>
int main(){
	using namespace std;
	double a,b;
	cin>>a>>b;
	b/=10;
	a+=b;
	a/=1.9;
	cout << int(a);
} 
