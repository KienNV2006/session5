#include <stdio.h>
int main(){
	int n;
	int sum=0;
	printf("Moi ban nhap mot so nguyen: ");
	scanf("%d", &n);
	if(n>0){
		for(int i=1; i<=n; i++){
			sum+=i;
		}
		printf("Tong cua cac so tu 1 den n la: %d", sum);
	}
	return 0;
}