#include<cstdio>
#include<algorithm>
using namespace std;
	int ans=0;
	int temp[10001];
	int n;
void AdjustDown(int A[],int k,int len){
	A[0]=A[k];
	for(int i=2*k;i<=len;i=i*2){
		if(i<len&&A[i]>A[i+1])
		i++;
		if(A[0]<=A[i]) break;
		else{
			 A[k]=A[i];
			 k=i;
		}
	}
	A[k]=A[0];
}
void BuildMaxHeap(int A[],int len){
	for(int i=len/2;i>0;i--)
	AdjustDown(A,i,len);
} 
void HeapSort(int A[],int len){
	BuildMaxHeap(A,len);
	for(int i=len;i>2;i--){
		if(A[2]<=A[3]){
			ans+=A[1]+A[2];
			A[2]+=A[1];
			swap(A[i],A[1]);
			AdjustDown(A,1,i-1);
		}
		else{
			ans+=A[1]+A[3];
			A[3]+=A[1];
			swap(A[i],A[1]);
			AdjustDown(A,1,i-1);
		}
	}
	ans+=A[1]+A[2];
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",temp+i);
	HeapSort(temp,n);
	printf("%d",ans);
	return 0;
}
