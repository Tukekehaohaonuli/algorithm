#include<cstdio>
#include<cmath>
int partition(int temp[],int low,int high){
	int pivot=temp[low];
	while(low<high){
		while(low<high&&abs(temp[high])<=abs(pivot))--high;
		temp[low]=temp[high];
		while(low<high&&abs(temp[low])>=abs(pivot))++low;
		temp[high]=temp[low];
	}
	temp[low]=pivot;
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
	int n;
	int temp[101];
	while(scanf("%d",&n),n){
		for(int i=0;i<n;i++){
			scanf("%d",temp+i);
		}
		quickSort(temp,0,n-1); //
		for(int i=0;i<n;i++){
			printf("%d%c",temp[i],(i<n-1?' ':'\n'));
		}
	}
	return 0;
}
