#include <stdio.h> 
int main()
{
	char ch;
	int length, i;
	int number;
	int j;
	//int counter_1, counter_2, counter_3, counter_4, counter_5, counter_6, counter_7;

	// index starts from 0, but word's length is bigger than 0, so 2 solutions:
	// 1. we don't use 0 index element of this array, we use elements starting from index 1
	// 2. or, we use index 0 element for length 1 word : counters_of_length[0] for length 1 word
	//    counters_of_length[1] for length 2 word
	int counters_of_length[32]; 

	// intialization
	length = 0;
	//counter_1 = counter_2 =  counter_3 =  counter_4 =  counter_5 =  counter_6 =  counter_7 = 0;
	for (i = 0; i < 32; ++i)
		counters_of_length[i] = 0;

	while ((ch = getchar()) != EOF) {
		// loop logic
		if (ch >= 65 && ch <= 90 ||
			ch >= 97 && ch <= 122 ||
			ch == 39) {
			// Is inside a word.
			++length;
		}
		else {
			
			// Not in a word.
			// to do: 
			// (1) find counter for this length 
			// (2) add 1 for this counter 
			/*
			if (length == 2)
				++counter_2;
			else if (length == 4)
				++counter_4;
			else if (length == 1)
				++counter_1;
			else if (length == 3)
				++counter_3;
			else if (length == 5)
				++counter_5;
			else if (length == 6)
				++counter_6;
			else if (length == 7)
				++counter_7;
			*/
			i = length;
			++counters_of_length[i];

			// (3) reset length for next new word length calculation
			length = 0;
		}
	}

	//printf("word len = %d\n", length);
	for (i = 1; i < 32; ++i)
	{	
		number = counters_of_length[i];
		printf("%d ", i);
		for (j = 0; j < number; ++j)
			putchar('*');
		putchar('\n');

	}

	return 0;
}

void f()
{
	char ch;

	ch = 's';
}