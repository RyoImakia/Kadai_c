#include <stdio.h>

int Sum(int a, int b, int c){

    int sum = a + b + c;

    return sum;
}

int Avarage(int a, int b, int c){

    int avarage = (a + b + c) / 3;
    return avarage;
}

int main(void){

    int ln, science, society, s, a;
    const char Text[] = "の点数を入力してください :";
    const char TextLn[] =  "国語";
    const char TextScience[] =  "理科";
    const char TextSociety[] =  "社会";

    printf("%s%s", TextLn, Text);
    scanf("%d\n", &ln);

    printf("%s%s", TextScience, Text);
    scanf("%d\n", &science);

    printf("%s%s", TextSociety, Text);
    scanf("%d\n", &society);

    s = Sum(ln, science, society);
    a = Avarage(ln, science, society);

    printf("合計: %d, 平均: %d", s, a);

}
