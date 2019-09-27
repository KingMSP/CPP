#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
using namespace std;

class Urun
{
public:
	Urun(void);
	Urun(string name, string no, double price, string marka, string type);
	~Urun(void);
	//Olu�turulmu� olan �r�n�n bilgilerinin konsola basan fonksiyon
	void KonsolaBas() {
		cout << "Urun Adi: " << Name << endl;
		cout << "Urun Numarasi: " << No << endl;
		cout << "Urun Fiyati: " << Price << " tl" << endl;
		cout << "Urun Markasi: " << Brand << endl;
		cout << "Urun Tipi: " << Type << endl;

	}

	// S�n�f i�inde bulunan de�i�kenlerin �a��r�lmas� ve/veya de�er atamas�n� yapabildi�imiz fonksiyonlar
	string getName() {
		return Name;
	}
	void setName(string name) {
		Name = name;
	}
	string getNo() {
		return No;
	}
	void setNo(string no) {
		No = no;
	}
	double getPrice() {
		return Price;
	}
	void setPrice(double price) {
		Price = price;
	}
	string getBrand() {
		return Brand;
	}
	void setBrand(string brand) {
		Brand = brand;
	}
	string getType() {
		return Type;
	}
	void setType(string type) {
		Type = type;
	}

	// '>'(B�y�kt�r) i�lemini a��r� y�kleyen friend fonksiyon
	friend Urun& operator>(Urun& u1, Urun& u2) {
		if (u1.getPrice() > u2.getPrice())
			return u1;
		return u2;
	}

protected:
	string Name;
	string No;
	double Price;
	string Brand;
	string Type;
};