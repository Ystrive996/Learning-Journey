#include <iostream>
using namespace std;

void move(int, int, int, int [20][20], int&, int&);
void printFloor(int[20][20]);
int main()
{
	int floor[20][20] = { 0 };
	int atri = 0;//海龟状态参量 0-up 1-down
	int x = 0;
	int y = 0;
	int dir = 0;//方向参量 0-右 1-下 2-左 3-上
	int setp = 0;//步长参量
	int command = 0;
	do {
		cout << "Enter command (9 to end input): ";
		cin >> command;
		switch (command) {
		case 1:atri = 0; break;
		case 2:atri = 1; break;
		case 3:dir += 1; break;
		case 4:dir -= 1; break;
		case 5:cin >> setp; move(atri, dir, setp, floor, x, y); break;//move 声明？
		case 6:cout << "\nThe drawing is: \n" << endl; printFloor(floor); break;

		}
	} while (command != 9);

}

void move(int atri, int dir, int setp, int floor[20][20], int &x, int &y) {
    if (atri == 1) {
        switch (dir % 4) {
        case 0:
            for (int i = 0; i < setp; ++i) {
                floor[x ][y + i] = 1;
            }
            y += setp;
            break;
        case 1:
            for (int i = 0; i < setp; ++i) {
                floor[x + i][y ] = 1;
            }
            x += setp;
            break;
        case 2:
            for (int i = 0; i < setp; ++i) {
                floor[x ][y-i] = 1;
            }
            y -= setp;
            break;
        case 3:
            for (int i = 0; i < setp; ++i) {
                floor[x - i][y ] = 1;
            }
            x -= setp;
            break;
        }
    }
    return;
}

void printFloor(int floor[20][20]) {
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j)
		{
			if (floor[i][j] == 1)
				cout << "#";
			else
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}