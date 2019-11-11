/*
(실습 2) 실습 1에서 구현한 swap template이 std::string 타입의 입력 또한 처리 가능하도록 코드를 추가하세요(힌트: template specialization)

< 결과값 >
a: 2, b : 1
c : 4.4, d : 3.3
e : Hello, f : World

	----------------------------------------------
*/

#include <iostream>
#include <string>
	/* ....(실습1)에서 구현된 template swap ....*/

	/* ... (추가) template swap의 string type specialization ... */

void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapFloat(float& a, float& b) {
	float temp = a;
	a = b;
	b = temp;
}

template <typename T>
void swapa(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
template<>
void swapa(std::string& a, std::string& b) {
	std::string temp = a;
	a = b;
	b = temp;
}
	int main() {
	int a = 1;
	int b = 2;
	float c = 3.3;
	float d = 4.4;
	std::string e = "World";
	std::string f = "Hello";

	swapa<int>(a, b); //swap(a,b)도 가능
	//지금 여기 swap은 c++에서 제공하는 함수...교수님께서 의도된 바가 아닙니다....
	swapa<float>(c, d); //swap(c,d)도 가능

   //(추가) e, f의 swap이 가능하도록 swap template 호출


	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "e: " << e << ", f: " << f << std::endl;

	return 0;
}
