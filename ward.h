#ifndef WARD_H
#define WARD_H

                                                       /* WARD LIBARY */
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>



/* BASIC FUNCTION FOR:
 *
 * CHARACTER
 * STRINGS
 * INTEGER 
 * */


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
* _islower - check if lower or upper
* @c: Parameter
* Return: 1 (True) 0 (False)
*/
int _islower(int c);

/**
* _isalpha - check for alphabet
* @c: parameter
* Return: 1 (if alpha) 0 (false)
*/
int _isalpha(int c);

/**
* _abs - compute absolute value
* @n: parameter
* Return: Always 0 (success)
*/
int _abs(int n);

/**
 * _isupper - evalue if letter is uppercase .
 *@c: print int
 * Return: Always 0.
 */
int _isupper(int c);

/**
* _isdigit - check for number from 0 to 9
*
* @c: integer
*
* Return: i else 0
*/
int _isdigit(int c);

/**
* _strlen - count length of string
* @s: pointer
* Return: count
*/
int _strlen(char *s);

/**
* _puts - print strings
*
* @str: pointer
*/
void _puts(char *s);

/**
* _strcpy - copy src to dest
*
* @dest: pointer
* @src: pointer
* Return: dest (success)
*/
char *_strcpy(char *dest, char *src);

/**
* print_rev - print strings in reverse order
*
* @s: pointer
*/
void print_rev(char *s);

/**
* swap_int - swap two a & b
*
* @a: pointer
* @b: pointer
*/
void swap_int(int *a, int *b);

/**
 *  _atoi - convert a string to an integer
 * @s: input
 * Return: Always 0.
*/
int _atoi(char *s);

/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */
char *_strcat(char *dest, char *src);

/**
* _strncat - contanate two strings based of n number of bytes
* @dest: first character
* @src: second character
* @n: number of bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n);

/**
* _strncpy - copy n number of string from source to destination
* @dest: destination
* @src: source
* @n: n number of string (integer)
* Return: dest (success)
*/
char *_strncpy(char *dest, char *src, int n);

/**
* _strcmp - compare two string
* @s1: pointer to first string
* @s2: pointer to second string
* Return: 0 (if equal) else the difference
*/
int _strcmp(char *s1, char *s2);

/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
 */
char *_memset(char *s, char b, unsigned int n);

/**
* _memcpy - Copies memory area
* @dest: Destination to copy to
* @src: Source to copy from
* @n: byte of memory
* Return: dest (pointer)
*/
char *_memcpy(char *dest, char *src, unsigned int n);

/**
* _strchr - Locates a character in a string
* @s: Actaul string (pointer)
* @c: first occurrence of the character
* Return: s (string of character)
*/
char *_strchr(char *s, char c);

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/
char *_strstr(char *haystack, char *needle);





/* FOR INTEGER */

void add(int a, int b);
void sub(int a, int b);
void _div(int a, int b);

/* VOID */
void hello(void);



/* LISTINT_T SINGLY LINKED LIST */


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


/**
 * check_cycle - check for a cycle in a linked list
 * @list: head of a link list
 * Return: 1(Detect a cycle) 0(No cycle)
 */
int check_cycle(listint_t *list);

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head);

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to the first node in a listint_t singly linked list
 * @number: The value assign to the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number);

/**
 * palindrome_recursive - check for palindrome in a recursive manner.
 * @head: pointer to the first node of a listint_t list, passed by
 * value.
 * @head2: the same as @head but passed by reference
 * Description: check if a listint_t singly linked list read the
 * the same forward as its backward.
 * Helper function to is_palindrome.
 * Return: 1 (True) 0 (False)
 */
int palindrome_recursive(listint_t *head, listint_t **head2);

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: pointer to the first node of a listint_t singly linked list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head);
#endif
