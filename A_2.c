#include <stdio.h>

int CalculationSum(int b, int q){

	int sum = b * q;
	return sum;
}

int CalculationTax(int b, int q){

	int sum = b * q;
	int tax = sum * 0.08;

	return tax;
}


int main(void){

	int b, q, s, t;
	const char bidText[]      = "単価を入力してください";
	const char quantityText[] = "数量を入力してください";
	const char sumText[]        = "合計";
	const char taxText[]        = "税込み金額";

	printf("%s", bidText);
	scanf("%d", &b);

	printf("%s", quantityText);
	scanf("%d", &q);

	s = CalculationSum(b, q);
	t = CalculationTax(b, q);

	printf("%s :%d %s :%d\n",sumText, s, taxText, s + t);

}