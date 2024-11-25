#include <stdio.h>
int main(){
	float a,b;
	int n;
	printf("Moi ban nhap 2 so ");
	while(1){
	scanf("%f%f", &a, &b);
	printf("CALCULATOR\n\n");
	printf("1.Tong hai so\n");
	printf("2.Hieu hai so\n");
	printf("3.Tich hai so\n");
	printf("4.Thuong hai so\n");
	printf("5.Thoat\n\n");
	printf("Moi ban nhap lua chon cua ban: ");
	scanf("%d", &n);
	switch (n){
		case 1:
			printf("Tong cua %f va %f la: %.2f", a, b, a+b);
			break;
		case 2:
			printf("Hieu cua %f va %f la: %.2f", a, b, a-b);
			break;
		case 3:
			printf("Tich cua %f va %f la: %f", a, b, a*b);
			break;
		case 4:
			if(b!=0){
				printf("Thuong cua %f va %f la: %.2f", a, b, a/b);
			}else{
				printf("khong xac dinh");
			}
			break;
		case 5:
			printf("Thoat");
			return 0;
			
	default:
		printf("Moi ban nhap lai lua chon cua minh");
	}
	}
	
	
}