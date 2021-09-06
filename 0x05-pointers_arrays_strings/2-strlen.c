#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to get the length of
 * Return: Length of string
 */
int _strlen(char *s)
{
int arrayIndex;
arrayIndex = 0;
while (s[arrayIndex] != '\0')
{
arrayIndex++;
}
return (arrayIndex);
}
