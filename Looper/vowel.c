#include <stdio.h>
#include<conio.h>
void main() {
    char ch = 'a';
    int count = 0;

    do {
        if (ch >= 'a' && ch <= 'z') { 
            printf("%c ", ch);
            count++;
        }
        ch = ch + 4; 
        if (ch > 'z')
		break; 
    } while (count < 26); 

    getch();
}

