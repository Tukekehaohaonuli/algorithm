#include<iostream>
int func(int n){
	if(n==1)
	return 1;
	else
	return n*func(n-1);
}
int main(){
	using namespace std;
	int n;
	cin >> n;
	int x=func(n);
	cout << x;
	return 0;
}
