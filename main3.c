#include <stdio.h>

void generate_combinations(int n, int digits[], int current_digit, int current_level, int current_number) {
    // Base case: print the current number and return if we have reached the maximum level of recursion
    if (current_level == n) {
        printf("%d\n", current_number);
        return;
    }
    // Recursive case: add each digit to the current number and recursively call the function with a higher level
    for (int i = current_digit; i < n; i++) {
        generate_combinations(n, digits, i, current_level + 1, current_number * 10 + digits[i]);
    }
}

int main() {
    int digits[] = {1, 2, 3};
    int n = sizeof(digits) / sizeof(digits[0]);
    for (int i = 1; i <= n; i++) {
        generate_combinations(n, digits, 0, 0, 0);
    }
    return 0;
}
