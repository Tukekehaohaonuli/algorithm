#include<cstdio>
#include<cstring>
int main(){
	int n;
	scanf("%d",&n);
	char c[100001],oldc;
	
	while(n--){
		int num[10001]={0};
		scanf("%s",c);
		int len=strlen(c);
		oldc=c[0];
		num[0]++;
		int k=0;
		for(int i=1;i<len;i++){
			if(c[i]==oldc){
				num[k]++;
			}
			else{
				
				k++;
				c[k]=c[i];
				oldc=c[i];
				num[k]=1;
			}
		}
//		for(int i=0;i<=k;i++){
//			printf("%d***********\n",num[i]);
//		}
		for(int i=0;i<=k;i++){
			if(num[i]>=2)
			printf("%d",num[i]);
			printf("%c",c[i]);
		}
		printf("\n");
	}
	return 0;
}
