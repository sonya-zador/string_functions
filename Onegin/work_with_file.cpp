#include <stdio.h>
#include <stdlib.h>

#include "structs.h"

void open_file(file_data * f)
{
    f->file = fopen("onegin.txt", "rb");// FIXME codestyle!!

    if (f->file == NULL)
    {
        printf("Error opening onegin.txt");
        exit(EXIT_FAILURE);
    }



    fseek(f->file , 0, SEEK_END);
    f->buffer_len = ftell(f->file);
    fseek(f->file , 0, SEEK_SET);

    f->buffer = (char *)calloc(f->buffer_len + 1, sizeof(char));
    f->buffer[f->buffer_len] = '\0';

    fread(f->buffer, sizeof(char), f->buffer_len, f->file);

    fclose(f->file);
}