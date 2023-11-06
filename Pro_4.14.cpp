#include <iostream>
using namespace std;

class Message {
public:
    Message() {
        cout << "Object is created" << endl;
    }

    ~Message() {
        cout << "Object is destroyed" << endl;
    }
};

int main() {
    Message m;

    cout << "Hello, world!" << endl;

    return 0;
}