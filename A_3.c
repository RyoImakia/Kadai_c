#include <stdio.h>

int main(void){

	int childNum, adultNum;
	const int childPrice = 800;
	const int adultPrice = 1500;
	const char childPriceText[] = "子供の人数を入力してください: ";
	const char adultPriceText[] = "大人の人数を入力してください: ";
	const char priceTtext[] = "金額";

	printf("%s", childPriceText); fflush(stdout); scanf("%d", &childNum);
	printf("%s", adultPriceText); fflush(stdout); scanf("%d", &adultNum);

	int sum = (childNum * childPrice) + (adultNum * adultPrice);
	printf("%s: %d\n", priceTtext, sum);
}
