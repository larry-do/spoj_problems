#include <iostream>
int main(int argc, char const *argv[])
{
	int a;
	std::cin>>a;
	while(a!=0){
		long long int result = 1;
		for (int i = 1; i <= a; ++i)
		{
			result*=i;
		}
		std::cout<<result<<std::endl;
		std::cin>>a;
	}
	return 0;
}