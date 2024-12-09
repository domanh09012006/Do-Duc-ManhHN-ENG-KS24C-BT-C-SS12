#include<stdio.h>
int Tong(int a, int b){
	int sum = a+b;
	return sum;
}
int main(){
	int a, b, sum;
	printf("Nhap so thu 1: ");
	scanf("%d", &a);
	printf("Nhap so thu 2: ");
	scanf("%d", &b);
	sum = Tong(a, b);
	printf("Tong 2 so la: %d", sum);
	
	return 0;
}
