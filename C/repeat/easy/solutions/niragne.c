int main(int ac, char **av)
{
	int size;
	if (ac != 2 || !(size = atoi(av[1])))
		return(1);
	char c = 'A';
	char buffer[size * sizeof(char)];
	int i;
	memset(buffer, c, sizeof(buffer));
	buffer[sizeof(buffer)] = 0;
    write(1, buffer, sizeof(buffer));
	return (0);
}