/* XXX: Preprocessor instruction to enable basic macros; do not modify. */
#include <stddef.h>
#include <string.h>

/*
 * parse()
 *
 * - Description: creates the token and argv arrays from the buffer character
 *   array
 *
 * - Arguments: buffer: a char array representing user input, tokens: the tokenized
 *   input, argv: the argument array eventually used for execv()
 *
 * - Usage:
 *
 *      For the tokens array:
 *
 *      cd dir -> [cd, dir]
 *      [tab]mkdir[tab][space]name -> [mkdir, name]
 *      /bin/echo 'Hello world!' -> [/bin/echo, 'Hello, world!']
 *
 *      For the argv array:
 *
 *       char *argv[4];
 *       argv[0] = echo;
 *       argv[1] = 'Hello;
 *       argv[2] = world!';
 *       argv[3] = NULL;
 *
 * - Hint: for this part f the assignment, you are allowed to use the built
 *   in string functions listed in the handout
 */
void parse(char buffer[1024], char *tokens[512], char *argv[512]) {
    // TODO: write your code here
}
