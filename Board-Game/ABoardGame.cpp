	/*
	*
	* ABoardGame.cpp
	*
	* Created By: Asad Zia
	*/

	#include <iostream>
	#include <vector>
	#include <string>
	#include <cstring>

	using namespace std;

	class ABoardGame
	{
		public:

		/* the method for checking who wins */
	    string whoWins(vector <string> board)
	    {
	    	/* initializaing variables */
	    	int N = board.size() / 2;
	    	cout << "Value of N:" <<  N << endl;
	     	int AliceCounterArray[N];
	     	int BobCounterArray[N];

	     	/* initialize array values */
	     	memset(AliceCounterArray, 0, sizeof(AliceCounterArray));
	     	memset(BobCounterArray, 0, sizeof(BobCounterArray));

	     	int i = 0;
	     	int j = 2*N;
	     	int w;

	     	for (w = 0; w < N; ++w)
	     	{
	     		string row_one = board.at(w);

	     		/* read the outer first line */
	     		for (int k = i; k < j; ++k)
	     		{
	     			if (row_one.at(k) == 'A')
	     			{
	     				++AliceCounterArray[w];
	     			}	
	     			else if (row_one.at(k) == 'B')
	     			{
	     				++BobCounterArray[w];
	     			}
	     		}

	     		/* a conditional is needed to control how the program acts when we reach the innermost region */
	     		if (w + 1 != N)
	     		{
		     		/* read the lines between the first and the last line */
		     		for (int t = i + 1; t < j - 1; ++t)
		     		{
		     			string row_two = board.at(t);

		     			if (row_two.at(i) == 'A')
		     			{
		     				++AliceCounterArray[w];
		     			}	
		     			if (row_two.at(j - 1) == 'A')
		     			{
		     				++AliceCounterArray[w];
		     			}
		     			if (row_two.at(i) == 'B')
		     			{
		     				++BobCounterArray[w];
		     			}
		     			if (row_two.at(j - 1) == 'B')
		     			{
		     				++BobCounterArray[w];
		     			}
		     		}
		     	}

	     		string row_three = board.at(j - 1);

	     		/* reading and counting from the last line */
	     		for (int x = i; x < j; ++x)
	     		{
	     			if (row_three.at(x) == 'A')
	     			{
	     				++AliceCounterArray[w];
	     			}	
	     			if (row_three.at(x) == 'B')
	     			{
	     				++BobCounterArray[w];
	     			}
	     		}

	     		/* increment and decrement indexing variables accordingly */
	     		++i;
	     		--j;
	     	}

	     	cout << "\nAliceArray" << endl;
	     	for (int o = 0; o < N; ++o)
	     	{
	     		cout << AliceCounterArray[o] << endl;
	     	}

	     	cout << "BobArray" << endl;
	     	for (int o = 0; o < N; ++o)
	     	{
	     		cout << BobCounterArray[o] << endl;
	     	}

	     	for (int y = N - 1; y >= 0; --y)
	     	{
	     		if (AliceCounterArray[y] > BobCounterArray[y])
	     		{
	     			return "Alice";
	     		}
	     		else if (AliceCounterArray[y] < BobCounterArray[y])
	     		{
	     			return "Bob";
	     		}
	     	}

	     	return "Draw";	
	   	}
	};
