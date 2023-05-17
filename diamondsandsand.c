#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char str[1001];
        scanf("%s", str);
        int len = strlen(str);
        int count = 0;

        for (int j = 0; j < len; j++) {
            if (str[j] == '<' && str[j+1] != '>') {
                while (str[j] != '>')
                    j++;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}