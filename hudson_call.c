#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE1(hudson_call, char *, message){ //HW3 IMPLEMENT SYS CALL
	printk(KERN_INFO "hudson has called hudson_call with message=%s\n", message);
	return 0;
}
