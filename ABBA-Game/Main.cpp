/*
*
* Main.cpp
*
*
* Created By: Asad Zia.
*
*/


#include "ABBAGame.cpp"

int main ()
{
	cout << "Testing the Game" << endl;

	ABBA myGame;

	cout << myGame.canObtain("AB, ABB") << endl;
	cout << myGame.canObtain("BBAB, ABABABABB") << endl;
	cout <<myGame.canObtain("BBBBABABBBBBBA, BBBBABABBABBBBBBABABBBBBBBBABAABBBAA") << endl;

	return 0;
}
