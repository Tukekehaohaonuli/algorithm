#include<stdio.h>
#define N 10000
#define K 30000
//int function(int temp[],int low,int high){
//	int mid;
//	int tmp=temp[low];
//	while(low<high){
//		while(low<high&&temp[high]>=tmp) high--;
//		temp[low]=temp[high];
//		while(low<high&&temp[low]<=tmp) low++;
//		temp[high]=temp[low];
//	}
//	temp[low]=tmp;
//	return low;
//}
//int partion(int temp[],int low,int high,int k){
//	if(low<high){
//		int mid=function(temp,low,high);
//		if(mid==k-1)
//		return mid;
//		else if(mid>k-1)
//		partion(temp,low,mid-1,k);
//		else
//		partion(temp,mid+1,high,k);
//	}
//}
int BucketSort(int temp[],int n){
	int a[K]={0},t=0;
	for(int i=0;i<n;i++){
		a[temp[i]]=1;
		
	}
	int j=0; 
	for(int i=0;i<K;i++){
		if(a[i]!=0){
		 temp[j++]=i;
		 t++;
	}
	}
	return t;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int temp[N];
	for(int i=0;i<n;i++)
	scanf("%d",&temp[i]);
	int t=BucketSort(temp,n);
//	for(int i=0;i<t;i++)
//	printf("%d ",temp[i]);
	if(k<=0||k>t)
	printf("NO RESULT"); 
	else
	printf("%d",temp[k-1]); 
	return 0;
} 
