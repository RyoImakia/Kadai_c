##include <stdio.h>

int Sum(int a, int b, int c){

    int sumSub = a+b+c;

    return sumSub;
}

int Avarage(int a, int b,int c){

    int avarageSub = (a+b+c)/3;
    return avarageSub;
}

int main(void){

    int subjectLn, subjectScience ,subjectSociety ,subjectSum ,subjectAvarage;
    const char strText[] = "‚Ì“_”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ :";
    const char subjectTextLn[] =  "‘Œê";
    const char subjectTextScience[] =  "—‰È";
    const char subjectTextSociety[] =  "Ğ‰ï";

    printf("%s%s",subjectTextLn, strText);
    fflush(stdout); scanf("%d\n", &subjectLn);

    printf("%s%s",subjectTextScience , strText);
    scanf("%d\n", &subjectScience);

    printf("%s%s",subjectTextSociety, strText);
    scanf("%d\n", &subjectSociety);

    subjectSum = Sum(subjectLn ,subjectScience ,subjectSociety);
    subjectAvarage = Avarage(subjectLn, subjectScience, subjectSociety);

    printf("‡Œv: %d, ",subjectSum);
    printf("•½‹Ï: %d",subjectAvarage);
}