#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "structs.h"
#include "work_with_files.h"
#include "work_with_strings.h"
#include "work_with_text.h"


int main()
{
    file_data f = {};

    open_file(&f);


    strings_count(&f);
    // printf("%d\n", f.str_count);

    n_delete(&f);
    // for(int i = 0; i < f.buffer_len + 1; i++) {
    //     printf("%d ", f.buffer[i]);
    // }
    // printf("\n");

    get_strings_pointers(&f);

    bubble_sort(&f, str_cmp_begin);

    pointers_output(&f);
    printf("\n");
    buffer_output(&f);
    printf("\n\n");

    // free(f.buffer);
    // free(f.buffer_pointers);

    bubble_sort(&f, str_cmp_end);

    pointers_output(&f);
    printf("\n");
    buffer_output(&f);
    printf("\n");

    free(f.buffer);
    free(f.buffer_pointers);
    return 0;

}