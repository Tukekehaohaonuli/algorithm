#include<cstdio>
int main(){
	int sup[51],temp[51];
	int num[27];
	int n;
	scanf("%d",&n);
	while(n--){
		for(int i=1;i<27;i++)
		{
			scanf("%d",&num[i]);
		}
		for(int i=1;i<=50;i++){    //i==1
			sup[i]=0;
			temp[i]=0;
		}
		sup[0]=1;     //这里是关键 无论如何总价值为0的组合方式必有一种，即所有的字母数都是0个； 
		for(int i=1;i<27;i++){
			for(int j=0;j<=50;j++){      //j==1
				for(int k=0;(k*i+j)<=50&&k<=num[i];k++){//
					temp[k*i+j]+=sup[j];
				}
			}
			for(int j=1;j<=50;j++){      //j==1
				sup[j]=temp[j];
				temp[j]=0;
			}
		}
		int ans=0;
		for(int i=1;i<=50;i++)
		ans+=sup[i];
		printf("%d\n",ans);
	}
	return 0;
}
