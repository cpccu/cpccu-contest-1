#include <stdio.h>
#include <string.h>

int isValidFile(char *name) {
    int dotCount = 0;
    int len = strlen(name);

    if (len < 2 || len > 12) {
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (name[i] == '.') {
            dotCount++;
            if (dotCount > 1 || i == 0 || i == len - 1) {
                return 0;
            }
        } else if (!(name[i] >= 'a' && name[i] <= 'z')) {
            return 0;
        }
    }

    return 1;
}

void printFileList(char *s) {
    int len = strlen(s);
    int start = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '.') {
            char file[13];
            strncpy(file, s + start, i - start + 1);
            file[i - start + 1] = '\0';
            if (!isValidFile(file)) {
                printf("NO\n");
                return;
            }
            printf("%s\n", file);
            start = i + 1;
        }
    }

    if (start < len) {
        char file[13];
        strncpy(file, s + start, len - start);
        file[len - start] = '\0';
        if (!isValidFile(file)) {
            printf("NO\n");
            return;
        }
        printf("%s\n", file);
    }
}

int main() {
    char s[400001];
    scanf("%s", s);

    int len = strlen(s);
    int dotCount = 0;
    
    for (int i = 0; i < len; i++) {
        if (s[i] == '.') {
            dotCount++;
        }
    }

    if (dotCount > 0 && s[0] != '.' && s[len - 1] != '.' && isValidFile(s)) {
        printf("YES\n");
        printFileList(s);
    } else {
        printf("NO\n");
    }

    return 0;
}
