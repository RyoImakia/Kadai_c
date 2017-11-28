#include <stdio.h>

int main(void){

	const char classIfiCationOne[] = "区分1の人数を入力してください: ";
	const char classIfiCationTwo[] = "区分2の人数を入力してください: ";
	const char classIfiCationThree[] = "区分3の人数を入力してください: ";
	const char priceText[] = "金額: ";

	const int classIfiCationOnePrice = 800;
	const int classIfiCationTwoPrice = 1000;
	const int classIfiCationThreePrice = 1500;

	int oneWard, twoWard, threeWard;
	int sum = 0;

	printf("%s", classIfiCationOne); scanf("%d", &oneWard);
	printf("%s", classIfiCationTwo); scanf("%d", &twoWard);
	printf("%s", classIfiCationThree); scanf("%d", &threeWard);

	sum += (classIfiCationOnePrice * oneWard) + (classIfiCationTwoPrice * twoWard) + (classIfiCationThreePrice * threeWard);

	printf("%s%d\n", priceText, sum);
}
