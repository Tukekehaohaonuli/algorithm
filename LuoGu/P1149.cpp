#include<cstdio>
int num[]={6,2,5,5,4,5,6,3,7,6};
int a[2001]={6};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<2001;i++){
		int temp=i;
		while(temp){
			a[i]+=num[temp%10];
			temp/=10;
		}
	}
	int ans=0;
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++){
			if(a[i]+a[j]+a[i+j]+4==n)
			ans++;
		}
	}
	printf("%d",ans);
}
