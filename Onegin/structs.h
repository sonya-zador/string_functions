#ifndef STRUCTS
#define STRUCTS

#include <stdio.h>

typedef struct {
    FILE* file;
    char* buffer;
    int buffer_len;
    int str_count;
    char** buffer_pointers;
} file_data;

#endif