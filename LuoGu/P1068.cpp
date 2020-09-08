#include<cstdio>
int num[5001],score[5001];
int partition(int t[],int num[],int low,int high){
	int pos=t[low],pos1=num[low];
	while(low<high){
		while(low<high&&t[high]<=pos)high--;
		t[low]=t[high];num[low]=num[high];
		while(low<high&&t[low]>=pos)low++;
		t[high]=t[low];num[high]=num[low];
	}
	t[low]=pos;
	num[low]=pos1;
	return low;
}
void quickSort(int t[],int num[],int low,int high){
	if(low<high){
		int pos=partition(t,num,low,high);
		quickSort(t,num,low,pos-1);
		quickSort(t,num,pos+1,high);
	}
}
int partition1(int t[],int num[],int low,int high){
	int pos=t[low],pos1=num[low];
	while(low<high){
		while(low<high&&t[high]>=pos)high--;
		t[low]=t[high];num[low]=num[high];
		while(low<high&&t[low]<=pos)low++;
		t[high]=t[low];num[high]=num[low];
	}
	t[low]=pos;
	num[low]=pos1;
	return low;
}
void quickSort1(int t[],int num[],int low,int high){
	if(low<high){
		int pos=partition1(t,num,low,high);
		quickSort1(t,num,low,pos-1);
		quickSort1(t,num,pos+1,high);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d%d",num+i,score+i);
	}
	quickSort1(num,score,1,n);
	quickSort(score,num,1,n);
	int endscore=score[int(1.5*m)];
	int endnum=0;
	for(int i=1;i<=n;i++){
		if(score[i]>=endscore)
		endnum++;
		else
		break;
	}
	printf("%d %d\n",endscore,endnum);
	for(int i=1;i<=endnum;i++)
	printf("%d %d\n",num[i],score[i]);
	return 0;
}
