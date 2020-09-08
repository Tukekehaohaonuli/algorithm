#include<cstdio>
int m,n,k,l,d;
int a[1001],b[1001];
int temp[2001][4];
int c[1001],e[1001];
int main(){
	scanf("%d%d%d%d%d",&m,&n,&k,&l,&d);
	for(int i=0;i<d;i++){
		scanf("%d%d%d%d",&temp[i][0],&temp[i][1],&temp[i][2],&temp[i][3]);
		if(temp[i][0]>temp[i][2])
		a[temp[i][2]]++;
		else if(temp[i][0]<temp[i][2])
		a[temp[i][0]]++;
		else if(temp[i][1]>temp[i][3])
		b[temp[i][3]]++;
		else
		b[temp[i][1]]++;
	}
	while(k--){
		int max=0,maxi=0;
		for(int i=1;i<1001;i++){
			if(a[i]>max)
			{
				maxi=i;
				max=a[i];
			}
		}
		c[maxi]++;
	//	printf("%d ",maxi);
		a[maxi]=0;
	}
	//printf("\n");
	while(l--){
		int max=0,maxi=0;
		for(int i=1;i<1001;i++){
			if(b[i]>max)
			{
			maxi=i;
			max=b[i];
			}
		}
		e[maxi]++;
	//	printf("%d ",maxi);
		b[maxi]=0;
	}
	for(int i=1;i<1001;i++){
		if(c[i])
		printf("%d ",i);
	}
	printf("\n");
	for(int i=1;i<1001;i++){
		if(e[i])
		printf("%d ",i);
	}
	return 0;
}
