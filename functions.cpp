#include <stdio.h>
#include <string.h>
int my_strlen(char * str);
int my_strcmp(char * str);

int main(void){
    char str[50] = {};
    char str_strcmp[50] = {};

    puts("Enter string");
    scanf("%s", str);
    printf("Number of characters per line: %d\n", my_strlen(str));

    puts("Enter this line: 'check input for correctness'");
    scanf("%s", str_strcmp);
    if (my_strcmp(str_strcmp) == 0){
        puts("The line entered is correct!");
    }
    else{
        puts("The line was entered incorrectly!");
    }
}

 int my_strlen(char * str){
    int i = 0;
    while(str[i] != '\0'){
        i += 1;
    }
    return i;
 }

 int my_strcmp(char * str_strcmp){
    int i = 0;
    unsigned int count_correct = 0;
    char line[] = "check input for correctness";
    while(str_strcmp[i] != '\0')
    {
       if (str_strcmp[i] == line[i])
        count_correct += 1;
       i += 1;
    }

    if (count_correct == strlen(str_strcmp))
        return 0;

    return 1;
 }