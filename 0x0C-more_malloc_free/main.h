#ifndef _MAIN_H
#define _MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
void simple_print_buffer(char *buffer, unsigned int size);


#endif
