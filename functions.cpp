#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_strlen(char * str);
int my_strcmp(const char * str1, const char * str2);

int main(){
    char str[50] = {};
    char str_strcmp[50] = {};

    puts("Enter string");
    scanf("%s", str);
    printf("Number of characters per line: %d\n", my_strlen(str));

   char * str1[6] = {"ALEKSEY", "ALEKSANDER", "ARTEM", "ANTON", "ANDREY"};

    bool flag;

    for (int i = 5; i >= 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i - 1; j++)
        {
            int res = my_strcmp(str1[j], str1[j+1]);
            if (res > 0)
            {
                char * buffer = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = buffer;
                flag = 0;
            }
        }
        if (flag == 1)
        break;
    }


    for (int i = 0; i < 5; i++){
        printf("str1[%d] = %s\n", i, str1[i]);
    }
}

int my_strlen(char * str){
    int i = 0;
    while(str[i] != '\0'){
        i += 1;
    }
    return i;
}

int my_strcmp(const char * str1, const char * str2)
{
    int i = 0;

    while (str1[i] && str2[i]){

        if (tolower(str1[i]) != tolower(str2[i]))
        {
           break;
        }

        i++;
    }

    return str1[i] - str2[i];
}
  
// TODO strcpy strchr