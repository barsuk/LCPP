#include <cassert>
#include <iostream>

class Fibonacci {
	public:
		static int get(int n) {
			assert(n >= 0);
			int a[41] = {0, 1};

			if (n == 0 || n == 1) return n;

			if (a[n] != 0) return a[n];

			a[n] = Fibonacci::get(n-1) + Fibonacci::get(n-2);

			return a[n];
		}
};

int main(void) {
	int n;
	std::cin >> n;
	std::cout << Fibonacci::get(n) << std::endl;
	return 0;
}
