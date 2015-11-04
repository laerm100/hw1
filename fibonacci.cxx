
#include<iostream>

using namespace std;
int main () {
    int N;
cout <<"Bitte gebe N ein: N="<< endl;
cin >> N;

int i, fi, f0, f1;
 
f0=0;
f1=1;
    if (N==0) {
	fi=f0;
	}
    if (N==1) {
	fi=f1;
	}
    else for (i=1; i<N; i++) {
	fi=f1+f0;
	f0=f1;
	f1=fi;
	}
    cout<<"Das Ergebnis lautet: fi=" <<fi<< endl;
    return 0;
    }
