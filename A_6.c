#include <stdio.h>

int main(void){

	const char categoryText[] = "区分";
	const char inputNumberOfPeopleText[] = "の人数を入力してください: ";
	const char toltalPriceText[] = "金額: ";

	const int threeCategoryPrices[3] = {800, 1000, 1500};

	int threeCategorysInput[3];
	int sumPrice = 0;
	int count;

	for(count = 0; count < 3; count++){

		printf("%s%d%s", categoryText ,count + 1 ,inputNumberOfPeopleText); fflush(stdout); scanf("%d", &threeCategorysInput[count]);
		sumPrice += threeCategoryPrices[count] * threeCategorysInput[count];
	}

	printf("%s%d\n", toltalPriceText, sumPrice);
}
