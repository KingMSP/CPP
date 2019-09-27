#include "pch.h"
#include "Bilgisayar.h"
#include "Yazici.h"
#include <fstream>
#include <typeinfo>
#include <iostream>


int main() {

	//Bilgisayar tipinde bir obje olu�turulmas�
	Bilgisayar pc("OMEN BY HP 17-AN101NT", "XXXX567", 11998, "HP", "Notebook", "SSD", 256, "DDR4", 16, "CORE I7 8750H", 2, "Full HD", 17);

	//Yazici tipinde bir obje olu�turulmas�
	Yazici printer("CANON PIXMA G4411", "G4411XX", 1449, "CANON", "Cok Fonksiyonlu Yazici", "Kartus&Toner", 8, "600x1200 dpi", 2, true);

	//Bilgisayar ve Yazici s�n�flar�na ait KonsolaBas fonksiyonunun �a��r�lmas�
	pc.KonsolaBas();
	printer.KonsolaBas();

	//D�n�� tipi Bilgisayar olan bir fonksiyonun �a��r�lmas� ve bu tipin bir objeye e�itlenmesi
	Bilgisayar bilgisayar = Bilgisayar::createRecord();
	bilgisayar.KonsolaBas();

	//Bilgisayar tipinde bir dizi olu�turup i�ine Bilgisayar objelerinin atanmas�
	Bilgisayar computers[] = { pc,bilgisayar };

	//Yazici tipinde bir dizi olu�turup i�ine Yazici objelerinin atanmas�
	Yazici printers[] = { printer };

	//Dosya yazma i�lemi ger�ekle�tirme
	ofstream file;
	file.open("urunler.txt");
	for (int i = 0; i < (sizeof(computers) / sizeof(computers[0])); i++)
	{
		file << computers[i] << endl;
	}
	for (int i = 0; i < (sizeof(printers) / sizeof(printers[0])); i++)
	{
		file << printers[i] << endl;
	}
	file.close();


	system("PAUSE");

}