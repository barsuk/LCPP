#include <cassert>
#include <iostream>
#include <cstdint>

template <class Int>
Int gcd(Int a, Int b) {
	assert(a > 0 && b > 0);

    Int current_gcd = 1;
    for (Int d = 2; d <= a && d <= b; d++) {
        if (a % d == 0 && b % d == 0) {
            current_gcd = d;
        }
    }
    return current_gcd;
}

int main(void) {
	int a, b;
	std::cin >> a >> b;
	// std::cout << gcd(2*1000000000, 1999999998) << "\n";
	std::cout << gcd(a, b) << "\n";
	return 0;
}
