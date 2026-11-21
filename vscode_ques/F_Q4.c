#include <stdio.h>

int isPerfectSquare(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }

    int left = 1, right = n;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid > n / mid) {
            right = mid - 1;
            continue;
        }
        if (mid == n / mid && n % mid == 0) {
            return 1;
        }
        left = mid + 1;
    }
    return 0;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", isPerfectSquare(n));
    return 0;
}
