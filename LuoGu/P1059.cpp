#include<cstdio>
int temp[1001],name[101];
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
	int i=0;
	while(i<n){
		scanf("%d",temp+i);
		if(++name[temp[i]]>1){
			n--;
		}
		else
		i++;
	}
	quickSort(temp,0,n-1);
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	printf("%d ",temp[i]);
	return 0;
}
