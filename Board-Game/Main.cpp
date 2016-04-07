/*
*
* The testing program
*
* Created By: Asad Zia
*/

#include "test.cpp"

int main ()
{
	ABoardGame myGame;
	static const string arr[] = {
	 "AAAA"
	,"A.BA"
	,"A..A"
	,"AAAA"};
	vector<string> test (arr, arr + sizeof(arr) / sizeof(arr[0]) );
	cout << myGame.whoWins(test);
	return 0;
}

	/*
	TEST CASE 1:
	[".....A","......","..A...","...B..","......","......"]
	*/

	/*
	TEST CASE 2:
	["AAAA","A.BA","A..A","AAAA"]
	*/

	/*
	TEST CASE 3:
	["..",".."]
	*/

	/*
	TEST CASE 3:
	["BBB..BAB...B.B",
	".AAAAAAAAAAAA.",
	"AA.AA.AB..A.AB",
	"..........B.AB",
	".A..BBAB.A.BAB",
	".AB.B.......A.",
	".A..A.AB.A..AB",
	".ABAA.BA...BA.",
	"BAAAB.....ABA.",
	".A....B..A..B.",
	"B...B....B..A.",
	"BA.B..A.ABA.A.",
	"BAAAA.AAAAA.A.",
	"B.B.B.BB.B...."]
	*/

	/*
	TEST CASE 5:
	"B..ABAABBB","B.........","A..A.AA..B","A.BBBAA..A","B.AAAAB...","A..BBBBB.A"
	,"B..ABAABBA","A......B.B","B......A.A","BA.AABBB.A"]
	*/
