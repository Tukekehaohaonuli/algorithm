#include<cstdio>
int temp[1000001];
int partition(int t[],int low,int high){
	int pos=t[low];
	while(low<high){
		while(low<high&&t[high]>=pos)high--;
		t[low]=t[high];
		while(low<high&&t[low]<=pos)low++;
		t[high]=t[low];
	}
	t[low]=pos;
	return low;
}
void quickSort(int t[],int low,int high){
	if(low<high){
		int pos=partition(t,low,high);
		quickSort(t,low,pos-1);
		quickSort(t,pos+1,high);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",temp+i);
	}
	quickSort(temp,0,n-1);
	for(int i=0;i<n;i++)
	printf("%d ",temp[i]);
	return 0;
}
