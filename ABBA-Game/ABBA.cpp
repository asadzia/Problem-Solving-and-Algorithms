	/*
	*
	* ABBA.cpp
	*
	* Created By: Asad Zia
	*
	*/

	#include <iostream>
	#include <string>
	#include <algorithm>

	using namespace std;

	class ABBA
	{
		public:

			/* the method for checking if the string has only 'A' and 'B' characters.*/
			bool checkString (string test)
			{
				for (int i = 0; i < test.length(); ++i)
				{
					if (test.at(i) != 'A' && test.at(i) != 'B')
					{
						return false;
					}
				}
				return true;
			}

			/* the function for checking if the target string is obtainable */
			string canObtain (string initial, string target)
			{
	            size_t n, x, w, y;

	            /* check if initial is equal to target */
	            if (initial == target)
	            {
	            	return "Possible";
	            }
	            
	            /* the case when initial is not equal to target */
				if ((target.length() > initial.length()) && checkString(initial) && checkString(target))
				{
					while (initial.length() < target.length())
					{
						string old_initial = initial;
						
						/* check if we can find substring of initial in target */
						/* otherwise, reverse the initial string and find it in target string - SEE line 137 */
						if ((n = target.find(initial)) != string::npos)
						{
							string tempString = initial;
							tempString.append("A");
							string newString = tempString;

							/* need to convert to c-string to fulfill the argument structure of the find function */
							if ((x = target.find(newString.c_str(), n, newString.size())) != string::npos)
							{
								initial = newString;
								continue;
							}
							/* reverse the target string and the initial string and check for a match after appending A */
							else
							{	
								/* reverse initial */
								reverse(initial.begin(), initial.end());
								/* reverse target string */
								reverse(target.begin(), target.end());

								n = target.find(initial);

								string tempString_rev = initial;
								tempString_rev.append("A");
								string newString_rev = tempString_rev;

								if ((x = target.find(newString_rev.c_str(), n, newString_rev.size())) != string::npos)
								{
									initial = newString_rev;

									/* reverse initial */
									reverse(initial.begin(), initial.end());
									/* reverse target string */
									reverse(target.begin(), target.end());

									continue;
								}
								/* reverse initial */
								reverse(initial.begin(), initial.end());
								/* reverse target string */
								reverse(target.begin(), target.end());
							}

							/* reverse and append 'B' */
							reverse(initial.begin(), initial.end());

							tempString = initial;
							tempString.append("B");
							newString = tempString;

							n = target.find(initial);

							if ((x = target.find(newString.c_str(), n, newString.size())) != string::npos)
							{
								initial = newString;
								continue;
							}
							else
							{	
								/* reverse target string */
								reverse(target.begin(), target.end());

								string tempString_rev = initial;
								tempString_rev.append("B");
								string newString_rev = tempString_rev;

								n = target.find(initial);

								if ((x = target.find(newString_rev.c_str(), n, newString_rev.size())) != string::npos)
								{
									initial = newString_rev;

									/* reverse target string */
									reverse(target.begin(), target.end());
									continue;
								}
								/* reverse target string */
								reverse(target.begin(), target.end());
							}


							reverse(initial.begin(), initial.end());
						}

						reverse(initial.begin(), initial.end());

						if ((w = target.find(initial)) != string::npos)
						{
							string tempString = initial;
							tempString.append("B");
							string newString = tempString;
							w = target.find(initial);

							/* need to convert to c-string to fulfill the argument structure of the find function */
							if ((y = target.find(newString.c_str(), w, newString.size())) != string::npos)
							{
								initial = newString;
								continue;
							}
							else
							{	
								/* reverse target string */
								reverse(target.begin(), target.end());

								string tempString_rev = initial;
								tempString_rev.append("B");
								string newString_rev = tempString_rev;

								n = target.find(initial);

								if ((x = target.find(newString_rev.c_str(), n, newString_rev.size())) != string::npos)
								{
									initial = newString_rev;

									/* reverse target string */
									reverse(target.begin(), target.end());
									continue;
								}
								/* reverse target string */
								reverse(target.begin(), target.end());
							}
							
							reverse(initial.begin(), initial.end());
						}
						else
						{
							reverse(initial.begin(), initial.end());
						}

				if (old_initial == initial)
				{
					break;
				}
			}

			if (initial == target)
			{
				return "Possible";
			}
		}
		return "Impossible";
	}
};
