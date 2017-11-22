#include <stdio.h>


int Sum(int b, int q){

	int sum = b * q;
	return sum;
}

int Tax(int b, int q){
	
	int sum = b * q;
	int tax = sum + (b * 0.08);
	return tax;
}


int main(void){

	int b, q, s, t;
	const char bidText[]      = "単価を入力してください";
	const char quantityText[] = "数量を入力してください";
	const char sumText        = "合計";
	const char taxText        = "税込み金額";

	printf("%s", bidText);
	scanf("%d\n", &b);

	printf("%s", quantityText);
    scanf("%d\n", &q);

	s = Sum(b, q);
	t = Tax(b, q);
	printf("%s :%d, %s :%d",sumText, s, taxText, t);

}