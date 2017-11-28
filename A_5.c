#include <stdio.h>
#include <stdlib.h>

typedef struct{

	char name[10];
	int  point;

}man;

int ParserKino(man *tempKino, char *kinoArray){

	char *kinoCommaPosition;
	char kinoCp[10];
	int kinoArraySize;
	char comma[] = ",";

	kinoCommaPosition = strstr(kinoArray, comma);
	kinoArraySize = sizeof(kinoArray) / sizeof(kinoArray[0]);

	//kinoArraySize = "8", kinoCommaPosition = "4", 数値はカンマの手前("4")から空白を挟んで二つ右なので最後に"+2"
	strncpy(kinoCp, kinoArray + (kinoArraySize - (kinoCommaPosition - kinoArray) + 2), 1);

	//名前は配列先頭アドレスからカンマの手前("4")まで必要
	strncpy(tempKino->name, kinoArray, kinoCommaPosition - kinoArray);

	tempKino->point = atoi(kinoCp);

	return 0;
}

int ParserKuno(man *tempKuno , char *kunoArray){

	char *kunoCommaPosition;
	char kunoCp[10];
	int kunoArraySize;
	char comma[] = ",";

	kunoCommaPosition = strstr(kunoArray, comma);
	kunoArraySize = sizeof(kunoArray) / sizeof(kunoArray[0]);

	//kinoArraySize = "8", kinoCommaPosition = "4", 数値はカンマの手前("4")から空白を挟んで二つ右なので最後に"+2"
	strncpy(kunoCp, kunoArray + (kunoArraySize - (kunoCommaPosition - kunoArray) + 2), 1);

	//名前は配列先頭アドレスからカンマの手前("4")まで必要
	strncpy(tempKuno->name, kunoArray, kunoCommaPosition - kunoArray);

	tempKuno->point = atoi(kunoCp);
	return 0;
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
	fflush(stdout); fgets(kinoArray, sizeof(kinoArray), stdin);

	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fflush(stdout); fgets(kunoArray, sizeof(kunoArray), stdin);

	//関数に構造体 "kino","kuno"と標準入力の配列のアドレスを渡す
	ParserKino(&kino, &kinoArray);
	ParserKuno(&kuno, &kunoArray);


	if(kino.point == kuno.point){
		printf("%s\n", drawText);
	}else if(kino.point > kuno.point){
		printf("%s%s\n", kino.name, winText);
	}else{
		printf("%s%s\n", kuno.name, winText);

	}

}
