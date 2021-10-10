/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** UwU
*/

char *my_strcpy(char *dest, char const *src, int n) 
{
    int i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}