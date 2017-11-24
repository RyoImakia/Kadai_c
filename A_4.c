#include <stdio.h>

int main (void){

	const char injusticeText[]  = "不正な値が入力されました。";
	const char scoreText[] = "点数を入力してください: ";
	const char JudgmentText[] = "判定です。";
	const char a = 'A';
	const char b = 'B';
	const char c = 'c';
	int score;

	printf("%s", scoreText); fflush(stdout); scanf("%d", &score);
	puts("");

	if(score > 100 || score < 0){
		printf("%s\n", injusticeText);
	}
	else if(score >= 80 && score <= 100){
		printf("%c%s\n", a, JudgmentText);
	}
	else if(score <= 79 && score >= 60){
		printf("%c%s\n", b, JudgmentText);
	}
	else{
		printf("%c%s\n", c, JudgmentText);
	}
}