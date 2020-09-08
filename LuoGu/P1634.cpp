#include<iostream>
int main(){
	using namespace std;
	int x,n;
	cin >>x>>n;
	long long int sum=1,now=1;
	while(n>0){
		sum+=now*x;
		now=sum;
		n--;
	}
	cout << sum;
	return 0;
}
