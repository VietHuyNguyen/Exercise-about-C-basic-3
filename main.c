#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void InforBMI(float BMI);
int main()
{
    float met,kilo;
    printf("Nhap vao can nang(kilograms) va chieu cao(meters)\n");
    scanf("%f", &met);
    scanf("%f", &kilo);
    if(met>0 && kilo >0)
    {
    float BMI=met/(kilo*kilo);
    InforBMI(BMI);
    }
    else
        printf("Chay cc. May tang hinh ah?");
    return 0;
}
void InforBMI(float BMI)
{
    printf("%f\n", BMI);
    if(BMI<15)
        printf("Very severely underweight");
    else if(15<=BMI&&BMI<16)
        printf("Severely underweight");
    else if(16<=BMI&&BMI<18.5)
        printf("Underweight");
    else if(18.5<=BMI&&BMI<25)
        printf("Normal (healthy weight)");
    else if(25<=BMI&&BMI<30)
        printf("Overweight");
    else if(30<=BMI&&BMI<35)
        printf("Obese Class I (Moderately obese)");
    else if(35<=BMI&&BMI<40)
        printf("Obese Class II (Severely obese)");
    else
        printf("Obese Class III (Very severely obese)");
}
