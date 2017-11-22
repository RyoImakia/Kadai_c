#include <stdio.h>

int main(void){

	int childNum, adultNum;
	const int childPrice = 800;
	const int adultPrice = 1500;
	const char childPriceText[] = "子供の人数を入力してください";
	const char adultPriceText[] = "大人の人数を入力してください";
	const char priceTtext[] = "金額";

	printf("%s", childPriceText); scanf("%d", &childNum);
	printf("%s", adultPriceText); scanf("%d", &adultNum);

	int sum = (cn * childPrice) + (an * adultPrice);
	printf("%s: %d\n", priceTtext, sum);
}
