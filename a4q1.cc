#include <iostream>
#include <vector>
using namespace std;

struct Arith {
    char operation;
    int value;
    Arith( char operation, int value) : operation{operation}, value{value} {}
};
int main() {
    int x = 0;
    int val;
    std::vector <Arith> y;
    while(true) {
        char op = 'q';
        if (cin.eof() || cin.fail()){
            break;
        }
    cin >> op;
    if (op == 'n'){
        for ( const auto & i : y ) {
            if (i.operation == '+'){
                x = x + i.value;
            } else if (i.operation == '-'){
                x = x - i.value;
            }else if (i.operation == '*'){
                x = x * i.value;
            }else if (i.operation == '/'){
                x = x / i.value;
            } 
        }
        cout << x << endl;
    } else if(op == 's'){
        if (y.size() != 0){
            y.clear(); 
        }
         cin >> x;
    } else if (op == '+') {
        cin >> val;
        y.emplace_back (op, val);
    }else if (op == '-') {
        cin >> val;
        y.emplace_back (op, val);
    }else if (op == '*') {
        cin >> val;
        y.emplace_back (op, val);
    }else if (op == '/') {
        cin >> val;
        y.emplace_back (op, val);
    } else {
        continue;
    }
 }
 cin.clear();
}

