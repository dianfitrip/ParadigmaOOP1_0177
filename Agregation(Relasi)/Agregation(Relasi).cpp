#include <iostream>
#include <string>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	Ibu* varIbu = new Ibu("dini");
	Ibu* varIbu2 = new Ibu("novi");
	Anak* varAnak1 = new Anak("tono");
	Anak* varAnak2 = new Anak("rini");
	Anak* varAnak3 = new Anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
}