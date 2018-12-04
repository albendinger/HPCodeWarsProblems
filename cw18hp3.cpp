#include <iostream>
#include <map>

#define TMap std::map

TMap <int, double> v;
TMap <int, double> a;
TMap <int, double> t;

void GetInput();
void CalculateDistance();

int main()
{
	GetInput();

	CalculateDistance();

}

void GetInput()
{
	int count = -1;
	do
	{
		count++;
		std::cin >> v[count];
		std::cin >> a[count];
		std::cin >> t[count];
	} while (v[count] != 0 || a[count] != 0 && t[count] != 0);
	v.erase(count);
	a.erase(count);
	t.erase(count);
}

void CalculateDistance()
{
	for (int x = 0; x < v.size(); x++)
	{
		std::cout << (v[x] * t[x]) + (.5*a[x] * t[x] * t[x]);
		std::cout << std::endl;
	}


}

