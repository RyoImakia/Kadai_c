#include <stdio.h>

int TotalPrice(int unitPrice, int quantity){

	int totalPrice = unitPrice * quantity;
	return totalPrice;
}

int TaxIncludedPrice(int unitPrice, int quantity){

	int total = unitPrice * quantity;
	int tax = total * 0.08;
	int taxIncludedPrice = total + tax;

	return taxIncludedPrice;
}


int main(void){

	int unitPriceEnter, quantityEnter, returnTotalPrice, returnPriceIncluded;
	const char unitPriceText[] = "単価を入力してください :";
	const char quantityText[] = "数量を入力してください :";
	const char totalText[]        = "金額 :";
	const char priceIncludedText[]        = "税込み金額 :";

	printf("%s", unitPriceText);
	scanf("%d", &unitPriceEnter);

	printf("%s", quantityText);
	scanf("%d", &quantityEnter);

	returnTotalPrice = TotalPrice(unitPriceEnter, quantityEnter);
	returnTaxIncludedPrice = TaxIncludedPrice(unitPriceEnter, quantityEnter);

	printf("%s :%d %s :%d\n",totalText, returnTotalPrice, priceIncludedText, returnTaxIncludedPrice);

}