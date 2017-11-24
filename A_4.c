#include <stdio.h>

int main (void){

	const char injusticeText[]  = "不正な値が入力されました。";
	const char scoreText[] = "点数を入力してください: ";
	const char judgmentText[] = "判定です。";
	const char a = 'A';
	const char b = 'B';
	const char c = 'C';
	char answer = 'x';
	int score;

	printf("%s", scoreText); fflush(stdout); scanf("%d", &score);
	puts("");

	if(score >= 80 && score <= 100){
		answer = a;
		
	}
	else if(score <= 79 && score >= 60){
		answer = b;
		
	}
	else if(score <= 59 && score >= 0){
		answer = c;
		
	}

	if(answer == 'x'){
		printf("%s", injusticeText);
	}else{
		printf("%c%s", answer, judgmentText);

	}
}