#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>


int main() {

	srand(time(NULL));

	int myrand = rand()%11; // rand mod 11 gives [0,10] output

	// branching conditionals for [0,4], [5,9], == 10, respectively
	if (myrand <= 4) 
	{
		printf("Eat more beef, kick less cats\n");
	}
	else if (myrand <= 9)
	{
		printf("FRODO LIVES\n");
	}
	else if (myrand == 10)
	{
		printf("Larn is the best roguelike\n");
	}

	printf("The random number was: %d\n", myrand);

	return 0;


}
