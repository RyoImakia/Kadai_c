#include <stdio.h>

int main(void){

	const char categoryOne[] = "区分1の人数を入力してください: ";
	const char categoryTwo[] = "区分2の人数を入力してください: ";
	const char categoryThree[] = "区分3の人数を入力してください: ";
	const char priceText[] = "金額: ";

	const int categoryOnePrice = 800;
	const int categoryTwoPrice = 1000;
	const int categoryThreePrice = 1500;

	int oneWard, twoWard, threeWard;
	int sum = 0;

	printf("%s", categoryOne); fflush(stdout); scanf("%d", &oneWard);
	printf("%s", categoryTwo); fflush(stdout); scanf("%d", &twoWard);
	printf("%s", categoryThree); fflush(stdout); scanf("%d", &threeWard);

	sum += (categoryOnePrice * oneWard) + (categoryTwoPrice * twoWard) + (categoryThreePrice * threeWard);

	printf("%s%d\n", priceText, sum);
}