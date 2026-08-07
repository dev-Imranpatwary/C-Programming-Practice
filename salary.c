
#include <stdio.h>

int main() {
    int employee_number, hours_number;
    float amount, salary;

    // ইনপুট গ্রহণ
    scanf("%d %d %f", &employee_number, &hours_number, &amount);

    // বেতন হিসাব
    salary = hours_number * amount;

    // আউটপুট প্রিন্ট
    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
