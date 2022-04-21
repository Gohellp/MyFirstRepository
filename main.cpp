#include <iosteam>

int main()
{
	int a;
	std::cin >> a;
	while (a > 0)
	{
		std::cout << a;
		a--;
	}
	return 0;
}
