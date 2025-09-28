#include <stdio.h>
#include <string.h>

int main() {
    char a[105], b[105];
    scanf("%s %s", a, b);

    if (strcmp(a, b) == 0) {
        printf("%s", a);
    } else {
        printf("1");
    }

    return 0;
}
