#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes) {
	asm volatile(
			"mov %0, %%rax\n"
			"mov $0x4005f6, %%rdi\n"
			"loop_start:\n"
			"cmp $0, %%rax\n"
			"je loop_end\n"
			"dec %%rax\n"
			"movzb (%%rdi), %%eax\n"
			"printf \"%.2x \", %%eax\n"
			"inc %%rdi\n"
			"jmp loop_start\n"
			"loop_end:\n"
			:
			: "r" (num_bytes)
			: "%rax", "%rdi", "%eax", "memory"
		    );
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Error\n");
		return 1;
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0) {
		printf("Error\n");
		return 2;
	}

	print_opcodes(num_bytes);
	printf("\n");

	return 0;
}

