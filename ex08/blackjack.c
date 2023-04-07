#include <stdio.h>
#include <ctype.h>

int main(int ac, char **av) {
	int	blackjack = 0;
	int	i = 0;

	if (av[1]) {
		while (av[1][i]) {
			if (isdigit(av[1][i]))
				blackjack += av[1][i] - '0';
			else if (av[1][i] == 'A')
				blackjack += (blackjack + 11 < 21)?11:1;
			else
				blackjack += 10;
			i++;
		}
	}
	if (blackjack == 21)
		printf("Blackjack!");
	else
		printf("%d", blackjack);
}
