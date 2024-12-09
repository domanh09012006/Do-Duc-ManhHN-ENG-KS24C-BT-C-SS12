#include<stdio.h>
int giaiThua(int a){
	int giaiThua = 1;
	for(int i=1; i<=a; i++){
		giaiThua *= i;
	}
	printf("Giai thua cua %d la: %d", a, giaiThua);
	return giaiThua;
}
int main(){
	int a;
	printf("Nhap so nguyen lon hon 0: ");
	scanf("%d", &a);
	giaiThua(a);
	return 0;
}
