#include<bits/stdc++.h>

using namespace std;

int Verifica(int v[5]) {
    int cont = 0,op;
    for(int i = 0; i < 5; i++) {
        if(v[i] <= 127) {
            op = i;
            cont++;
        }
    }
    if(cont == 1)
        return op;
    else
        return -1;
}
int main() {
    int n,vet[5];
    cin >> n;
    while(n > 0) {
        int a = n;
        while(a > 0) {
            for(int i = 0; i < 5; i++)
                cin >> vet[i];
            int x = Verifica(vet);
            if(x == 4)
                cout << "E" << endl;
            else if(x == 0)
                cout << "A" << endl;
            else if(x == 1)
                cout << "B" << endl;
            else if(x == 2)
                cout << "C" << endl;
            else if(x == 3)
                cout << "D" << endl;
            else
                cout << "*" << endl;
            a--;
        }
        cin >> n;
    }
}
