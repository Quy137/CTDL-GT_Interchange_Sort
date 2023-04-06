// nguon https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort
// vi du
#include<stdio.h>
void inTerChange_Sort(int a[],int n){ //tang dan
	for(int i=0 ;i<n-1;i++){
		for(int j= i+1 ;j<n ; j++){
			if(a[i]>a[j]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
void nhapMang(int a[], int &n) {
	n = 0;
	int x;
	do {
		printf("Nhap 1 so nguyen cua mang . Nhap so 0 de ket thuc : ");
		scanf("%d", &x);
		if (x != 0)
			a[n++] = x;
	} while(x != 0);
}
void xuatMang(int a[], int n) {
	for(int i = 0; i<n;i++)
		printf("%4d", a[i]);
} 
int main(){
	int n,a[100];
	nhapMang(a,n);
	printf("Mang vua nhap :");
	xuatMang(a,n);
	inTerChange_Sort(a,n);
	printf("\nMang tang dan : ");
	xuatMang(a,n);
}
