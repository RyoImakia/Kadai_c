#include <stdio.h>

int main(void){

	const char categoryTextOne[] = "区分1の人数を入力してください: ";
	const char categoryTextTwo[] = "区分2の人数を入力してください: ";
	const char categoryTextThree[] = "区分3の人数を入力してください: ";
	const char priceText[] = "金額: ";

	const int threeCategoryPrice[3] = {800, 1000, 1500};

	int threeCategoryInput[3];
	int sumPrice = 0;

	printf("%s", categoryTextOne); fflush(stdout); scanf("%d", &threeCategoryInput[0]);
	printf("%s", categoryTextTwo); fflush(stdout); scanf("%d", &threeCategoryInput[1]);
	printf("%s", categoryTextThree); fflush(stdout); scanf("%d", &threeCategoryInput[2]);

	sumPrice += (threeCategoryPrice[0] * threeCategoryInput[0]) + (threeCategoryPrice[1] * threeCategoryInput[1]) + (threeCategoryPrice[2] * threeCategoryInput[2]);

	printf("%s%d\n", priceText, sumPrice);
}