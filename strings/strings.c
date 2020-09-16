/*
 * Brown University - Department of Computer Science
 * CS033 - Introduction To Computer Systems - Fall 2020
 */

/*      _        _
 *  ___| |_ _ __(_)_ __   __ _ ___
 * / __| __| '__| | '_ \ / _` / __|
 * \__ \ |_| |  | | | | | (_| \__ \
 * |___/\__|_|  |_|_| |_|\__, |___/
 *                       |___/
 */

/* XXX: Preprocessor instruction to enable basic macros; do not modify. */
#include <stddef.h>

/*
 * strlen() - abbreviated from "string length".
 *
 * - Description: determine the number of characters in a character string.
 *
 * - Arguments: a pointer to a null-terminated character string.
 *
 * - Return value: the number o characters using a special unsigned numerical
 *   type, which is intended specifically for pointer arithmetic, called size_t.
 *
 * Examples:
 * 1. >  strlen("") = 0
 * 2. >  strlen("ilovecs33") = 9
 *
 * - Hint: the length of a C string does _not_ include the null ('\0')
 *   character that terminates it.
 */
size_t strlen(const char *s) {
	// TODO: Fill In
}

/*
 * strspn() - abbreviated from "string span".
 *
 * - Description: determine the number of characters in a character string
 *   that consist of characters in accept
 *
 * - Arguments: a pointer to a null-terminated character string,
 *   and a pointer to a null-terminated string of characters to accept
 *
 *
 * - Return value: the number of sequential characters at the beginning of s 
 *   that are also characters in accept.
 *
 * Examples:
 * 1. >  strspn("abcde", "ac") = 1
 * 2. >  strspn("123456", "ab") = 0
 * 3. >  strspn("hello", "hel") = 4
 */
size_t strspn(const char *s, const char *accept) {
	// TODO: Fill In
}

/*
 * strcspn() - abbreviated from "string span (complement)".
 *
 * - Description: determine the number of characters in a character string
 *   that consist of characters not in reject
 *
 * - Arguments: a pointer to a null-terminated character string,
 *   and a pointer to a null-terminated string of characters to reject
 *
 * - Return value: the number of sequential characters at the beginning of s 
 *   that are not characters in reject.
 *
 * Examples:
 * 1. >  strcspn("abcde", "ed") = 3
 * 2. >  strcspn("123456", "12") = 0
 * 3. >  strcspn("hello", "xyz") = 5

 */
size_t strcspn(const char *s, const char *reject) {
    // TODO: Fill In
}

/*
 * strncmp() - abbreviated from "string compare (n bytes)".
 *
 * - Description: compares up to the first n bytes of two strings, s1 and s2
 *
 * - Arguments: two null-terminated strings (s1 and s2) and the maximum number
 *   of bytes to compare (n).
 *
 * - Return value: negative number if s1 < s2, 0 if s1 == s2, positive number if
 *   s1 > s2
 *
 * Examples:
 * 1. >  strncmp("abcde", "abdde", 3) = some negative number
 * 2. >  strncmp("abcde", "abdde", 2) = 0
 * 3. >  strncmp("1234567", "123", 100) = some positive number
 */
int strncmp(const char *s1, const char *s2, size_t n) {
    // TODO: Fill In
}

/*
 * strstr() - abbreviated from "string (find) string".
 *
 * - Description: Find the string "needle" in the string "haystack". This is
 *   not some joke from the TAs but the actual terminology used in the Linux
 *   version of strstr(). Don't believe us? Type "man strstr" into a terminal,
 *   and see for yourself! For another example of systems programming humor,
 *   you may also appreciate "man strfry".
 *
 * - Arguments: a pointer to a null-terminated character string to find
 *   (needle), and a pointer to a null-terminated character string in which to find
 *   the string (haystack)
 *
 * - Return value: a pointer to the beginning of the needle string within the
 *   haystack string
 *
 * Examples:
 * 1. >  strstr("abcde", "bcd"); should return pointer to string starting @ b
 * 2. >  strstr("123456", "4"); should return pointer to string starting @ 4
 * 3. >  strstr("hello", "xyz") = NULL
 *
 * - Hint: Use strncmp().
 */
char *strstr(const char *haystack, const char *needle) {
    // TODO: Fill In
}
