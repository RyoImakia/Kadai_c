#include <stdio.h>

int totalPrice(int b, int q){

	int total = b * q;
	return total;
}

int priceIncluded(int b, int q){

	int total = b * q;
	int tax = total * 0.08;
	int priceInciuded = sum + tax;

	return sumTax;
}


int main(void){

	int bidEnter, quantityEnter, returnTotal, returnPriceIncluded;
	const char bidText[]      = "単価を入力してください :";
	const char quantityText[] = "数量を入力してください :";
	const char totalText[]        = "金額 :";
	const char priceIncludedText[]        = "税込み金額 :";

	printf("%s", bidText);
	scanf("%d", &bidEnter);

	printf("%s", quantityText);
	scanf("%d", &quantityEnter);

	returnTotal = totalPrice(b, q);
	returnPriceIncluded = priceIncluded(b, q);

	printf("%s :%d %s :%d\n",totalText, returnTotal, priceIncludedText, returnPriceIncluded);

}