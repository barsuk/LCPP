// Given two numbers 1 <= a,b <= 2*10^9
// Returns their greatest common divisor (GCD)
#include <cassert>
#include <iostream>

template <class Int>
Int gcd(Int a, Int b) {
	assert(a > 0 && b > 0);

	if (b > a) std::swap(a, b);

	while (a > 1) {
		a %= b;
		if (a == 0) return b;
		if (a == 1) return 1;
		std::swap(a, b);
	}

	return 1;
}

int main(void) {
	int a, b;
	std::cin >> a >> b;
	std::cout << gcd(a, b) << "\n";
	return 0;
}
