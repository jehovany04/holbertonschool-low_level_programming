#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* For size_t */
#include <sys/types.h> /* For ssize_t */

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */

