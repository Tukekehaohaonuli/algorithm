#include<iostream>
#define f(i,j,n) for(int i=j;i<n;i++)
int main(){
	using namespace std;
	int temp[10];
	int n;
	f(i,0,10)
	cin>>temp[i];
	cin>>n;
	int sum=0;
	f(i,0,10){
		if((n+30)>=temp[i])
		sum++;
	}
	cout<<sum;
	return 0;
}
