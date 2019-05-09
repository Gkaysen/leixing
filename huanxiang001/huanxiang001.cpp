// huanxiang001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CTestCopy
{
private:	
	int x;
	int y;
public:
    CTestCopy(int a, int b);
	CTestCopy(CTestCopy & om);
	int setXY(int a, int b);
	void display();
};
CTestCopy::CTestCopy(int a, int b) {
	x = a;
	y = b;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om. x * 2;
	y = om. y * 2;
	cout << "**********" << endl;
}
int CTestCopy::setXY(int a, int b)
{
	x = a;
	y = b;
	return 0;
}
void CTestCopy::display()
{
	cout << "x=" << x << "y=" << y << endl;
}
void myTest(CTestCopy temp)
{
	temp.display();
}

int main()
{
	CTestCopy ot(100, 200);
	myTest(ot);

    return 0;
}

