#include<iostream>
#define f(i,j,n) for(int i=j;i<=n;i++)
int func(int n,int x){
	int sum=0; 
	while(n>=10){
		int a=n%10;
		if(a==x)
			sum++;
		n/=10;
	}	
	if(n==x)
	sum++;
	return sum;
}
int main(){
	using namespace std;
	int n,x;
	int sum=0;
	cin >>n>>x;
	f(i,1,n)
	sum+=func(i,x);
	cout<<sum;
	return 0;
} 
