#include <iostream>

using namespace std;

void hanoi(int num, int from, int by, int to) //원판갯수, 출발지, 경유지, 목적지
{
	if (num == 1)
		cout << from << "번 에서" << " " << to << "번 으로" << endl;	//원판이 1개면 그냥 출력
	else
	{
		hanoi(num - 1, from, to, by);		//기둥1의 num-1개의 원판을 기둥2로 옮기는 과정
		cout << from << "번 에서" << " " << to << "번 으로" << endl;	//기둥1의 1개의 원판을 기둥3으로 옮기는 출력
		hanoi(num - 1, by, from, to);		//기둥2의 num-1의 원판을 기둥3으로 옮기는 과정
	}
}

int main()
{
	int num;				//원판의 갯수
	cin >> num;
	int a = pow(2, num) - 1; //최소 이동 횟수 a 계산 pow는 2^n(제곱) 계산
	cout << a << endl;
	hanoi(num, 1, 2, 3);
}

