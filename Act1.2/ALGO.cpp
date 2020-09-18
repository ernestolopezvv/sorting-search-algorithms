#include "ALGO.h"
#include <vector>
#include <iostream>

void ALGO::ordenaIntercambio(vector<int>& ordI)
{
	int i, j, aux; /* se realizan n-1 pasadas, a[o] ... a[n-2] */
	for (i = 0; i <= ordI.size() - 2; i++)/* coloca mínimo de a[i+1]...a[n-1] en a[i] */
		for (j = i + 1; j <= ordI.size() - 1; j++)
			if (ordI[i] > ordI[j])
			{
				aux = ordI[i];
				ordI[i] = ordI[j];
				ordI[j] = aux;
			}
}

void ALGO::ordenaBurbuja(vector<int>& ordB)
{
	int i, j;
	for (i = 0; i < ordB.size(); i++)

		// Last i elements are already in place  
		for (j = i + 1; j < ordB.size(); j++)
			if (ordB[i] > ordB[j])
				swap(&ordB[i], &ordB[j]);
}

void ALGO::swap(int* val1, int* val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void ALGO::ordenaMerge(vector<int>& vectM, int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int m = l + (r - l) / 2;

		// Sort first and second halves 
		ordenaMerge(vectM, l, m);
		ordenaMerge(vectM, m + 1, r);

		merge(vectM, l, m, r);
	}
}

void ALGO::merge(vector<int>& vectM, int start, int mid, int end)
{
	int start2 = mid + 1;

	// If the direct merge is already sorted 
	if (vectM[mid] <= vectM[start2]) {
		return;
	}

	// Two pointers to maintain start 
	// of both arrays to merge 
	while (start <= mid && start2 <= end) {

		// If element 1 is in right place 
		if (vectM[start] <= vectM[start2]) {
			start++;
		}
		else {
			int value = vectM[start2];
			int index = start2;

			// Shift all the elements between element 1 
			// element 2, right by 1. 
			while (index != start) {
				vectM[index] = vectM[index - 1];
				index--;
			}
			vectM[start] = value;

			// Update all the pointers 
			start++;
			mid++;
			start2++;
		}
	}
}

int ALGO::busqSecuencial(vector<int>& vectS, int n)
{
	for (int i = 0; i < vectS.size(); i++)
	{
		if (n == vectS[i])
		{
			cout << "El valor " << n << " se encuentra en el indice: " << i;
			return i;
		}
	}	
	return -1;
}

int ALGO::busqBinaria(vector<int>& vectBin, int n, int clave)
{
	int central, bajo, alto, valorCentral;
	bajo = 0;
	alto = n - 1;
	while (bajo <= alto) {
		central = (bajo + alto) / 2;
		valorCentral = vectBin[central];
		if (clave == valorCentral)
			return central;
		else if (clave < valorCentral)
			alto = central - 1;
		else
			bajo = central + 1;
	}
	return -1;
}

