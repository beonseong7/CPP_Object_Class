#include<iostream>
#include"stock10.h"

int main()//stock10.h���� �Լ��� �����ϰ� stock10.cpp���� �ش� �Լ����� ��ɾ� ������ �ۼ��ϰ� usetstock1.cpp���� ��ü�� ������ ����Ѵ�.
{
	{
		using std::cout;
		cout << "�����ڸ� ����Ͽ� ���ο� ��ü���� �����Ѵ�.\n";
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
		stock2.show();
		cout << "stock1�� stock2�� �����Ѵ�.\n";
		stock2 = stock1;
		cout << "stock1�� stock2�� ����Ѵ�.\n";
		stock1.show();
		stock2.show();
		cout << "�����ڸ� ����Ͽ� ��ü�� �缳���Ѵ�.\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "���ŵ� stock1:\n";
		stock1.show();
		cout << "���α׷��� �����մϴ�.\n";
	}
	return 0;
}