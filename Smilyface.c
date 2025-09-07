#include <stdio.h>

void print_smiley() {
    printf("  *****\n");
    printf(" *     *\n");
    printf("*  O O  *\n");
    printf("*   ^   *\n");
    printf(" * \\___/ *\n");
    printf("  *****\n");
}

int main() {
    printf("Here's a smiley face:\n\n");
    print_smiley();
    return 0;
}