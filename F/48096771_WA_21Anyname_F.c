#include <stdio.h>
#include <string.h>

int isValidName(char *name) {
    int len = strlen(name);
    if (len < 1 || len > 8) {
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (!(name[i] >= 'a' && name[i] <= 'z')) {
            return 0;
        }
    }

    return 1;
}

int isValidExt(char *ext) {
    int len = strlen(ext);
    if (len < 1 || len > 3) {
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (!(ext[i] >= 'a' && ext[i] <= 'z')) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[410000];
    scanf("%s", s);

    int len = strlen(s);
    int isValid = 1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '.') {
            if (i == 0 || i == len - 1) {
                isValid = 0;
                break;
            }

            char name[10], ext[5];
            strncpy(name, s, i);
            name[i] = '\0';
            strcpy(ext, s + i + 1);

            if (!isValidName(name) || !isValidExt(ext)) {
                isValid = 0;
                break;
            }
        }
    }

    if (!isValid) {
        printf("NO\n");
    } else {
        printf("YES\n");
        int start = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] == '.') {
                s[i] = '\0';
                printf("%s\n", s + start);
                start = i + 1;
            }
        }
    }

    return 0;
}
