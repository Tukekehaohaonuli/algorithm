#include<cstdio>
#include<cmath>
int partition(int temp[],int low,int high){
	int pos=temp[low];
	while(low<high){
		while(low<high&&temp[high]>pos)high--;
		temp[low]=temp[high];
		while(low<high&&temp[high]<pos)low++;
		temp[high]=temp[low];
	}
	temp[low]=pos;
	return low;
}
void quickSort(int temp[],int low,int high){
	if(low<high){
		int pos=partition(temp,low,high);
		quickSort(temp,low,pos-1);
		quickSort(temp,pos+1,high);
	}
}
int main(){
	int m,n;
	int temp[501];
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",temp+i);
		}
		quickSort(temp,0,n-1);
		int ans=0;
		//if(n%2==1)
		for(int i=0;i<n;i++){
			ans+=abs(temp[i]-temp[n/2]);
		}
	/*	else{
			int ans1=0;
			for(int i=0;i<n;i++){
				ans+=abs(temp[i]-temp[n/2]);
			}
			for(int i=0;i<n;i++){
				ans1+=abs(temp[i]-temp[n-1/2]);
			}
			if(ans1<ans)
			ans=ans1;
		}*/
		printf("%d\n",ans);
	}
	return 0;
} 
