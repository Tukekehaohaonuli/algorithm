#include<iostream>
const int N=1001;
#define f(i,j,k) for(int i=j;i<k;i++)
int main(){
	using namespace std;
	int a[N];
	int b[N];
	int c[N];
	int d[N];
	int n,m;
	cin >> n >>m;
	f(i,0,n){
		cin >> a[i] >>b[i];
	}
	f(i,0,m){
		cin >> c[i] >>d[i]; 
	}
	int j=0;
	int sum1=0,sum2=0;
	int ans=-1;
	int z=0;
	while(j<n&&j<m){
		sum1+=a[j]*b[j];
		sum2+=c[j]*d[j];
		if(sum1>sum2){
			if(j==0)
			{
				z=0;
				ans++;
			}
			else if(z==0)
			ans++;	
		}
		else if(sum1<sum2){
			if(j==0)
			{
				z=1;
				ans++;
			}
			else if(z==1)
			ans++;
		}
		j++;
	}
	if(j==n){
		f(i,n,m){
			sum2+=c[j]*d[j];
		}
		if(sum2>sum1&&z==1)
		ans++;
	}
	if(j==m){
		f(i,m,n){
			sum1+=a[j]*b[j];
		}
		if(sum1>sum2&&z==0)
		ans++;
	}
	cout << ans;
	return 0;
}
