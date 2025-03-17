#include "logic.h"
bool check_roots(int a, int b, int c, double& root_1, double& root_2) {
	double D = pow(b, 2) - 4 * a * c;
	/*std::cout << "\nD = " << D << std::endl;
	std::cout << "b in 2 = " << pow(b, 2) << std::endl;
	std::cout << "4 * a * c = " << 4 * a * c << std::endl;*/
	/*std::cout << " -1 * b + sqrt(D) = " << -1 * b + sqrt(D) << std::endl;
	std::cout << " -1 * b - sqrt(D) = " << -1 * b - sqrt(D) << std::endl;
	std::cout << " ( -1 * b + sqrt(D)) / (2 * a) = " << (-1 * b + sqrt(D)) / (2 * a) << std::endl;
	std::cout << " ( -1 * b - sqrt(D)) / (2 * a) = " << (-1 * b - sqrt(D)) / (2 * a) << std::endl;*/

	if (D < 0) {
		root_1 = 0;
		root_2 = 0;
		return false;
	}
	else if (D == 0) {
		root_1 = -1 * b / (2 * a);
		root_2 = root_1;
		return true;
	}
	else {
		root_1 = ( -1 * b + sqrt(D)) / (2 * a);
		root_2 = ( -1 * b - sqrt(D)) / (2 * a);
		return true;
	}
}