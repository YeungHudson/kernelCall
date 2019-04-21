#include <unistd.h>

int main()
{
	syscall(335, "I called a syscall\n");
	return 0;
}
