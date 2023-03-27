#include <stdio.h>

void generate_combinations(int n, int digits[], int index) {
    if (index == n) {
        // Base case: all digits have been chosen, so print the combination
        for (int i = 0; i < n; i++) {
            printf("%d", digits[i]);
        }
        printf("\n");
        return;
    }
    // Recursive case: choose the next digit and recurse
    for (int i = 1; i <= 3; i++) {
        digits[index] = i;
        generate_combinations(n, digits, index + 1);
    }
}

int main() {
    int digits[3];
    generate_combinations(3, digits, 0);
    return 0;
}
