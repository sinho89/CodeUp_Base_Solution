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
void Solution1() // "Hello" 출력
{
	cout << "Hello" << endl;
}
void Solution2() // "Hello World" 출력
{
	cout << "Hello World" << endl;
}
void Solution3() // "Hello\nWorld" 출력
{
	cout << "Hello\nWorld" << endl;
}
void Solution4() // "'Hello'" 출력
{
	cout << "\'Hello\'" << endl;
}
void Solution5() // ""Hello World"" 출력
{
	cout << "\"Hello World\"" << endl;
}
void Solution6() // ""!@#$%^&*()"" 출력
{
	cout << "\"!@#$%^&*()\"" << endl;
}
void Solution7() // 경로 출력
{
	cout << "\"C:\\Download\\hello.cpp\"" << endl;
}
void Solution8() // 특수문자 출력 (유니코드)
{
	cout << "\u250C\u252C\u2510" << endl;
	cout << "\u251C\u253C\u2524" << endl;
	cout << "\u2514\u2534\u2518" << endl;
}
void Solution9() // 정수받아서 출력하기
{
	int inputNum = 0;

	cin >> inputNum;
	cout << inputNum;
}
void Solution10() // 문자받아서 출력하기
{
	string inputStr;

	cin >> inputStr;
	cout << inputStr;
}
void Solution11() // 실수받아서 출력하기
{
	float fNum;
	cin >> fNum;
	cout.setf(ios::showpoint);
	cout.precision(7);
	cout << fNum;
}
void Solution12() // 정수 2개 받아서 출력하기
{
	int a, b;
	cin >> a >> b;
	cout << a << " " << b;
}
void Solution13() // 문자 2개 받아서 역 출력하기
{
	string a, b;
	cin >> a >> b;
	cout << b << " " << a;
}
void Solution14() // 실수 받아서 반올림 출력하기
{
	float fNum;
	cin >> fNum;
	cout.setf(ios::showpoint);
	cout << fixed;
	cout.precision(2);
	cout << fNum;
}
void Solution15() // 정수 받아서 3연속 출력하기
{
	int a;
	cin >> a;

	for (int i = 0; i < 3; i++)
		cout << a << " ";
}
void Solution16() // 시간 받아서 출력하기
{
	int h, m;
	cin >> h;
	cin.ignore(1, ':');
	cin >> m;
	cout << h << ":" << m;
}
void Solution17() // 년월일 출력하기
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

void Solution18() // 주민번호 출력하기
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
void Solution19() // 문자열 받아서 출력하기
{
	string inputStr;
	cin >> inputStr;
	cout << inputStr;
}
void Solution20() // 문자열 받아서 출력하기2
{
	char inputStr[2000];
	cin.getline(inputStr, 2000);
	cout << inputStr;
}
void Solution21() // 실수 받아서 정수 소수 따로 출력하기
{
	int a, b;
	cin >> a;
	cin.ignore(1, '.');
	cin >> b;

	cout << a << endl << b;
}

void Solution22() // 문자열 문자 따로 출력하기
{
	string a;

	cin >> a;

	for (unsigned i = 0; i < a.size(); i++)
	{
		cout << "\'" << a[i] << "\'" << endl;
	}
}

void Solution23() // 자릿수별로 출력하기
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

void Solution24() // 시,분,초 중에 분만 출력하기
{
	int h, m, s;

	cin >> h;
	cin.ignore(1, ':');
	cin >> m;
	cin.ignore(1, ':');
	cin >> s;

	cout << m;

}

void Solution25() // 년월일 표시 변경
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

void Solution26() // 자료형문제 양수
{
	unsigned int a;

	cin >> a;
	cout << a;

}

void Solution27() // 실수 자료형 문제
{
	double a;

	cin >> a;
	cout << fixed;
	cout.precision(11);
	cout << a;
}
void Solution28() // 정수 자료형 문제
{
	long long int a;

	cin >> a;
	cout << a;
}

void Solution29() // 10진수 -> 8진수
{
	int a;

	cin >> a;
	cout << oct << a;
}

void Solution30() // 10진수 -> 16진수
{
	int a;

	cin >> a;
	cout << hex << a;
}
void Solution31() // 10진수 -> 16진수 대문자
{
	int a;

	cin >> a;
	cout << hex << uppercase << a;
}
void Solution32() // 8진수 -> 10진수
{
	int a;
	cin >> oct >> a;
	cout << dec << a;
}

void Solution33() // 16진수 -> 8진수
{
	int a;
	cin >> hex >> a;
	cout << oct << a;
}
void Solution34() // 영문자 -> 10진수
{
	char a;
	cin >> a;
	cout << int(a);
}
void Solution35() // 정수 -> 문자
{
	int a;
	cin >> a;
	cout << char(a);
}
void Solution36() // 정수연산
{
	long long int a, b;
	cin >> a >> b;
	cout << a + b;
}
void Solution37() // 정수연산2
{
	long long int a, b;
	cin >> a >> b;
	cout << a + b;
}
void Solution38() // 부호바꾸기
{
	int a;
	cin >> a;
	cout << a * -1;
}
void Solution39() // 다음문자
{
	char a;
	cin >> a;
	cout << char(a + 1);
}
void Solution40() // 몫 구하기
{
	int a, b;
	cin >> a >> b;
	cout << a / b;
}

void Solution41() // 몫 구하기
{
	int a, b;
	cin >> a >> b;
	cout << a % b;
}
void Solution42() // 증감연산
{
	long long int a;
	cin >> a;
	cout << ++a;
}
void Solution43() // 종합연산
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
void Solution44() // 합과 평균
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << a + b + c << endl;
	cout << fixed;
	cout.precision(1);
	cout << (float(a) + float(b) + float(c)) / 3.f << endl;
}
void Solution45() // 비트연산 곱
{
	int a;
	cin >> a;
	cout << (a << 1);
}
void Solution46() // 비트연산 제곱
{
	int a, b;
	cin >> a >> b;
	cout << (a << b);
}
void Solution47() // 비교연산
{
	int a, b;
	cin >> a >> b;
	cout << (a > b);
}
void Solution48() // 비교연산
{
	int a, b;
	cin >> a >> b;
	cout << (a == b);
}
void Solution49() // 비교연산
{
	int a, b;
	cin >> a >> b;
	cout << (a <= b);
}
void Solution50() // 비교연산
{
	int a, b;
	cin >> a >> b;
	cout << (a != b);
}
