#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int main()
{
	const char *article[] = {"the", "a", "one", "some", "any"};
	const char *noun[] = {"boy", "girl", "dog", "town", "car"};
	const char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
	const char *preposition[] = {"to", "from", "over", "under", "on"};

	srand(time(0));
	for (int i = 0; i < 20; ++i)
	{
		char s[100] = {};
		strcat(s, article[rand() % 5]);
		strcat(s, " ");
		strcat(s, noun[rand() % 5]);
		strcat(s, " ");
		strcat(s, verb[rand() % 5]);
		strcat(s, " ");
		strcat(s, preposition[rand() % 5]);
		strcat(s, " ");
		strcat(s, article[rand() % 5]);
		strcat(s, " ");
		strcat(s, noun[rand() % 5]);
		strcat(s, ".");
		s[0] = s[0] - 'a' + 'A';
		cout << s << endl;
	}
}
