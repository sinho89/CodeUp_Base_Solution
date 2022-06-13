#include <iostream>

using namespace std;

void Solution98() // 윤년
{
	int a;
	bool isLeap = false;
	cin >> a;

	if (a % 400 == 0)
		isLeap = true;
	else if ((a % 4 == 0) && (a % 100 != 0))
		isLeap = true;

	if (isLeap)
		cout << "Leap";
	else
		cout << "Normal";
}

void Solution99() // 30분전
{
	int h, m;
	cin >> h >> m;

	if (m < 30)
	{
		m += 30;
		
		if (h == 0)
			h = 24;
		h -= 1;
		
	}
	else
		m -= 30;

	cout << h << " " << m;
}

void Solution100() // 자릿수 구하기
{
	int a;
	int b = 0;
	cin >> a;

	while (true)
	{
		if (a <= 0)
			break;
		
		a /= 10;
		++b;
	}

	cout << b;
}

int main()
{
	Solution100();
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
// 22/6/13
void Solution50() // 비교연산
{
	int a, b;
	cin >> a >> b;
	cout << (a != b);
}
void Solution51() // 0 -> 1 / 1 -> 0
{
	int a;
	cin >> a;
	cout << !a;
}
void Solution52() // 모두 true일때
{
	bool a, b;
	cin >> a >> b;
	cout << (a && b);
}
void Solution53() // 하나라도 true일때
{
	bool a, b;
	cin >> a >> b;
	cout << (a || b);
}
void Solution54() // 참,거짓이 서로 다를때
{
	bool a, b;
	cin >> a >> b;
	cout << (a ^ b);
}
void Solution55() // 참,거짓이 서로 같을때
{
	bool a, b;
	cin >> a >> b;
	cout << (!(a ^ b));
}
void Solution56() // 둘다 거짓
{
	bool a, b;
	cin >> a >> b;
	cout << (!(a || b));
}
void Solution57() //비트단위 연산
{
	int a;
	cin >> a;
	cout << ~a;
	// ~n = -n -1
	// -n = ~n + 1
}
void Solution58() //비트단위 연산
{
	int a, b;
	cin >> a >> b;
	cout << (a & b);
}
void Solution59() //비트단위 연산
{
	int a, b;
	cin >> a >> b;
	cout << (a | b);
}
void Solution60() //비트단위 연산
{
	int a, b;
	cin >> a >> b;
	cout << (a ^ b);
}
void Solution61() //삼항연산자
{
	int a, b;
	cin >> a >> b;

	cout << (a > b ? a : b);
}
void Solution62() //삼항연산자
{
	int a, b, c, d;
	cin >> a >> b >> c;
	d = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	cout << d;
}
void Solution63() //조건문
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a % 2 == 0)
		cout << a << endl;
	if (b % 2 == 0)
		cout << b << endl;
	if (c % 2 == 0)
		cout << c << endl;
}
void Solution64() //짝홀
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
	if (b % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
	if (c % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
}
void Solution65() //짝홀 , 음양
{
	int a;
	cin >> a;

	if (a < 0)
		cout << "minus" << endl;
	else
		cout << "plus" << endl;

	if (a % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
}
void Solution66() // 점수별 등급표
{
	int a;
	cin >> a;

	if (a >= 90 && a <= 100)
		cout << "A" << endl;
	else if (a >= 70 && a <= 89)
		cout << "B" << endl;
	else if (a >= 40 && a <= 69)
		cout << "C" << endl;
	else if (a >= 0 && a <= 39)
		cout << "D" << endl;
}
void Solution67() // 점수별 등급표
{
	char a;
	cin >> a;

	switch (a)
	{
	case 'A':
		cout << "best!!!" << endl;
		break;
	case 'B':
		cout << "good!!" << endl;
		break;
	case 'C':
		cout << "run!" << endl;
		break;
	case 'D':
		cout << "slowly~" << endl;
		break;
	default:
		cout << "what?" << endl;
		break;
	}
}
void Solution68() // 월별 계절표
{
	int a;
	cin >> a;

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		cout << "winter" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "spring" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "summer" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "fall" << endl;
		break;
	}
}
void Solution69() // 0이면종료
{
	int a;

	while (true)
	{
		cin >> a;

		if (a == 0)
			break;

		cout << a << endl;
	}
}
void Solution70() // 카운트반복
{
	int a, b;
	cin >> a;

rable:
	cin >> b;
	cout << b << endl;
	--a;
	if (a != 0)
		goto rable;
}
void Solution71() // 카운트반복
{
	int a;

	while (true)
	{
		cin >> a;
		if (a == 0)
			break;
		cout << a << endl;
	}
}
void Solution72() // 카운트다운
{
	int a;
	cin >> a;
	while (true)
	{
		if (a == 0)
			break;
		cout << a << endl;
		a--;
	}
}
void Solution73() // 카운트다운
{
	int a;
	cin >> a;
	while (true)
	{
		a--;
		cout << a << endl;
		if (a == 0)
			break;
	}
}
void Solution74() // 알파벳 순차 출력
{
	char a; //97
	int b = 97;
	cin >> a;
	int c = int(a);

	while (b <= c)
	{
		cout << char(b) << " ";
		b++;
	}
}
void Solution75() // 입력 정수까지 순차 출력
{
	int a;
	cin >> a;

	for (int i = 0; i <= a; i++)
		cout << i << endl;
}
void Solution76() // 짝수 합 구하기
{
	int a;
	int sum = 0;
	cin >> a;

	for (int i = 0; i <= a; i++)
	{
		if (i % 2 == 0) sum += i;
	}
	cout << sum;
}
void Solution77() // 원하는 문자 나올때까지 반복
{
	char a;

	while (true)
	{
		cin >> a;
		cout << a << endl;

		if (a == 'q')
			break;
	}
}
void Solution78() // 마지막 합의 정수 출력
{
	int a;
	int sum = 0;
	int b = 1;
	cin >> a;

	while (true)
	{
		sum += b;

		if (sum >= a)
		{
			cout << b << endl;
			break;
		}
		++b;
	}
}
void Solution79() // 주사위 최대 경우의 수
{
	int a, b;
	cin >> a >> b;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
			cout << i << " " << j << endl;
	}
}
void Solution80() // 16진수 구구단
{
	int a;
	cin >> hex >> a;

	for (int i = 1; i <= 15; i++)
		cout << hex << uppercase << a << "*" << i << "=" << a * i << endl;
}
void Solution81() // 3 6 9 게임
{
	int a;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		if (i % 3 == 0) cout << "X ";
		else cout << i << " ";
	}
}
void Solution82() // rgb 색만들기
{
	int r, g, b;
	int cnt = 0;
	cin.tie(NULL);
	cin >> r >> g >> b;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < g; j++)
		{
			for (int k = 0; k < b; k++)
			{
				cout << i << " " << j << " " << k << "\n";
				cnt++;
			}
		}
	}
	cout << cnt;
}
void Solution83() // 저장용량 계산 (사운드)
{
	long long int h, b, c, s;
	cin.tie(NULL);
	cin >> h >> b >> c >> s;
	double long m = (((h * b * c * s) / 8.f) / 1024.f) / 1024.f;
	cout << fixed;
	cout.precision(1);
	cout << m << " MB";
}
void Solution84() // 저장용량 계산 (이미지)
{
	long long int w, h, b;
	cin.tie(NULL);
	cin >> w >> h >> b;
	double long m = (((w * h * b) / 8.f) / 1024.f) / 1024.f;
	cout << fixed;
	cout.precision(2);
	cout << m << " MB";
}
void Solution85() // Limit 합 구하기
{
	int a;
	int b = 1;
	int sum = 0;
	cin.tie(NULL);
	cin >> a;

	while (true)
	{
		sum += b;
		if (sum >= a)
			break;
		b++;
	}

	cout << sum;
}
void Solution86() // 3의 배수 골라내기
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = 1; i <= a; i++)
		if (i % 3 != 0) cout << i << " ";
}
void Solution87() // 수열
{
	int a, b, c;
	cin.tie(NULL);
	cin >> a >> b >> c;

	for (int i = 1; i < c; i++)
		a += b;

	cout << a;
}
void Solution88() // 수열2
{
	long long int a, b, c;
	cin.tie(NULL);
	cin >> a >> b >> c;

	for (int i = 1; i < c; i++)
		a *= b;

	cout << a;
}
void Solution89() // 수열3
{
	long long int a, b, c, d;
	cin.tie(NULL);
	cin >> a >> b >> c >> d;

	for (int i = 1; i < d; i++)
	{
		a *= b;
		a += c;
	}

	cout << a;
}
void Solution90() // 종합문제 1
{
	int a, b, c;
	int d = 2;
	cin.tie(NULL);
	cin >> a >> b >> c;

	while (true)
	{
		if ((d % a == 0) && (d % b == 0) && (d % c == 0))
		{
			cout << d;
			break;
		}
		d++;
	}
}
void Solution91() // 배열1
{
	int a[100] = {};
	int b = 0, c = 0;

	cin >> b;

	for (int i = 0; i < b; i++)
	{
		cin >> c;
		a[c] = a[c] + 1;
	}

	for (int i = 1; i <= 23; i++)
		cout << a[i] << " ";
}
void Solution92() // 배열2
{
	int a[10000] = {};
	int b = 0, c = 0;

	cin >> b;

	for (int i = 0; i < b; i++)
		cin >> a[i];

	for (int i = b - 1; i >= 0; i--)
		cout << a[i] << " ";
}
void Solution93() // 배열3
{
	int a[10000] = {};
	int b = 0, c = 24, d = 0;

	cin >> b;

	for (int i = 0; i < b; i++)
		cin >> a[i];

	for (int i = 0; i < b; i++)
		c = (c < a[i] ? c : a[i]);

	cout << c;
}
void Solution94() // 2차원 배열1
{
	int a[20][20] = {};
	int b = 0;
	int x = 0, y = 0;

	cin >> b;
	for (int i = 1; i <= b; i++)
	{
		cin >> x >> y;
		a[x][y] = 1;
	}

	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
void Solution95() // 2차원 배열2
{
	int a[20][20] = {};
	int b = 0;
	int x = 0, y = 0;

	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			cin >> a[i][j];
		}
	}

	cin >> b;

	for (int i = 1; i <= b; i++)
	{
		cin >> x >> y;
		for (int j = 1; j < 20; j++)
		{
			if (a[x][j] == 0) a[x][j] = 1;
			else a[x][j] = 0;
		}
		for (int j = 1; j < 20; j++)
		{
			if (a[j][y] == 0) a[j][y] = 1;
			else a[j][y] = 0;
		}
	}

	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
void Solution96() // 2차원 배열2
{
	int h, w;
	int n, l, d; // l: 길이 d: 가로0 세로1
	int x, y;
	int a[100][100] = {};

	cin >> h >> w;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> l >> d >> x >> y;

		if (d == 1) // 가로 x
		{
			for (int j = 0; j < l; j++)
			{
				a[x + j][y] = 1;
			}
		}
		else // 세로 y
		{
			for (int j = 0; j < l; j++)
			{
				a[x][y + j] = 1;
			}
		}
	}

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

}
void Solution97() // 길찾기
{
	int a[10][10] = {};
	int x = 1, y = 1;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			cin >> a[i][j];

	while (true)
	{
		if (a[y][x] == 2)
		{
			a[y][x] = 9;
			break;
		}

		a[y][x] = 9;

		int rx = a[y][x + 1];
		int dy = a[y + 1][x];

		if (rx == 0 || rx == 2)
			x += 1;
		else if (rx == 1)
		{
			if (dy == 0 || dy == 2)
				y += 1;
			else if (dy != 0)
				break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}