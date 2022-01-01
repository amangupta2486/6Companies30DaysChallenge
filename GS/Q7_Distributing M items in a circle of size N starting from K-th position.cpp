#include <iostream>
using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	
	int q=m%n;
	
	cout<<q+k-1<<endl;
	
	return 0;
}
