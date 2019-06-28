#include <iostream>
#include <ctime>
using namespace std;

void merge(int *x,int *y,int *a,int s,int e){
	int i = s;
	int mid = (s+e)/2;
	int j = mid+1;
	int k =s;

	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k++] = x[i++];
		}
		else{
			a[k++]=y[j++];
		}
	}

	while(j<=e){
		a[k++]=y[j++];
	}

	while(i<=mid){
		a[k++]=x[i++];
	}
}


void MergeSort(int *a,int s,int e){
	// Base case
	if(s>=e){
		return;
	}
	// Recursive case
	// Divide
	int mid = (s+e)/2;
	int x[10000],y[10000];
	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}
	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}
	// Sort
	MergeSort(x,s,mid);
	MergeSort(y,mid+1,e);
	//Merge
	merge(x,y,a,s,e);
}

void BubbleSort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}

	return;
}



int main(){
	int a[10000];
	int n;

	cin>>n;
	for(int i=0;i<n;i++){
		a[i] = n-i;
	}

	clock_t t;
	t = clock();
	MergeSort(a,0,n-1);
	t = clock() - t;
	cout<<"MergeSort took : "<<t<<endl;

	for(int i=0;i<n;i++){
		a[i] = n-i;
	}
	t = clock();
	BubbleSort(a,n);
	t = clock() - t;
	cout<<"BubbleSort took : "<<t<<endl;	
	return 0;
}




