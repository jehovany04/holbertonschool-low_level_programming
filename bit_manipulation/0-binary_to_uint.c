#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars.
* Return:converted number, or 0 if there is an invalid character or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/** Check if the string is NULL **/
	if (b == NULL)
		return (0);

	/** Iterate through the string **/
	while (*b)
	{
		/** Check for invalid characters **/
		if (*b != '0' && *b != '1')
			return (0);

		/** Update the result based on the binary digit **/
		result = (result << 1) + (*b - '0');

		/** Move to the next character in the string **/
		b++;
	}

	return (result);
}
