#include<iostream>
#define f(i,j,n) for(int i=j;i<n;i++)
int main(){
	using namespace std;
	int n;
	cin >> n;
	int * psome= new int [n];
	f(i,0,n)
	cin >> psome[i];
	int sum=0;
	f(i,0,n-1){
		f(k,1,n)
		if(*(psome+i)>*(psome+k)) 
		sum++;
	} 
	delete [] psome;
	cout << sum;
	return 0;
} 
