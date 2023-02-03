#include <iostream>
using namespace std;

int primeNum(int num){
	if(num<2)
		return 0;
	else{
		for(int i=2; i<num/2; i++){
			if(num%i==0)
				return 0;
		}
	}
 return 1;
}

int main(){
	int i, n;
	cin>>n;

	for(i=1; i<=n; i++){
		if(primeNum(i)){
			cout<<i<<" ";
		}
	}

}
