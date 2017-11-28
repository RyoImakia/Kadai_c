#include <stdio.h>
#include <stdlib.h>

typedef struct{

	char name[10];
	int  point;


}Man;

void ToPullOutString(Man *man, char *String){

	char comma[] = ",";

	char *commaPosition;
	char StringCopy[10];
	int StringSize;


	commaPosition = strstr(String, comma);
	StringSize = sizeof(String) / sizeof(String[0]);

	//caseSize = "8", commaPosition = "4", 数値はカンマの手前("4")から空白を挟んで二つ右なので最後に"+2"
	strncpy(StringCopy, String + (StringSize - (commaPosition - String) + 2), 1);

	//名前は配列先頭アドレスからカンマの手前("4")まで必要
	strncpy(man->name, String, commaPosition - String);

	man->point = atoi(StringCopy);

}

int main(void){

	Man kino =  {{'\0'}, 0};
	Man kuno = {{'\0'}, 0};

	const char nameText[] = "名前、";
	const char pointText[] = "点数を入力してください :";
	const char winText[] = "の勝ち: ";
	const char drawText[] = "引き分け: ";

	char kinoString[10], kunoString[10];

	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fflush(stdout); fgets(kinoString, sizeof(kinoString), stdin);
	//関数に構造体 "kuno"と標準入力の配列のアドレスを渡す
	ToPullOutString(&kino, &kinoString);


	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fflush(stdout); fgets(kunoString, sizeof(kunoString), stdin);
	//関数に構造体 "kino"と標準入力の配列のアドレスを渡す
	ToPullOutString(&kuno, &kunoString);


	if(kino.point == kuno.point){
		printf("%s\n", drawText);
	}else if(kino.point > kuno.point){
		printf("%s%s\n", kino.name, winText);
	}else{
		printf("%s%s\n", kuno.name, winText);

	}

}