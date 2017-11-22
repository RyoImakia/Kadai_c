#include <stdio.h>

int TotalPrice(int b, int n){

	int totalPrice = b * n;
	return total;
}

int TaxIncludedPrice(int b, int q){

	int total = b * q;
	int tax = total * 0.08;
	int taxIncludedPrice = sum + tax;

	return sumTax;
}


int main(void){

	int bidEnter, numberEnter, returnTotalPrice, returnPriceIncluded;
	const char bidText[] = "単価を入力してください :";
	const char numberText[] = "数量を入力してください :";
	const char totalText[]        = "金額 :";
	const char priceIncludedText[]        = "税込み金額 :";

	printf("%s", bidText);
	scanf("%d", &bidEnter);

	printf("%s", numberText);
	scanf("%d", &numberEnter);

	returnTotalPrice = TotalPrice(b, q);
	returnTaxIncludedPrice = TaxIncludedPrice(b, q);

	printf("%s :%d %s :%d\n",totalText, returnTotalPrice, priceIncludedText, returnTaxIncludedPrice);

}