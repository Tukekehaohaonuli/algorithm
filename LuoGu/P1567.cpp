#include<iostream>
#define f(i,j,n) for(int i=j;i<n;i++)
int tep[1000001];
int main(){
	using namespace std;
	int n;
	cin>>n;
	f(i,0,n)
	cin>>tep[i];
	int ans=1;
	int max=0;
	f(i,0,n-1){
		if(tep[i]<tep[i+1])
		ans++;
		else{
			if(ans>max)
			max=ans;
			ans=1;
		}
		
		
		
	}
	cout <<max;
	return 0;
} 
