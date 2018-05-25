/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** 
*/

char *my_strcpy(char *dest, char const *src)
{
	int n = 0;
	dest = '';
	while (src[n] != '\0') {
		dest[n] = src[n];
		n = n + 1;
	}
	return(dest);
}
