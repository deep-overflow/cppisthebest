#include <iostream>
using namespace std;

class seller {
private:
    int price;
    int num;
    int money;

public:
    void init(int init_price, int init_num, int init_money) {
        price = init_price;
        num = init_num;
        money = init_money;
    }
    int sale(int sell_money) {
        int sell_num = sell_money / price;
        num -= sell_num;
        money += sell_money;
        return sell_num;
    }
    void result() {
        cout<<"left: "<<num<<endl;
        cout<<"margin: "<<money<<endl<<endl;
    }
};

class buyer {
    int money;
    int num;
public:
    void init(int init_money) {
        money = init_money;
        num = 0;
    }
    void buy(seller& s, int sell_money) {
        num+=s.sale(sell_money);
        money-=sell_money;
    }
    void result() {
        cout<<"money: "<<money<<endl;
        cout<<"apple: "<<num<<endl<<endl;
    }
};

int main(void) {
    seller s;
    s.init(1000, 20, 0);
    buyer b;
    b.init(5000);
    b.buy(s, 2000);

    cout<<"seller"<<endl;
    s.result();
    cout<<"buyer"<<endl;
    b.result();
    return 0;
}