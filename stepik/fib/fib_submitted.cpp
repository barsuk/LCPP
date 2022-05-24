#include <cassert>
#include <iostream>

class Fibonacci {
	public:
		static int get(int n) {
			assert(n >= 0);
			int a[41] = {0, 1};

			if (n == 0 || n == 1) return n;

			for (int i = 2; i < n + 1; i++) {
				a[i] = a[i - 1] + a[i - 2];
			}

			return a[n];
		}
};

int main(void) {
	int n;
	std::cin >> n;
	std::cout << Fibonacci::get(n) << std::endl;
	return 0;
}
