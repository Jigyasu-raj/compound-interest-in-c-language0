#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double p,r,t, A,CI;
    printf("Enter Principal  ");
    scanf("%lf",&p);
    printf("Enter Rate  ");
    scanf("%lf",&r);
    printf("Enter Time  ");
    scanf("%lf",&t);
    A=p*(pow((1+r/100),t));
    CI=A-p;
    printf("Amount=  %lf\n",A);
    printf("Compound interest   =%lf",CI);
    return 0;
}
  