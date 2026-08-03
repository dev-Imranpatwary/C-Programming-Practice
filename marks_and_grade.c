#include <stdio.h>

int main()
{
    int marks1, marks2;
    char grade1, grade2;
    printf("Enter marks for friend 1: ");
    scanf("%d", &marks1);
    printf("Enter grade for friend 1: ");
    scanf(" %c", &grade1); // %c এর আগে স্পেস দেওয়া হয়েছে বাফার ক্লিয়ার করার জন্য
    printf("Enter marks for friend 2: ");
    scanf("%d", &marks2);
    printf("Enter grade for friend 2: ");
    scanf(" %c", &grade2); // %c এর আগে স্পেস দেওয়া হয়েছে
    printf("\nFriend\tMarks\tGrade\n");
    printf("1\t%d\t%c\n", marks1, grade1);
    printf("2\t%d\t%c\n", marks2, grade2);
    return 0;
}
