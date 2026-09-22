#include <iostream>
using namespace std;

class DataStructure{
    public:
    //2.1 兔子繁殖问题  1对兔子，不死，第三个月可以生一对，问n个月后有多少对兔子
        int rabbit_popullation(int n){
    if (n==1||n==2)
    {
        return 1;
    }
    else
        return rabbit_popullation(n - 1) + rabbit_popullation(n - 2);
        }
};

int main()
{
    DataStructure ds;
    cout<<ds.rabbit_popullation(10)<<endl;
}
