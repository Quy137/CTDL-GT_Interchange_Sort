// nguon
// cai dat
#include<stdio.h>
void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
void Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
