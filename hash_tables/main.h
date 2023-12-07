#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
int append_text_to_file(const char *filename, char *text_content);
int main(int ac, char **av);
hash_table_t *hash_table_create(unsigned long int size);

#endif /* MAIN_H */

