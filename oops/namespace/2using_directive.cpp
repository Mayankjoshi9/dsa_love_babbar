// calling namespace function using directives

#include <iostream>

// using namespace std;
// first name space
namespace first_space
{
void func()
{
	std::cout << "Inside first_space" <<std:: endl;
}
}
using namespace first_space;

// second name space
namespace second_space
{
void func()
{
	std::cout << "Inside second_space" << std::endl;
}
}
int main ()
{
// This calls function from first name space.
func();
return 0;
}
