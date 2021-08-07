#include <stdio.h>
int getDecimalVal(char ch) {
    if(ch >= '0' && ch <= '9')
        return (ch - '0');
    if(ch >= 'A' && ch <= 'Z')
        ch += 32;
    return (ch - 'a') + 10;
}

int getLen(char *str) {
    int len = 0;
    int i = 0;

    while(str[i] != '\0') {
	i++;
	len++;
    }

    return len;
}


int htoi(char *str) {
    int len = getLen(str);    
    int powStart = 1;
    int res = 0;
    for(int i = len - 1; i >= 0; i--) {
        if(str[i] == 'X' || str[i] == 'x') {
            break;
        }

        int val = getDecimalVal(str[i]);

        res += powStart * val;
        powStart *= 16;
    }

    return res;
}

int main() {
    char s[100];
    scanf("%[^\n]%*c", s);

    int result = htoi(s);
    printf("%d\n", result);
}