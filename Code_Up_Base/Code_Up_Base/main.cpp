#include <iostream>

using namespace std;

void Solution51() //
{
}
int main()
{
	Solution51();
	return 0;
}

// 22/6/12
void Solution1() // "Hello" ���
{
	cout << "Hello" << endl;
}
void Solution2() // "Hello World" ���
{
	cout << "Hello World" << endl;
}
void Solution3() // "Hello\nWorld" ���
{
	cout << "Hello\nWorld" << endl;
}
void Solution4() // "'Hello'" ���
{
	cout << "\'Hello\'" << endl;
}
void Solution5() // ""Hello World"" ���
{
	cout << "\"Hello World\"" << endl;
}
void Solution6() // ""!@#$%^&*()"" ���
{
	cout << "\"!@#$%^&*()\"" << endl;
}
void Solution7() // ��� ���
{
	cout << "\"C:\\Download\\hello.cpp\"" << endl;
}
void Solution8() // Ư������ ��� (�����ڵ�)
{
	cout << "\u250C\u252C\u2510" << endl;
	cout << "\u251C\u253C\u2524" << endl;
	cout << "\u2514\u2534\u2518" << endl;
}
void Solution9() // �����޾Ƽ� ����ϱ�
{
	int inputNum = 0;

	cin >> inputNum;
	cout << inputNum;
}
void Solution10() // ���ڹ޾Ƽ� ����ϱ�
{
	string inputStr;

	cin >> inputStr;
	cout << inputStr;
}
void Solution11() // �Ǽ��޾Ƽ� ����ϱ�
{
	float fNum;
	cin >> fNum;
	cout.setf(ios::showpoint);
	cout.precision(7);
	cout << fNum;
}
void Solution12() // ���� 2�� �޾Ƽ� ����ϱ�
{
	int a, b;
	cin >> a >> b;
	cout << a << " " << b;
}
void Solution13() // ���� 2�� �޾Ƽ� �� ����ϱ�
{
	string a, b;
	cin >> a >> b;
	cout << b << " " << a;
}
void Solution14() // �Ǽ� �޾Ƽ� �ݿø� ����ϱ�
{
	float fNum;
	cin >> fNum;
	cout.setf(ios::showpoint);
	cout << fixed;
	cout.precision(2);
	cout << fNum;
}
void Solution15() // ���� �޾Ƽ� 3���� ����ϱ�
{
	int a;
	cin >> a;

	for (int i = 0; i < 3; i++)
		cout << a << " ";
}
void Solution16() // �ð� �޾Ƽ� ����ϱ�
{
	int h, m;
	cin >> h;
	cin.ignore(1, ':');
	cin >> m;
	cout << h << ":" << m;
}
void Solution17() // ����� ����ϱ�
{
	int y, m, d;
	cin >> y;
	cin.ignore(1, ':');
	cin >> m;
	cin.ignore(1, ':');
	cin >> d;

	if (y < 1000)
		cout << "0";
	if (y < 100)
		cout << "0";
	if (y < 10)
		cout << "0";
	cout << y << ".";
	if (m < 10)
		cout << "0";
	cout << m << ".";
	if (d < 10)
		cout << "0";
	cout << d;
}

void Solution18() // �ֹι�ȣ ����ϱ�
{
	int a, b, c;

	c = 100000;

	cin >> a;
	cin.ignore(1, '-');
	cin >> b;

	while (c > a)
	{
		if (a < c)
			cout << "0";
		c /= 10;
	}
	cout << a << b;
}
void Solution19() // ���ڿ� �޾Ƽ� ����ϱ�
{
	string inputStr;
	cin >> inputStr;
	cout << inputStr;
}
void Solution20() // ���ڿ� �޾Ƽ� ����ϱ�2
{
	char inputStr[2000];
	cin.getline(inputStr, 2000);
	cout << inputStr;
}
void Solution21() // �Ǽ� �޾Ƽ� ���� �Ҽ� ���� ����ϱ�
{
	int a, b;
	cin >> a;
	cin.ignore(1, '.');
	cin >> b;

	cout << a << endl << b;
}

void Solution22() // ���ڿ� ���� ���� ����ϱ�
{
	string a;

	cin >> a;

	for (unsigned i = 0; i < a.size(); i++)
	{
		cout << "\'" << a[i] << "\'" << endl;
	}
}

