#include <stdio.h>
#include <stdlib.h>

#include "structs.h"

void strings_count(file_data * f)
{
    int count = 0;

    for(int i = 0; i < f->buffer_len + 1; i++)
    {
        if (f->buffer[i] == '\n' || f->buffer[i] == '\0')
        {
            count += 1;
        }
    }

    f->str_count = count;
}

void n_delete(file_data * f)
{

    for(int i = 0; i < f->buffer_len; i++)
    {
        if (f->buffer[i] == '\n')
        {
            f->buffer[i] = '\0';
        }
    }

}

void get_strings_pointers(file_data * f)
{
    int count = 1;
    f->buffer_pointers = (char**)calloc(f->str_count, sizeof(char *));
    f->buffer_pointers[0] = &f->buffer[0];

    for (int i = 1; i < f->buffer_len - 1; i++)
    {
        if(f->buffer[i] == '\0')
        {
            f->buffer_pointers[count] = &f->buffer[i + 1];
            count += 1;
        }
    }

}

void pointers_output(file_data * f)
{
    for(int i = 0; i < f->str_count; i++)
    {
        printf("%s\n", f->buffer_pointers[i]);
    }
}

void buffer_output(file_data * f)
{
    for(int i = 0; i < f->buffer_len; i++)
    {
        if(f->buffer[i] == '\0')
        {
            putchar('\n');
        }
        else
        {
            printf("%c", f->buffer[i]);
        }
        // printf("%s\n", f->buffer_pointers[i]);
    }
}