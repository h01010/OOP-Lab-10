/*
(�ǽ� 2) �ǽ� 1���� ������ swap template�� std::string Ÿ���� �Է� ���� ó�� �����ϵ��� �ڵ带 �߰��ϼ���(��Ʈ: template specialization)

< ����� >
a: 2, b : 1
c : 4.4, d : 3.3
e : Hello, f : World

	----------------------------------------------
*/

#include <iostream>
#include <string>
	/* ....(�ǽ�1)���� ������ template swap ....*/

	/* ... (�߰�) template swap�� string type specialization ... */

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

	swapa<int>(a, b); //swap(a,b)�� ����
	//���� ���� swap�� c++���� �����ϴ� �Լ�...�����Բ��� �ǵ��� �ٰ� �ƴմϴ�....
	swapa<float>(c, d); //swap(c,d)�� ����

   //(�߰�) e, f�� swap�� �����ϵ��� swap template ȣ��


	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "e: " << e << ", f: " << f << std::endl;

	return 0;
}
