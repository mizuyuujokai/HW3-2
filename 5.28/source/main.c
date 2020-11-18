#include<stdio.h>
#include<stdlib.h>

int caps(char);

int main(void)
{
	char i;
	printf("enter a letter\n");
	scanf_s("%c", &i);
	
	printf("\n%c\n", caps(i));
	system("pause");
	return 0;
}
int caps(char j)
{
	switch (j)
	{
		case 'A':
			j = 'a';
			break;
		case 'B':
			j = 'b';
			break;
		case 'C':
			j = 'c';
			break;
		case 'D':
			j = 'd';
			break;
		case 'E':
			j = 'e';
			break;
		case 'F':
			j = 'f';
			break;
		case 'G':
			j = 'g';
			break;
		case 'H':
			j = 'h';
			break;
		case 'I':
			j = 'i';
			break;
		case 'J':
			j = 'j';
			break;
		case 'K':
			j = 'k';
			break;
		case 'L':
			j = 'l';
			break;
		case 'M':
			j = 'm';
			break;
		case 'N':
			j = 'n';
			break;
		case 'O':
			j = 'o';
			break;
		case 'P':
			j = 'p';
			break;
		case 'Q':
			j = 'q';
			break;
		case 'R':
			j = 'r';
			break;
		case 'S':
			j = 's';
			break;
		case 'T':
			j = 't';
			break;
		case 'U':
			j = 'u';
			break;
		case 'V':
			j = 'v';
			break;
		case 'W':
			j = 'w';
			break;
		case 'X':
			j = 'x';
			break;
		case 'Y':
			j = 'y';
			break;
		case 'Z':
			j = 'z';
			break;
		case 'a':
			j = 'A';
			break;
		case 'b':
			j = 'B';
			break;
		case 'c':
			j = 'C';
			break;
		case 'd':
			j = 'D';
			break;
		case 'e':
			j = 'E';
			break;
		case 'f':
			j = 'F';
			break;
		case 'g':
			j = 'G';
			break;
		case 'h':
			j = 'H';
			break;
		case 'i':
			j = 'I';
			break;
		case 'j':
			j = 'J';
			break;
		case 'k':
			j = 'K';
			break;
		case 'l':
			j = 'L';
			break;
		case 'm':
			j = 'M';
			break;
		case 'n':
			j = 'N';
			break;
		case 'o':
			j = 'O';
			break;
		case 'p':
			j = 'P';
			break;
		case 'q':
			j = 'Q';
			break;
		case 'r':
			j = 'R';
			break;
		case 's':
			j = 'S';
			break;
		case 't':
			j = 'T';
			break;
		case 'u':
			j = 'U';
			break;
		case 'v':
			j = 'V';
			break;
		case 'w':
			j = 'W';
			break;
		case 'x':
			j = 'X';
			break;
		case 'y':
			j = 'Y';
			break;
		case 'z':
			j = 'Z';
			break;
	}
	return j;
}