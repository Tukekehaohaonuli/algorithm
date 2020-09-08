#include<cstdio>
int partition(int k[],int temp[],int low,int high){
	int pot=temp[low],pos=k[low];
	while(low<high){
		while(low<high&&temp[high]>pot)high--;
		temp[low]=temp[high];k[low]=k[high];
		while(low<high&&temp[low]<pot)low++;
		temp[high]=temp[low];k[high]=k[low];
	}
	temp[low]=pot;
	k[low]=pos;
	return low;
}
void quickSort(int k[],int temp[],int low,int high){
	if(low<high){
		int pos=partition(k,temp,low,high);
		quickSort(k,temp,low,pos-1);
		quickSort(k,temp,pos+1,high);
	}
}
int main(){
	int n;
	int start[100],end[100];
	while(scanf("%d",&n),n){
		for(int i=0;i<n;i++){
			scanf("%d%d",&start[i],&end[i]);
		}
		quickSort(start,end,0,n-1);
		int ans=1,lastend=end[0];
		for(int i=1;i<n;i++){
			if(start[i]>=lastend){
				ans++;
				lastend=end[i];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
