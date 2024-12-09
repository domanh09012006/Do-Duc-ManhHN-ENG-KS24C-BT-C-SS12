#include<stdio.h> 
int functionCheck1(int a){
	for(int i=2; i*i<=a; i++){
		if(a % i == 0){
			printf("%d khong phai so nguyen to", a);
		}
	}
	printf("%d la so nguyen to", a);
	return a;
}
int functionCheck2(int b){
	for(int i=2; i*i<=b; i++){
		if(b % i == 0){
			printf("%d khong phai so nguyen to", b);
		}
	}
	printf("%d la so nguyen to", b);
	return b;
}
int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	functionCheck1(a);
	functionCheck2(b);
	return 0;
}

