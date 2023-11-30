#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<double> calc;

    char a;
    double b;
    double c = 0.0;
    cout << "-1 to calculate" << endl;
    cout<< "-2 to close" << endl;

    do {
    cin >> a;

    switch (a){
    case '+':
        while (true){
        cin >> b;
        calc.push_back(b);
        if (b == -1){
        break;
        }
        }
        calc.pop_back();
        for (int i = 0; i < calc.size(); i++){
        b += calc[i];
        }
        cout << b << endl;
        break;

    case '-':
        while (true){
        cin >> b;
        calc.push_back(b);
        if (b == -1){
        break;
        }
        }
        calc.pop_back();
        for (int i = 0; i < calc.size(); i++){
        b -= calc[i];
    }
        cout << b << endl;
        break;

    case 'x':
        while (true){
        cin >> b;
        calc.push_back(b);
        if (b == -1){
        break;
        }
    }
    calc.pop_back();
    for (int i = 0; i < calc.size(); i++){
    b *= calc[i];
    }
    cout << b << endl;
    break;
    case '/':
        while (true){
        cin >> b;
        calc.push_back(b);
        if (b == -1){
        break;
        }
    }
    calc.pop_back();
    for (int i = 0; i < calc.size(); i++){
    b /= calc[i];
    }
    cout << b << endl;
    break;
} 
} while (a != -2);
    return 0;
}