#include <iostream>
#include <map>
#include <string>

std::map <int, std::string> mNum;

void GetInput();
void PrintResults();
bool IsMagnanimousAt(int);
bool IsPrime(int);

int main()
{
	GetInput();
	PrintResults();
}

void GetInput()
{
	int count = 0;
	do 
	{
		std::cin >> mNum[count];// input at index of [count]
		count++;
	} while (mNum[count-1]!="0"); //if input == 0, stop looping
	mNum.erase(count); // delete last index of input 0
}

void PrintResults()
{
	for (int count = 0; count < mNum.size()-1;count++)
	{
		std::cout << mNum[count] << " ";
		if (IsMagnanimousAt(count))
		{
			std::cout << "Magnanimous\n";
		}else
		{
			std::cout << "Petty\n";
		}
	}
}

bool IsMagnanimousAt(int count)
{
	std::string num = mNum[count];
	for (int x = 1; x < (num.size()); x++) // loop through number of digits in string -1 for addition sign comparing
	{
		int a = std::stoi(num.substr(0,x));
		int b = std::stoi(num.substr(x));
		if (!IsPrime(a+b)) // ask if 
		{
			return false;
		}
	}

	return true;
}

bool IsPrime(int check)
{
	for (int y = 2; y < check / 2; y++)
	{
		if (check % y == 0)
		{
			return false;
		}
	}
	return true;
}
