#include <iostream>
using namespace std;

int main() {
	int T,N,P;
	for(cin >> T;T--;)
	{
		int Day[3651] = {0};
		(cin >> N >> P);
		for(int i = 0,x,tmp; i < P;i++)
			for(cin >> x,tmp = x;x <= N;)
				Day[(x+=tmp)-tmp] = 1;
		int count = 0;
		for(int i = 1;i <= N ; i++)
			count += Day[i]&& i%7 && (i%7!=6);
		cout << count <<endl;
	}
	return 0;
}
