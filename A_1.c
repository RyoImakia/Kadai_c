#include <stdio.h>

int Sum(int a, int b, int c){

    int sum = a+b+c;

    return sum;
}

int Avarage(int a, int b,int c){

    int avarage = (a+b+c)/3;
    return avarage;
}

int main(void){

    int kokugo,rika,syakai,s,a;
    const char str[] = "‚Ì“_”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :";
    const char subject_1[] =  "‘Œê";
    const char subject_2[] =  "—‰È";
    const char subject_3[] =  "Ğ‰ï";

    printf("%s%s",subject_1, str);
    fflush(stdout); scanf("%d\n", &kokugo);

    printf("%s%s",subject_2, str);
    scanf("%d\n", &rika);

    printf("%s%s",subject_3, str);
    scanf("%d\n", &syakai);

    s = Sum(kokugo,rika,syakai);
    a = Avarage(kokugo, rika, syakai);

    printf("‡Œv:%d ",s);
    printf("•½‹Ï;%d",a);
}