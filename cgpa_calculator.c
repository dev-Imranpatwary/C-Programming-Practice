#include<stdio.h>
int main()
{
    float ics,bds,math,eng;
    float ics_credit,bds_credit,math_credit,eng_credit;
    float total_credit,cgpa,total_cgpa;

    //1.credit input for 4 subject
    printf("Enter credits for Ics,Bds,Math,Eng: ");
    scanf("%f %f %f %f",&ics_credit,&bds_credit,&math_credit,&eng_credit);

    //2.Input Gpa for 4 subjects
    printf("Enter gpa for Ics,Bds,Math,Eng: ");
    scanf("%f %f %f %f",&ics,&bds,&math,&eng);

    //3.Total credit calculation
    total_credit=ics_credit + bds_credit + math_credit + eng_credit;

    //4.Calculation of total cgpa point
    cgpa=(ics*ics_credit)+(bds*bds_credit)+(math*math_credit)+(eng*eng_credit);

    //5.Calculation of final cgpa
    total_cgpa=cgpa/total_credit;

    //print result
    printf("Total Cgpa:%.2f",total_cgpa);
    return 0;

}
