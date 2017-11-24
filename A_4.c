#include <stdio.h>

int main (void){

	const char injusticeText[]  = "不正な値が入力されました。";
	const char scoreText[] = "点数を入力してください: ";
	const char judgmentText[] = "判定です。";
	const char a = 'A';
	const char b = 'B';
	const char c = 'C';
	int score;

	printf("%s", scoreText); fflush(stdout); scanf("%d", &score);
	puts("");

	if(score >= 80 && score <= 100){
		printf("%c%s", a, judgmentText);

	}
	else if(score <= 79 && score >= 60){
		printf("%c%s", b, judgmentText);

	}
	else if(score <= 59 && score >= 0){
		printf("%c%s", c, judgmentText);

	}else{
		printf("%s", injusticeText);
	}

}