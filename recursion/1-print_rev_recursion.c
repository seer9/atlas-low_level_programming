void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_rev_recursion(s + 1);
	_putchar(*s);
}
