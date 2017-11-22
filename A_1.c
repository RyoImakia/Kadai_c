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
    const char strText[] = "の点数を入力してください :";
    const char subjectTextLn[] =  "国語";
    const char subjectTextScience[] =  "理科";
    const char subjectTextSociety[] =  "社会";

    printf("%s%s",subjectTextLn, strText);
    fflush(stdout); scanf("%d\n", &subjectLn);

    printf("%s%s",subjectTextScience , strText);
    scanf("%d\n", &subjectScience);

    printf("%s%s",subjectTextSociety, strText);
    scanf("%d\n", &subjectSociety);

    subjectSum = Sum(subjectLn ,subjectScience ,subjectSociety);
    subjectAvarage = Avarage(subjectLn, subjectScience, subjectSociety);

    printf("合計: %d, 平均: %d",subjectSum ,subjectAvarage);

}
