#include <stdio.h>
#include <stdlib.h>

typedef struct{

	char name[10];
	int  point;

}man;


void ParserArray(man *tempKuno, man *tempKino , char *kunoArray, char *kinoArray){

	char comma[] = ",";

	char *kunoCommaPosition, *kinoCommaPosition;
	char kunoCp[10], kinoCp[10];
	int kunoArraySize, kinoArraySize;

	//構造体kuno

	kunoCommaPosition = strstr(kunoArray, comma);
	kunoArraySize = sizeof(kunoArray) / sizeof(kunoArray[0]);

	//kunoArraySize = "8", kunoCommaPosition = "4", 数値はカンマの手前("4")から空白を挟んで二つ右なので最後に"+2"
	strncpy(kunoCp, kunoArray + (kunoArraySize - (kunoCommaPosition - kunoArray) + 2), 1);

	//名前は配列先頭アドレスからカンマの手前("4")まで必要
	strncpy(tempKuno->name, kunoArray, kunoCommaPosition - kunoArray);

	tempKuno->point = atoi(kunoCp);

	//構造体kino

	kinoCommaPosition = strstr(kinoArray, comma);
	kinoArraySize = sizeof(kinoArray) / sizeof(kinoArray[0]);

	//kinoArraySize = "8", kinoCommaPosition = "4", 数値はカンマの手前("4")から空白を挟んで二つ右なので最後に"+2"
	strncpy(kinoCp, kinoArray + (kinoArraySize - (kinoCommaPosition - kinoArray) + 2), 1);

	//名前は配列先頭アドレスからカンマの手前("4")まで必要
	strncpy(tempKino->name, kinoArray, kinoCommaPosition - kinoArray);

	tempKino->point = atoi(kinoCp);

}

int main(void){

	man kino, kuno = {{'\0'}, 0};

	const char nameText[] = "名前、";
	const char pointText[] = "点数を入力してください :";
	const char winText[] = "の勝ち";
	const char drawText[] = "引き分け";

	char kinoArray[10], kunoArray[10];

	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fgets(kinoArray, sizeof(kinoArray), stdin);

	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fgets(kunoArray, sizeof(kunoArray), stdin);

	//関数に構造体 "kino","kuno"と標準入力の配列のアドレスを渡す

	ParserArray(&kuno, &kino, &kunoArray, &kinoArray);


	if(kino.point == kuno.point){
		printf("%s\n", drawText);
	}else if(kino.point > kuno.point){
		printf("%s%s\n", kino.name, winText);
	}else{
		printf("%s%s\n", kuno.name, winText);

	}

}