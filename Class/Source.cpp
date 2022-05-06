#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Channel
{private:
	std::string m_name;
public:
	int m_subs;
	std::string new_name;
	string my_new_word;

};


int main()
{	
	setlocale(LC_ALL, "rus");
	Channel GOALACTION;
	GOALACTION.m_subs = 1000;
	cout << GOALACTION.m_subs << "\n";

	Channel GOALACTION2;
	GOALACTION2.m_subs = 50;
	cout << GOALACTION2.m_subs << '\n';

	Channel GOALACTION_NEW_STRING;
	GOALACTION_NEW_STRING.new_name = "Hello";
	cout << GOALACTION_NEW_STRING.new_name << "\n";

	Channel My_Word;
	My_Word.my_new_word = "234" << '\n';
	cout << My_Word.my_new_word << endl;

	

	return 0;
}