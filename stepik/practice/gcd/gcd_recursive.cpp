#include <cassert>
#include <iostream>
#include <cstdint>

template <class Int>
Int gcd(Int a, Int b) {
	assert(a > 0);

    if (b > 0) return gcd(b, a%b);
    return a;
}

int main(void) {
	int a, b;
	std::cin >> a >> b;
	// std::cout << gcd(2*1000000000, 1999999998) << "\n";
	std::cout << gcd(a, b) << "\n";
	return 0;
}
