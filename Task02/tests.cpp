#include "tests.h"
void print(int a, int b, int c, double root_1, double root_2 , bool result) {
	cout << "A = " << a
		<< ", B = " << b
		<< ", C = " << c
		<< ", Root1 = " << root_1
		<< ", Root 2 = " << root_2
		<< "\t--> " << (result ? "Pass" : "Fail")
		<< endl;
}

void test01() {
	int a = 1;
	int b = 8;
	int c = 7;

	double root_1, root_2;
	bool result_expected = true;
	bool result_actual = check_roots(a, b, c, root_1, root_2);

	print(a, b, c, root_1, root_2, result_expected == result_actual);
}

void test02() {
	int a = 1;
	int b = -8;
	int c = 7;

	double root_1, root_2;
	bool result_expected = true;
	bool result_actual = check_roots(a, b, c, root_1, root_2);

	print(a, b, c, root_1, root_2, result_expected == result_actual);
}

void test03() {
	int a = -3;
	int b = 8;
	int c = 3;

	double root_1, root_2;
	bool result_expected = true;
	bool result_actual = check_roots(a, b, c, root_1, root_2);

	print(a, b, c, root_1, root_2, result_expected == result_actual);
}

void test04() {
	int a = 1;
	int b = 2;
	int c = 1;

	double root_1, root_2;
	bool result_expected = true;
	bool result_actual = check_roots(a, b, c, root_1, root_2);

	print(a, b, c, root_1, root_2, result_expected == result_actual);
}

void test05() {
	int a = 1;
	int b = 2;
	int c = 3;

	double root_1, root_2;
	bool result_expected = false;
	bool result_actual = check_roots(a, b, c, root_1, root_2);

	print(a, b, c, root_1, root_2, result_expected == result_actual);
}