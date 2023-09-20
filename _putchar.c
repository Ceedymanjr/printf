#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int main()
{
    char c = 'H';
    _putchar(c);
    return 0;
}

