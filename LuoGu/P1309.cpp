#include<cstdio>
#include<algorithm>
using namespace std;
struct contest{
	int score;
	int strength;
	int num;
}con[200001],t[200001];
bool cmp(contest con1,contest con2){
	if(con1.score==con2.score) return con1.num<con2.num;
	return con1.score>con2.score;
}
void Merge(contest temp[],int low,int mid,int high){
	int i,j,k;
	for(i=low;i<=high;i++)
	t[i]=temp[i];
	for(i=low,j=mid+1,k=i;i<=mid&&j<=high;k++){
		if(cmp(t[i],t[j]))
		temp[k]=t[i++];
		else
		temp[k]=t[j++];
	}
	while(i<=mid) temp[k++]=t[i++];
	while(j<=high) temp[k++]=t[j++];
}
void MergeSort(contest A[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		MergeSort(A,low,mid);
		MergeSort(A,mid+1,high);
		Merge(A,low,mid,high);
	}
}
int main(){
	int n,r,q;
	scanf("%d%d%d",&n,&r,&q);
	for(int i=1;i<=2*n;i++){
		scanf("%d",&con[i].score);
		con[i].num=i;
	}
	for(int i=1;i<=2*n;i++)
	scanf("%d",&con[i].strength);
	
	for(int i=0;i<r;i++){
		MergeSort(con,1,2*n);
		for(int j=1;j<n;j=j+2){
			if(con[j].strength>con[j+1].strength)
			con[j].score++;
			else
			con[j+1].score++;
		}
	}
	printf("%d",con[q].num);
	return 0;
}
