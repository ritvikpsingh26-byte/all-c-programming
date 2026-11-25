#include <stdio.h>

int mystrlen(char str[]){
    int i =0 , count;
    char  c = str[i];
    while(c!='\0'){
        c = str[i];
        i++;
    }
    count = i-1 ;
    return count;
}

void mystrcpy(char target[], char source[]) {
    for (int i = 0; i < mystrlen(source); i++) {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main() {
    char source[] = "Ritvik";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s",source, target );
    return 0;
}
//The whole program in one sentence:

// mystrlen() finds how many characters are in source, and mystrcpy() 
// uses that length to copy each character from source to target, 
// finally adding '\0' to make target a proper string.