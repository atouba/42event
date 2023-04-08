#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int	length_word(char *str) {
	int	i = 0;

	while (!isspace(str[i]) && str[i])
		++i;
	return i;
}

int	longest_word(char *str) {
	int l = 0;
	int	temp_l;
	int	i = 0;
	
	while (str[i]) {
		while (isspace(str[i]))
			++i;
		temp_l = length_word(str + i);
		i += temp_l;
		if (l < temp_l)
			l = temp_l;
	}
	return l;
}

int main(int ac, char **av) {
	if (ac == 2) {
		int	l = longest_word(av[1]);
		int	l_temp_word = 0;
		int	i = -1;
		write(1, "**", 2);
		while (++i < l)	write(1, "*", 1);
		write(1, "**\n", 3);
		i = 0;
		
		while (av[1][i]) {
			write(1, "* ", 2);
			while (isspace(av[1][i]))	++i;
			while (!isspace(av[1][i]) && av[1][i]) {
				write(1, &av[1][i++], 1);
				l_temp_word++;
			}
			while (++l_temp_word < l + 1)
				write(1, " ", 1);
			l_temp_word = 0;
			write(1, " *\n", 3);
		}
		i = -1;
		write(1, "**", 2);
		while (++i < l)	write(1, "*", 1);
		write(1, "**\n", 3);
	}
}
