#include <iostream>
#include <string>
#include <algorithm>

//using namespace std;

bool palindrome(std::string n)
{
    n.erase(remove(n.begin(), n.end(), ' '), n.end());
    int l = n.length();
    int x = 1;
    for (int i = 0; i < (l / 2); i++)
        {
            if (n[i] == n[l - x]);
            else return false;
            x++;
        }
    return true;
}

int main()
{

	std::string userInput;
	std::cout<<"Podaj wyraz aby sprawc czy jest palindromem:";
	getline(std::cin,userInput);
	if(palindrome(userInput)==true) std::cout<<"Podany napis jest palindromem"<<std::endl;
	else std::cout<<"Podany napis NIE jest palindromem"<<std::endl;
	return 0;
}
