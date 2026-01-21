#include <stdio.h>
int main() {
    float base,hraPer,daPer,taPer;
    float hra,da,ta,gross;
    printf("Enter Base Salary: ");
    scanf("%f",&base);
    printf("Enter HRA Percentage: ");
    scanf("%f",&hraPer);
    printf("Enter DA Percentage: ");
    scanf("%f",&daPer);
    printf("Enter TA Percentage: ");
    scanf("%f",&taPer);
    hra=(base*hraPer)/100;
    da =(base*daPer)/100;
    ta=(base * taPer)/100;
    gross=base+hra+da+ta;
    printf("Gross Salary: Rs. %.2f",gross);
}

