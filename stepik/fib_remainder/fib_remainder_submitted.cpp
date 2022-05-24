// Given a number 1 <= n <= 10^18
// Given a second number 2 <= m <= 10^5
// Returns the remainder of (n-th Fibonacci number) / m
#include <cassert>
#include <iostream>
#include <cmath>

class Fibonacci {
	public:
		static int get_remainder(long long n, int m) {
			assert(n >= 1);
			assert(m >= 2);

			// 1. Определяем период Пизано
			int a = 1;
			int b = 1;
			int piz = 3;

			while (!(a == m - 1 && b == 1)) {
				a += b;
				a %= m;
				++piz;
				std::swap(a, b);
			}

			// 2. Получаем остаток от n mod piz
			n %= piz;
			if (n == 0 || n == 1) return n;

			int c = 0;
			int d = 1;
			int i = 0;

			while (i < n) {
				std::swap(c, d);
				c += d;
				c %= m;
				++i;
			}

			return c;
		}
};

int main(void) {
	long long n;
	int m;
	std::cin >> n >> m;
	std::cout << Fibonacci::get_remainder(n, m) << std::endl;

	return 0;
}
