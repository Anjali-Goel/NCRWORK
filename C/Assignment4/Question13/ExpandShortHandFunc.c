#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ExpandShortHand(char* Str1, char* Str2)
{
	int i = 0, j = 0,LenStr2;
	int BefHyp, AfHyp;
		//loop continues throughout the string 1
	while (i < strlen(Str1))
	{
			//when '-' is encountered expands the notation
		if (*(Str1 + i) == '-')
		{
			//saving the alphabet after the alphabet before hyphen and the alphabet after hyphen
			BefHyp = *(Str1 + i - 1) + 1;
			AfHyp = *(Str1 + i + 1);
				//logic for the expansion of characters
			if (BefHyp <= AfHyp)
			{
				while (BefHyp != AfHyp)
				{
					Str2 = realloc(Str2, (j + 2) * sizeof(char));
					*(Str2 + j) = BefHyp;
					*(Str2 + j + 1) = '\0';
					++BefHyp;
					++j;
				}
				Str2 = realloc(Str2, (j + 2) * sizeof(char));
				*(Str2 + j) = BefHyp;
				*(Str2 + j + 1) = '\0';
				++i;
				LenStr2 = strlen(Str2);
			}
				//when the characters are given in reverse order
			else
			{
				printf("\nINVALID SEQUENCE ENTERED!! RESTART!!");
				LenStr2 = 0;
				break;
			}
		}
			//when no hyphen is encountered
		else
		{
			Str2 = realloc(Str2, (j + 2) * sizeof(char));
			*(Str2 + j) = *(Str1 + i);
			*(Str2 + j + 1) = '\0';
			++j;
			++i;
			LenStr2 = strlen(Str2);
		}
	}
		//printing the expanded version of the input string
	if (LenStr2 != 0)
	{
		printf("\nExpanded Version of the given Short hand string is :\n");
		printf("\n%s", Str2);
	}
	free(Str2);
}