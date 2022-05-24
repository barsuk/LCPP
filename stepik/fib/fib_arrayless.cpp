// got from discussions, decision by Alexander Myasnikov
#include <cassert>
#include <iostream>

class Fibonacci {
	public:
		static int get(int n) {
			assert(n >= 0);

			int a = 0;
			int b = 1;
			int i = 0;

			while (i < n) {
				std::swap(a, b);
				a += b;
				++i;
			}

			return a;
		}
};

int main(void) {
	int n;
	std::cin >> n;
	std::cout << Fibonacci::get(n) << std::endl;
	return 0;
}
