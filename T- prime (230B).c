#include <stdio.h>
#include <math.h>

int is_prime(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        long long x;
        scanf("%lld", &x);

        if (x == 1) {
            printf("NO\n");
            continue;
        }

        long long root = (long long)(sqrt((double)x) + 0.5);

        if (root * root != x) {
            printf("NO\n");
            continue;
        }

        if (is_prime(root))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
