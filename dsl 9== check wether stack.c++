
#include<iostream>
using namespace std;
int a[10];
void swap(int b,int c){
	int temp=a[b];
	a[b]=a[c];
	a[c]=temp;
}
int partition(int low,int high){

	int pivot=high;
	int index=low;
	for(int i=low;i<high;i++){
		if(a[i]<=a[pivot]){
			swap(i,index);
			index++;
		}
	}
	swap(index,high);
	return index;

	int i=1;
	int j=0;
	while((low+i)!=(high-j)){
		if(a[low+i]<a[pivot])
			i++;
		else if(a[high-j]>a[pivot])
			j++;
		else
			swap(low+i,high-j);
	}
	if((low+i)==high-j){
		swap(pivot,low+i-1);
		pivot=low+i-1;
	}
	return pivot;*/
}
void quicksort(int low,int high){
	if(low>=high)
		return;
	else{
		int loc=partition(low,high);
		quicksort(low,loc-1);
		quicksort(loc+1,high);
	}
}
int main(){
	int n;
	cout<<"Enter size ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(0,n-1);
	for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
	}

}

