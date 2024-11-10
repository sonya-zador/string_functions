#include <stdio.h>
#include <ctype.h>

int my_strcmp(const char* str1, const char* str2);

int main(){

    char * str[5] = {"ALEKSEY", "ALEKSANDER", "ARTEM", "ANTON", "ANDREY"};

    bool flag;

    for (int i = 5; i >= 0; i--)
    {
        flag = 1;
        for (int j = 0; j < i - 1; j++)
        {
            int res = my_strcmp(str[j], str[j+1]);
            if (res > 0)
            {
                char * buffer = str[j];
                str[j] = str[j + 1];
                str[j + 1] = buffer;
                flag = 0;
            }
        }
        if (flag == 1)
        break;
    }
                                                

    for (int i = 0; i < 5; i++){
        printf("str1[%d] = %s\n", i, str[i]);
    }
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