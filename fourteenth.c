
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int v = 0, c = 0, d = 0, s = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            v++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            c++;
        }
        else if (ch >= '0' && ch <= '9') {
            d++;
        }
        else if (ch == ' ') {
            s++;
        }
    }

    printf("%d %d %d %d", v, c, d, s);

    return 0;
}
