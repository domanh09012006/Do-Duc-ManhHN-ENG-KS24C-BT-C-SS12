#include<stdio.h> 
int functionCheck1(int a){
	int sum = 0;
	for(int i=1; i<a; i++){
		if(a % i == 0){
			sum += i;
		}
	}
	if(sum == a){
	printf("%d la so hoan hao", a);
	}else{
		printf("%d khong phai la so hoan hao", a);
	}
	return a;
}
int functionCheck2(int b){
	int sum=0;
	for(int i=2; i<b; i++){
		if(b % i == 0){
			sum += i; 
		}
	}
	if(sum == b){
	printf("%d la so hoan hao", b);
	}else{
		printf("%d khong phai la so hoan hao", b);
	}
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

