#pragma once
#include <vector>
using namespace std;

class ALGO
{
public:
	static void ordenaIntercambio(vector<int>&);
	static void ordenaBurbuja(vector<int>&);
	static void ordenaMerge(vector<int>&, int l, int r);
	static int busqSecuencial(vector<int>&, int);
	static int busqBinaria(vector<int>&, int, int);


private:
	static void swap(int*, int*);
	static void merge(vector<int>&, int, int, int);


};

