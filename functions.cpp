#include <stdio.h>
#include <string.h>
#include <ctype.h>

int my_strlen(const char * str);
int my_strcmp(const char * str1, const char * str2);
int my_strchr(const char * str, const char * ch);
char * my_strcpy(const char * src, char * dst);

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

    char ch[5] = {};

    puts("Enter the character to search in the string");
    scanf("%s", ch);

    int res = my_strchr(str, ch);

    if (res == -1){
        puts("Given character is not found(");
    }

    else{
        printf("Symbol number is %d\n", res);
    }

    char src[30] = "String to copy";
    char dst[40] = {};
    my_strcpy(src, dst);
    printf("%s\n", dst);
}

int my_strlen(const char * str){

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

int my_strchr(const char * str, const char * ch)
{
    int i = 0;

    while(str[i] != '\0'){

        if (tolower(str[i]) == tolower(ch[0]))
            return i;

        i++;
    }
    return -1;
}

char* my_strcpy(const char * src, char * dst){
    int max_len = sizeof(dst);

    while(*src != '\0' && max_len-- > 1){
        *dst = *src;
        *dst++;
        *src++;
    }
    *dst = '\0';
 
    return dst;
}
// TODO strcpy strchr




    for (int i = 0; i < count; i++){
        printf("str1[%d] = %s\n", i, strings[i]);
    }

    puts("\n");
    
    bubble_sort(&f, str_cmp_end);

    for (int i = 0; i < count; i++){
        printf("str1[%d] = %s\n", i, strings[i]);
    }