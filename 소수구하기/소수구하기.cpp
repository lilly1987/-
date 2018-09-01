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
	// 입력값
	unsigned int n; 
	cout << "찿을 소수값:";
	cin >> n;	

	// 만일 n이 1보다 작거나 같으면 함수 종료
	if (n <= 1) return 0;


	//
	bool* isPrime;
	isPrime = new bool[n+1]; //배열 번호가 0부터 시작되지만 개념적으로 쉽게하기위해 +1
	memset(isPrime, true, sizeof(isPrime)); // 일단 전부다 초기화
	isPrime[0] = isPrime[1] = false; //배열번호0과 1은 버리기
	
	// 입력값의 루트값
	int sqrtn = int(sqrt(n));
	//for(int i=2; (i*i)<=n; i++) //어느쪽이 성능이 좋으려나. 아무래도 매번 곱샘하는것보단 변수값을 사용하는게 이득이겠지
	for (int i = 2; i <= sqrtn; i++)
		if (isPrime[i]) {
		cout << "소수 아닌 값 :"<<i<<endl;
			for (int j = i * i; j <= n; j += i) {
				cout << j << ",";
				isPrime[j] = false;
			}
		cout << endl<< endl;
		}

	//결과 출력
	cout << "소수 :: " ;
	for (int i = 2; i <= n; i++)
		if (isPrime[i])
			cout <<  i << ",";
	cout << endl;

	return 0;
}