void Solution23() // �ڸ������� ����ϱ�
{
	int a = 0;
	int b = 10000;

	cin >> a;

	while (b > 0)
	{
		int c = a / b;
		cout << "[" << c * b << "]" << endl;

		a -= c * b;
		b /= 10;
	}
}

void Solution24() // ��,��,�� �߿� �и� ����ϱ�
{
	int h, m, s;

	cin >> h;
	cin.ignore(1, ':');
	cin >> m;
	cin.ignore(1, ':');
	cin >> s;

	cout << m;

}

void Solution25() // ����� ǥ�� ����
{
	int y, m, d;
	int yCount = 1000;
	int mCount = 10;
	int dCount = 10;

	cin >> y;
	cin.ignore(1, '.');
	cin >> m;
	cin.ignore(1, '.');
	cin >> d;

	while (dCount > d)
	{
		if (dCount > d)
			cout << 0;
		dCount /= 10;
	}

	cout << d << "-";


	while (mCount > m)
	{
		if (mCount > m)
			cout << 0;
		mCount /= 10;
	}

	cout << m << "-";

	while (yCount > y)
	{
		if (yCount > y)
			cout << 0;
		yCount /= 10;
	}

	cout << y;

}

void Solution26() // �ڷ������� ���
{
	unsigned int a;

	cin >> a;
	cout << a;

}

void Solution27() // �Ǽ� �ڷ��� ����
{
	double a;

	cin >> a;
	cout << fixed;
	cout.precision(11);
	cout << a;
}
void Solution28() // ���� �ڷ��� ����
{
	long long int a;

	cin >> a;
	cout << a;
}

void Solution29() // 10���� -> 8����
{
	int a;

	cin >> a;
	cout << oct << a;
}

void Solution30() // 10���� -> 16����
{
	int a;

	cin >> a;
	cout << hex << a;
}
void Solution31() // 10���� -> 16���� �빮��
{
	int a;

	cin >> a;
	cout << hex << uppercase << a;
}
void Solution32() // 8���� -> 10����
{
	int a;
	cin >> oct >> a;
	cout << dec << a;
}

void Solution33() // 16���� -> 8����
{
	int a;
	cin >> hex >> a;
	cout << oct << a;
}
void Solution34() // ������ -> 10����
{
	char a;
	cin >> a;
	cout << int(a);
}
void Solution35() // ���� -> ����
{
	int a;
	cin >> a;
	cout << char(a);
}
void Solution36() // ��������
{
	long long int a, b;
	cin >> a >> b;
	cout << a + b;
}
void Solution37() // ��������2
{
	long long int a, b;
	cin >> a >> b;
	cout << a + b;
}
void Solution38() // ��ȣ�ٲٱ�
{
	int a;
	cin >> a;
	cout << a * -1;
}
void Solution39() // ��������
{
	char a;
	cin >> a;
	cout << char(a + 1);
}
void Solution40() // �� ���ϱ�
{
	int a, b;
	cin >> a >> b;
	cout << a / b;
}

void Solution41() // �� ���ϱ�
{
	int a, b;
	cin >> a >> b;
	cout << a % b;
}
void Solution42() // ��������
{
	long long int a;
	cin >> a;
	cout << ++a;
}
void Solution43() // ���տ���
{
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << fixed;
	cout.precision(2);
	cout << float(a) / float(b) << endl;
}
void Solution44() // �հ� ���
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b + c << endl;
	cout << fixed;
	cout.precision(1);
	cout << (float(a) + float(b) + float(c)) / 3.f << endl;
}
void Solution45() // ��Ʈ���� ��
{
	int a;
	cin >> a;
	cout << (a << 1);
}
void Solution46() // ��Ʈ���� ����
{
	int a, b;
	cin >> a >> b;
	cout << (a << b);
}
void Solution47() // �񱳿���
{
	int a, b;
	cin >> a >> b;
	cout << (a > b);
}
void Solution48() // �񱳿���
{
	int a, b;
	cin >> a >> b;
	cout << (a == b);
}
void Solution49() // �񱳿���
{
	int a, b;
	cin >> a >> b;
	cout << (a <= b);
}
void Solution50() // �񱳿���
{
	int a, b;
	cin >> a >> b;
	cout << (a != b);
}
