// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[7];
//     scanf("%6s",str);
//     printf("%s",str);
//     return 0 ;
// }

// --------------------------------------------------------------------------------------------------

#include<stdio.h>
#include<string.h>

int main(){
    char str[7];
    for (int i = 0; i < 6; i++)
    {
         scanf("%c", &str[i]);//Take one character from the user and store it at the address of str[i]
         fflush(stdin);    
    }
    str[6] = '\0';
    
    printf("%s",str);
    return 0 ;
}   