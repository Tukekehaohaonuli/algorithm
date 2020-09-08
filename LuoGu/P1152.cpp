#include<stdio.h>
#include<math.h>
#define N 1000
int main(){
	int n;
	scanf("%d",&n);
	int temp[N];
	int s[N]={0};
	for(int i=0;i<n;i++)
	scanf("%d",&temp[i]);
	for(int i=0;i<n-1;i++){
		if(abs(temp[i]-temp[i+1])<n)
		s[abs(temp[i]-temp[i+1])]=1;
	}
	for(int i=1;i<n;i++)
		if(s[i]==0){
			printf("Not jolly");
			return 0;
		}
	printf("Jolly");
	return 0;
}
