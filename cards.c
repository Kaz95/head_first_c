/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */
#include <stdio.h>
#include <stdlib.h>

/* Modify program to keep track of card count and to display the count after each card.
 * The program should end when the user enters X
 * Display an error message if the card is invalid
 */

int main()
{
	char card_name[3];
	puts("Enter the card_name: ");
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0]) {
	case 'K':
	case 'Q':
	case 'J':
		val = 10;
		break;
	case 'A':
		val = 11;
		break;
	default:
		val = atoi(card_name);
	}
	
	if ((val > 2) && (val < 7))
		puts("Count has gone up");
	else if (val == 10)
		puts("Count has gone down");

	return 0;
}
