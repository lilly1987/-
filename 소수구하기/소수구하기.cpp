#include <iostream>
#include <cstdio>
#include <cmath>
#include <memory.h>

using namespace std;

void eratosthenes(unsigned int n)
{	

}

int main()
{
	// �Է°�
	unsigned int n; 
	cout << "�O�� �Ҽ���:";
	cin >> n;	

	// ���� n�� 1���� �۰ų� ������ �Լ� ����
	if (n <= 1) return 0;


	//
	bool* isPrime;
	isPrime = new bool[n+1]; //�迭 ��ȣ�� 0���� ���۵����� ���������� �����ϱ����� +1
	memset(isPrime, true, sizeof(isPrime)); // �ϴ� ���δ� �ʱ�ȭ
	isPrime[0] = isPrime[1] = false; //�迭��ȣ0�� 1�� ������
	
	// �Է°��� ��Ʈ��
	int sqrtn = int(sqrt(n));
	//for(int i=2; (i*i)<=n; i++) //������� ������ ��������. �ƹ����� �Ź� �����ϴ°ͺ��� �������� ����ϴ°� �̵��̰���
	for (int i = 2; i <= sqrtn; i++)
		if (isPrime[i]) {
		cout << "�Ҽ� �ƴ� �� :"<<i<<endl;
			for (int j = i * i; j <= n; j += i) {
				cout << j << ",";
				isPrime[j] = false;
			}
		cout << endl<< endl;
		}

	//��� ���
	cout << "�Ҽ� :: " ;
	for (int i = 2; i <= n; i++)
		if (isPrime[i])
			cout <<  i << ",";
	cout << endl;

	return 0;
}

