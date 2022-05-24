// Given a number 1 <= n <= 10^7
// Returns the last digit of n-th Fibonacci number
#include <cassert>
#include <iostream>

class Fibonacci {
	public:
		static int get_last_digit(int n) {
			assert(n >= 1);

			n %= 60;

			if (n == 0 || n == 1) return n;

			int a = 0;
			int b = 1;
			int i = 0;

			while (i < n) {
				std::swap(a, b);
				a += b;
				a %= 10;
				++i;
			}

			return a;
		}
};

int main(void) {
	int n;
	std::cin >> n;
	int r;
	r = Fibonacci::get_last_digit(n);
	std::cout << r << std::endl;
	return 0;
}
