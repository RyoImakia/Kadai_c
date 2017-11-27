#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{

	char name[10];
	int point;

}man;

int main(void){

	man kino, kuno = {'\0', 0};

	const char nameText[] = "名前、";
	const char pointText[] = "点数を入力してください :";
	const char winText[] = "の勝ち";
	const char drawText[] = "引き分け";

	char kinoArray[10], kinoCp[10] ;
	char kunoArray[10], kunoCp[10] ;
	char kanma[] = ",";
	int kinoArraySize, kunoArraySize;
	char *kinoKanmaPosition, *kunoKanmaPosition;

	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fgets(kinoArray, sizeof(kinoArray), stdin);

	//構造体 "kino"
	kinoKanmaPosition = strstr(kinoArray, kanma);
	kinoArraySize = sizeof(kinoArray) / sizeof(kinoArray[0]);

	strncpy(kinoCp, kinoArray + (kinoArraySize - (kinoKanmaPosition - kinoArray)), 1);
	strncpy(kino.name, kinoArray, kinoKanmaPosition - kinoArray);

	kino.point = atoi(kinoCp);


	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fgets(kunoArray, sizeof(kunoArray), stdin);

	//構造体 "kuno"
	kunoKanmaPosition = strstr(kunoArray, kanma);
	kunoArraySize = sizeof(kunoArray) / sizeof(kunoArray[0]);


	strncpy(kunoCp, kunoArray + (kunoArraySize - (kunoKanmaPosition - kunoArray)), 1);
	strncpy(kuno.name, kunoArray, kunoKanmaPosition - kunoArray);

	kuno.point = atoi(kunoCp);


	if(kino.point == kuno.point){
		printf("%s\n", drawText);
	}else if(kino.point > kuno.point){
		printf("%s%s\n", kino.name, winText);
	}else{
		printf("%s%s\n", kuno.name, winText);

	}

}