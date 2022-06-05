#include "abstract.h"


int main() {

	Student s1(
		"Ivan",
		"Ivan",
		"Ivanovich",
		22,
		1
	);
	

	Boss b1(
		"Ivan",
		"Ivan",
		"Ivanovich",
		22,
		1000
	);
	s1.print();
	b1.print();

	return 0;
}