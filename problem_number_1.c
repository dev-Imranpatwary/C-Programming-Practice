
#include<stdio.h>
int main() {
    int units, total_bill, total_bill_1, total_bill_2, total_bill_3;

    printf("Enter units: ");
    scanf("%d", &units);

    if(units <= 100) {
        total_bill_1 = units * 5;

        printf("First %d units = %d * 5 = %d\n", units, units, total_bill_1);
    }
    else if(units <= 200) {
        total_bill_1 = 100 * 5;
        total_bill_2 = (units - 100) * 7;
        total_bill = total_bill_1 + total_bill_2;

        printf("First 100 units = 100 * 5 = %d\n", total_bill_1);
        printf("Next %d units = %d * 7 = %d\n", units - 100, units - 100, total_bill_2);
    }
    else {
        total_bill_1 = 100 * 5;
        total_bill_2 = 100 * 7;
        total_bill_3 = (units - 200) * 10;
        total_bill = total_bill_1 + total_bill_2 + total_bill_3;

        printf("First 100 units = 100 * 5 = %d\n", total_bill_1);
        printf("Next 100 units = 100 * 7 = %d\n", total_bill_2);
        printf("Remaining %d = %d * 10 = %d\n", units - 200, units - 200, total_bill_3);
    }

    printf("Total = %d Tk\n", total_bill);

    return 0;
}
