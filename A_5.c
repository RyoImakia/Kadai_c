#include <stdio.h>
#include <stdlib.h>

typedef struct{

	char name[10];
	int  point;

}Man;

void ParserString(char *inputString, Man *result){

	char comma[] = ",";
	char *commaPosition;
	char tensu[10];
	const int commaAndBlankSkip = 2;

	commaPosition = strstr(inputString, comma);

	//カンマの位置から二つ右なので最後に"+2"
	strncpy(tensu, commaPosition + commaAndBlankSkip, 1);

	//名前は配列先頭アドレスからカンマの手前("4")まで必要
	strncpy(result->name, inputString, commaPosition - inputString);
	result->point = atoi(tensu);

}

int main(void){

	Man kino =  {{'\0'}, 0};
	Man kuno = {{'\0'}, 0};

	const char nameText[] = "名前、";
	const char pointText[] = "点数を入力してください :";
	const char winText[] = "の勝ち: ";
	const char drawText[] = "引き分け: ";

	char inputStringKino[10] = {'\0'};
	char inputStringKuno[10] = {'\0'};

	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fflush(stdout); fgets(inputStringKino, sizeof(inputStringKino), stdin);
	//関数に構造体 "kuno"と標準入力の配列のアドレスを渡す
	ParserString(&inputStringKino, &kino);


	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fflush(stdout); fgets(inputStringKuno, sizeof(inputStringKuno), stdin);
	//関数に構造体 "kino"と標準入力の配列のアドレスを渡す
	ParserString(&inputStringKuno, &kuno);


	if(kino.point == kuno.point){
		printf("%s\n", drawText);
	}else if(kino.point > kuno.point){
		printf("%s%s\n", kino.name, winText);
	}else{
		printf("%s%s\n", kuno.name, winText);

	}

}
