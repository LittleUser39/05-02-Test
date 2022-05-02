#include <iostream>

using namespace std;

void hanoi(int num, int from, int by, int to) //���ǰ���, �����, ������, ������
{
	if (num == 1)
		cout << from << "�� ����" << " " << to << "�� ����" << endl;	//������ 1���� �׳� ���
	else
	{
		hanoi(num - 1, from, to, by);		//���1�� num-1���� ������ ���2�� �ű�� ����
		cout << from << "�� ����" << " " << to << "�� ����" << endl;	//���1�� 1���� ������ ���3���� �ű�� ���
		hanoi(num - 1, by, from, to);		//���2�� num-1�� ������ ���3���� �ű�� ����
	}
}

int main()
{
	int num;				//������ ����
	cin >> num;
	int a = pow(2, num) - 1; //�ּ� �̵� Ƚ�� a ��� pow�� 2^n(����) ���
	cout << a << endl;
	hanoi(num, 1, 2, 3);
}

