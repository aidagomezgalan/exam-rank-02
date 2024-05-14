#include <unistd.h>

void repeat_alpha(char *str)
{
	int i;
	int repeat;

	i = 0;
	while (str[i])
	{
		repeat = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			repeat += str[i] - 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			repeat += str[i] - 'A';
		while (repeat)
		{
			write(1, &str[i], 1);
			repeat--;
		}			
		i++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
