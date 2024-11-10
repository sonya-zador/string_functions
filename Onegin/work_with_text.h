#ifndef WORK_WITH_TEXT
#define WORK_WITH_TEXT
#include "structs.h"

void bubble_sort(file_data * f, int(*comparison_func)(char * a, char * b));
int str_cmp_begin(char * str1, char * str2);
int str_cmp_end(char * str1, char * str2);

#endif
