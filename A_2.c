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

	int unitPrice, quantity, totalPrice, taxIncludedPrice;
	const char unitPriceText[] = "単価を入力してください :";
	const char quantityText[] = "数量を入力してください :";
	const char totalText[] = "金額:";
	const char priceIncludedText[] = "税込金額:";

	printf("%s", unitPriceText);
	fflush(stdout); scanf("%d", &unitPrice);

	printf("%s", quantityText);
	fflush(stdout); scanf("%d", &quantity);

	totalPrice = TotalPrice(unitPrice, quantity);
	taxIncludedPrice = TaxIncludedPrice(unitPrice, quantity);

	printf("%s %d %s %d\n",totalText, totalPrice, priceIncludedText, taxIncludedPrice);
}