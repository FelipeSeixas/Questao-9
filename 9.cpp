#include <iostream>
using namespace std;

bool par(int n);

bool impar(int n);

bool continuar();


bool par(int n){
	
	if (n == 0){
		return true;
	}

	if (n > 0){
		impar(n-1);
	}

	if (n < 0){
		par(-n);
	}
}

bool impar(int n){
	
	if (n == 0){
		return false;
	}

	if (n > 0){
		par(n-1);
	}

	if (n < 0){
		impar(n -1);
	}
}

bool continuar(){

    string resposta;

    do{
        cout << "Continuar (s/n)?";
        cin >> resposta;
        // cout << resposta << endl;
    }while(resposta != "s" && resposta != "n");

    return resposta.compare("s") == 0;
}


int main(){
	
	int n;

	do{
		cout << "Informe o valor de n: ";

		cin >> n;

		cout << n << endl;

		if(par(n))
			{cout << "É paaaaarrrrr!!" << endl;	}

		else
			{cout << "É impaaaaarrrrr!!" << endl;}

	} while(continuar());

}
