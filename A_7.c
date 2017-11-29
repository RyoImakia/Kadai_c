#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

	int section;
	int unitPrice;
	int quantity;

}DiscountRateSummary;

void ParseString(DiscountRateSummary *value, char *inputString){

	char *tempFirstCommaPosition;
	char *temSecondCommaPosition;
	char comma[] = ",";
	int commaAndBlankSkip = 2;
	char section[5] = {'\0'};
	char unitPrice[10] = {'\0'};
	char quantity[5] = {'\0'};;
	char afterInputString[15] = {'\0'};
	int count = 0;
	int firstCommaPosition;
	int secondCommaPosition;


	//配列の大きさを取得
	while(inputString[count] != '\0'){
		count++;
	}


	int inputStringElementCount = sizeof(inputString) / sizeof(inputString[0]);
	tempFirstCommaPosition = strstr(inputString, comma);


	//一つ目の値 = 区分取得
	strncpy(section, inputString, 1);
	value->section = atoi(section);


	//一つ目のカンマより右側をafterInputStringに格納
	firstCommaPosition = tempFirstCommaPosition - inputString;
	strncpy(afterInputString, inputString + firstCommaPosition + commaAndBlankSkip, (count - commaAndBlankSkip - 1) - firstCommaPosition);


	//二つ目のカンマの位置を取得
	temSecondCommaPosition = strstr(afterInputString, comma);
	secondCommaPosition = temSecondCommaPosition - afterInputString;


	//二つ目の値 = 単価を取得 = "unitPrice"
	strncpy(unitPrice, afterInputString, secondCommaPosition );
	value->unitPrice = atoi(unitPrice);


	//三つ目の値 = 数量を取得 "quantity"
	strncpy(quantity, inputString + (firstCommaPosition + secondCommaPosition) + (commaAndBlankSkip * 2), 1);
	value->quantity = atoi(quantity);
}

int DiscountRateCalculation(DiscountRateSummary *result){

	int afterDdiscountPrice;
	double discountRateOne = 0.05;
	double discountRateTwo = 0.1;
	double discountRateThree = 0.15;

	switch(result->section){

	 case 1:
		    afterDdiscountPrice = result->quantity * (result->unitPrice - (result->unitPrice * discountRateOne));
		    break;

	 case 2:
		   afterDdiscountPrice = result->quantity * (result->unitPrice - (result->unitPrice * discountRateOne));
		    break;

	 case 3:
		   afterDdiscountPrice = result->quantity * (result->unitPrice - (result->unitPrice * discountRateOne));
		    break;

	 default:
		   afterDdiscountPrice = result->unitPrice * result->quantity;
		    break;

	}
	return afterDdiscountPrice;
}

int main(void){

	DiscountRateSummary discountRateSummary = {0, 0, 0};

	char inputString[20];
	const char threeItemOutputText[] = "区分, 単価, 数量を入力してください: ";
	const char priceText[] = "金額: ";

	int resultPrice;

	printf("%s", threeItemOutputText);
	fflush(stdout); fgets(inputString, sizeof(inputString), stdin);

	ParseString(&discountRateSummary, inputString);

	resultPrice = DiscountRateCalculation(&discountRateSummary);

	printf("%s%d\n", priceText, resultPrice);
}
