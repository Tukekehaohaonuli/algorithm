#include<cstdio>
const int maxn=51;
int sup[maxn];
int temp[maxn];
int num[27];
int n;
int main(){
	scanf("%d",&n);
	while(n--){
		for(int i=1;i<27;i++)
		scanf("%d",&num[i]);
		for(int i=0;i<maxn;i++){
			sup[i]=0;
		}
		sup[0]=1;
		for(int i=1;i<27;i++){
			for(int j=0;j<maxn;j++){
				for(int k=0;(k*i+j)<maxn&&k<=num[i];k++){
					temp[k*i+j]+=sup[j];
				}
			}
			for(int j=1;j<maxn;j++){
				sup[j]=temp[j];
				temp[j]=0;
			}
		}
		int ans=0;
		for(int i=1;i<maxn;i++)
		ans+=sup[i];
		printf("%d\n",ans);
	}
	return 0;
}
