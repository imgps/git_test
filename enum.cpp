/* Using enum in cpp */

#include<iostream>
using namespace std;

/*enum seasons {spring = 34, summer = 4, winter= 100, autumn = 50};
int main()
{
	seasons s;
	s = summer;
	cout<<"Summer = " << s <<endl;

	return 0;
}
*/
enum suit {club = 0, diamond = 10, hearts = 20, spades = 3} card;
int main() {
		card= club;
		cout<<"Size of enum variable "<<sizeof(card)<< " bytes.";
		return 0;
}
