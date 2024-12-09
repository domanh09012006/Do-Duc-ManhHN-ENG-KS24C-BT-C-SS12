#include<stdio.h> 
int functionPrintf(int arr[], int n){
	printf("Cac thanh phan cua mang la: ");
	for(int i=0; i<n; i++){
		printf("\narr[%d] = %d", i, arr[i]);
	}
	return arr[100];
}
int main(){
	int n;
	int arr[100];
	printf("Nhap kich thuoc cho mang: ");
	scanf("%d", &n);
	printf("Nhap thanh phan cho mang: ");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	functionPrintf(arr, n);
	
}

