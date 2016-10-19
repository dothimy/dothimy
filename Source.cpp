#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct oto
{
	string hang;
	string BKS;
	double dungtich;
	string loai;
	void hienthi();
};
void nhap(oto &c)
{
	cout << " nhap hang xe";
	getline(cin, c.hang);
	cout << " nhap BKS";
	getline(cin, c.BKS);
	cout << " nhap loai";
	getline(cin, c.loai);
	cout << " nhap dungtich";
	cin >> c.dungtich;
	cin.ignore();

}
void inramanhinh(oto c)
{   
	cout << "hang" << c.hang << endl;
	cout << "BKS" << c.BKS << endl;
	cout << "loai" << c.loai << endl;
	cout << "dungtich" << c.dungtich << endl;
}

int menu()
{
	system("cls");
	cout << "*****************MENU****************" << endl;
	cout << "1. nhap thong tin tung xe " << endl;
	cout << "2. in thong tin chi tiet " << endl;
	cout << "3.in tat ca cac oto " << endl;
	cout << "4. sap xep tang " << endl;
	cout << "5.thoat" << endl;
	cout << " moi ban chon: ";
	int c = getchar();
	cin.ignore();
	return c;
}
/*void nhapmang(oto A[100], int &n)
{
	do
	{
		cout << "Nhap so oto: ";
		cin >> n;
	} 
	while (n <= 0 || n > 100);

	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin oto thu " << i << ": " << endl;

		nhap(A[i]);
	}
}
*/
void InMang(oto A[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl << "---------------------------" << endl;

		inramanhinh(A[i]);
		cout << endl;
	}
}
int main()
{
	oto mangOto[100];
	int n = 0,c;

	//nhapmang(mangOto, n);
	//InMang(mangOto, n);
	do {
		 c = menu();
		switch (c)
		{
		case '1':nhap(mangOto[n]);
			n++;
			break;
		case'2': break;
		case'3':InMang(mangOto, n);
			break;
		case'4': break;


		}
	
	_getch();
	} while (c != '5');


	return 0;
}






/*#include<iostream>
#include<window>
using namespace std;
int main()
{
	cout << "------------MENU------------" << endl;
	cout << " 1. keo " << endl;
	cout << " 2. bua " << endl;
	cout << " 3. la " << endl;
	cout<<"----------------------------------" << endl;
	int X;
	cout << " moi ban chon" << endl;
	cin >> X;
	if (X == 1)
	{
		cout << " ban da chon keo" << endl;
	}
	else if (X == 2)
	{
		cout << "ban da chon bua" << endl;
	}
	else if (X == 3)
	{
		cout << " ban da chon la" << endl;
	}
	cout << "loading" << endl;
	sleep(1000);

	cout << ".";
	cout << ".";
	cout << ".";

	//return 0;
	system("pause");
}

*/














/* bt nhập vào một số kiểm tra xem số đó có phải số chính phương hay không*/
/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
	int x,a,b;
	cout << "moi ban nhap vao mot so " << endl;
	cin >> x;
	a = sqrt(x);
	b = pow(a, 2);
	if (b == x)
	{ 
		cout << "la so chinh phuong";
	}
	else cout << "khong phai la so chinh phuong";
	system("pause");
}
*/















/* bt  nhập vào một số không quá chín chữ số ,
 in ra cách đọc các chữ số đó */
/*#include<iostream>
using namespace std;
int main( int &temp)
{
	int x;
	cout << " nhap so x : " << endl; 
	cin >> x;
	int soluongchuso = log10((float)x) + 1;
	return 0;
	if (soluongchuso > 9)
	{
		cout << " khong xu ly";

	}
	else
	{
		if (soluongchuso == 3)
		{
			temp = x / 100;
			
		}
		if (temp == 1)
		{
			cout << "mot tram";
		}
		else if (temp == 2)
		{
			cout << "hai tram";
		}
		else if (temp == 3)
		{
			cout << "ba tram";
		}
		else if (temp == 4)
		{
			cout << "bon tram";
		}
		else if (temp == 5)
		{
			cout << "nam tram";
		}
		else if (temp == 6)
		{
			cout << "sau tram";
		}
		else if (temp == 7)
		{
			cout << "bay tram";
		}
		else if (temp == 8)
		{
			cout << "tam tram";
		}
		else if (temp == 9)
		{
			cout << "chin tram";
		}
		soluongchuso--;
		x %= 100;

		if (soluongchuso == 2)
		{
			temp = x/ 10;
			if (temp == 1)
			{
				cout << "muoi";
			}
			else if (temp == 2)
			{
				cout << "hai muoi";
			}
			else if (temp == 3)
			{
				cout << "ba muoi";
			}
			else if (temp == 4)
			{
				cout << "bon muoi";
			}
			else if (temp == 5)
			{
				cout << "nam muoi";
			}
			else if (temp == 6)
			{
				cout << "sau muoi";
			}
			else if (temp == 7)
			{
				cout << "bay muoi";
			}
			else if (temp == 8)
			{
				cout << "tam muoi";
			}
			else if (temp == 9)
			{
				cout << "chin muoi";
			}
		}
	
		soluongchuso--;

	
	
		if (soluongchuso == 1)
		{
			temp = x % 10;
		}
		if (temp == 1)
		{
			cout << "mot";
		}
		else if (temp == 2)
		{
			cout << "hai";
		}
		else if (temp == 3)
		{
			cout << "ba";
		}
		else if (temp == 4)
		{
			cout << "bon";
		}
		else if (temp == 5)
		{
			cout << "nam";
		}
		else if (temp == 6)
		{
			cout << "sau";
		}
		else if (temp == 7)
		{
			cout << "bay";
		}
		else if (temp == 8)
		{
			cout << "tam";
		}
		else if (temp == 9)
		{
			cout << "chin";
		}

		system("pause");
	}
}
*/