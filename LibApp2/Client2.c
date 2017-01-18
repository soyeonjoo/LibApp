//<> 쓸경우 지정 디렉토리에서만 찾음

#include<Swap.h>
#include<print.h>
void main() {
	int n1 = 100;
	int n2 = 200;
	Print(n1, n2);
	Swap(&n1, &n2);
	Print(n1, n2);

}