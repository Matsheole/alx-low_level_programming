#include "main.h"

/**
 * create_file - a function that creates a file and write some texts into it
 * @filename: Name of the file to be created
 * @text_content: Texts to write to the create file
 *
 * Return: 1 if Success and -1 if Fail
 */


int create_file(const char *filename, char *text_content)
{
int fd, t, s = 0;

if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd < 0)
return (-1);

if (text_content)
{
while (text_content[s])
s++;
t = write(fd, text_content, s);

if (t != s)
return (-1);
}
close(fd);
return (1);

}
