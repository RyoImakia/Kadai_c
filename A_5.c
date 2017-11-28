#include <stdio.h>
#include <stdlib.h>

typedef struct{

	char name[10];
	int  point;


}Man;

void CaseExcerpt(Man *proxyStructure, char *proxyCase){

	char comma[] = ",";

	char *commaPosition;
	char caseCopy[10];
	int caseSize;


	commaPosition = strstr(proxyCase, comma);
	caseSize = sizeof(proxyCase) / sizeof(proxyCase[0]);

	//caseSize = "8", commaPosition = "4", 数値はカンマの手前("4")から空白を挟んで二つ右なので最後に"+2"
	strncpy(caseCopy, proxyCase + (caseSize - (commaPosition - proxyCase) + 2), 1);

	//名前は配列先頭アドレスからカンマの手前("4")まで必要
	strncpy(proxyStructure->name, proxyCase, commaPosition - proxyCase);

	proxyStructure->point = atoi(caseCopy);

}

int main(void){

	Man kino, kuno = {{'\0'}, 0};

	const char nameText[] = "名前、";
	const char pointText[] = "点数を入力してください :";
	const char winText[] = "の勝ち: ";
	const char drawText[] = "引き分け: ";

	char kinoCase[10], kunoCase[10];

	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fflush(stdout); fgets(kinoCase, sizeof(kinoCase), stdin);
	//関数に構造体 "kuno"と標準入力の配列のアドレスを渡す
	CaseExcerpt(&kino, &kinoCase);


	//テキスト表示と標準入力の実行
	printf("%s%s", nameText, pointText);
	fflush(stdout); fgets(kunoCase, sizeof(kunoCase), stdin);
	//関数に構造体 "kino"と標準入力の配列のアドレスを渡す
	CaseExcerpt(&kuno, &kunoCase);


	if(kino.point == kuno.point){
		printf("%s\n", drawText);
	}else if(kino.point > kuno.point){
		printf("%s%s\n", kino.name, winText);
	}else{
		printf("%s%s\n", kuno.name, winText);

	}

}
