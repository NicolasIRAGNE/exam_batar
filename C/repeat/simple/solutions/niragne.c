int main(int ac, char **av)
{
	int size = atoi(av[1]);
	if (ac != 2 || size <= 0)
		return(1);
	char s[] = "123%1$.n";
	char buffer[(sizeof(s) - 1) * size];
	int i;
	memset_pattern8(buffer, s, sizeof(buffer));
	buffer[sizeof(buffer)-1] = 0;
	printf(buffer, &i);
	return (0);
}