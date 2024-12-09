#include<stdio.h>
int functionPrintf(int arr[], int n){
	int max = 0;
	printf("So lon nhat trong mang la: ");
	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("%d", max);
	return arr[100];
}
int main(){
	int n, max = 0;
	int arr[100];
	printf("Nhap kich thuoc cho mang: ");
	scanf("%d", &n);
	printf("Nhap thanh phan cho mang: ");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	functionPrintf(arr, n);
	
}

