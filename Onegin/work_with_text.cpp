#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "structs.h"
#include "work_with_strings.h"

void bubble_sort(file_data * f, int(*comparison_func)(char * a, char * b))
{
    for (int i = f->str_count - 1; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            int res = comparison_func(f->buffer_pointers[j], f->buffer_pointers[j + 1]);

            // printf("[%d] (%s) (%s) - %d\n", j, f->buffer_pointers[j], f->buffer_pointers[j + 1], res);

            if (res > 0)
            {
                char * buffer = f->buffer_pointers[j];
                                f->buffer_pointers[j] = f->buffer_pointers[j + 1];
                                                        f->buffer_pointers[j + 1] = buffer;
            }
        }
    }
}

int str_cmp_begin(char * str1, char * str2)
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

int str_cmp_end(char * str1, char * str2)
{
    int i1 = strlen(str1) - 1;
    int i2 = strlen(str2) - 1;

    while (str1[i1] && str2[i2])
    {

        if (tolower(str1[i1]) != tolower(str2[i2]))
        {
           break;
        }

        i1--;
        i2--;
    }

    return str1[i1] - str2[i2];
}