
#include <iostream>
using namespace std;

class food {
public:
    int amount = 40;
    int tempreture = 70;
    food(int a, int t) {
        amount = a;
        tempreture = t;
        cout << "call constructor";
    }
    void eat() {
        cout << "list amount and tempreture of your food";
        cout << amount;
        cout << tempreture;

    }
    ~food() {
        cout << "call class distructor";
    }

};
class breakfast : public food{
    breakfast() {
        cout<< "call breakfast";
    }
    void eat() {
        cout << "eat";
        cout << amount;
        cout << tempreture;

    }

};

int main()
{
    breakfast egg;
    egg.amount = 30;
    egg.tempreture = 37;
    cout << "my break fast is omlet and bread";
    cout << egg.amount;
    cout << egg.tempreture;
}