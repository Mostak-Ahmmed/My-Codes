#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[30], ch;
    int state = 0, i = 0;

    printf("Enter a string:");
    fgets(s, 30, stdin);

    printf("String is: %s\n", s);

    while (s[i] != '\0') {
        switch (state) {
            case 0:
                ch = s[i++];
                if (ch == 'a')
                    state = 1;
                else
                    state = 4;
                break;
            case 1:
                ch = s[i++];
                if (ch == 'a')
                    state = 1;
                else if (ch == 'b')
                    state = 2;
                else
                    state = 4;
                break;
            case 2:
                ch = s[i++];
                if (ch == 'b')
                    state = 2;
                else if (ch == 'c')
                    state = 3;
                else
                    state = 4;
                break;
            case 3:
                ch = s[i++];
                if (ch == 'c')
                    state = 3;
                else
                    state = 4;
                break;
            case 4:
                ch = s[i++];
                printf("\nNot Matched");
                break;
        }
    }

    if (state == 3 || state == 2)
        printf("String Pattern Matched: %s", s);
    else
        printf("String is not Matched: %s\n", s);

    return 0;
}
