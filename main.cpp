#include <iosteam>

int main(){
	int a;
	std::cin>>a;
	while (a >= 0){
		std::<<a;
		a--;
	}
	return 0;
}
