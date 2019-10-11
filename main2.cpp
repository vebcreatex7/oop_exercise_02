#include "TRational2.h"

int main()
{
	int a, b, c, d;
	char z;
	std::cin >> a >> z >> b >> c>> z >> d;
	if (b == 0 || d == 0) {
		std::cout << "Error. Division by zero\n";
		return 0;
	}
	TRational r1(a,b), r2(c,d), ans;

	ans.Add(r1, r2);
	ans.Sub(r1, r2);
	ans.Mul(r1, r2);
	ans.Div(r1, r2);
	r1.Compare(r2);
}