/* Algorytmy sortowania w j�zyku C++
Cel cwiczenia:
Celem �wiczenia jest nauka implementacji wybranych algorytm�w sortowania w j�zyku C++ Nale�y zaimplementowa� 
trzy dowolnie wybrane algorytmy sortowania; przynajmniej jeden algorytm sortowania musi mie� z�o�ono�� obliczeniow� 
rz�du O(n log(n)). Algorytmy nale�y przetestowa� dla tablic wype�nionych losowymi liczbami dla kilku r�nych 
warto�ci parametru n (gdzie n jest rozmiarem tablicy, np. 10000 20000 50000 100000). Czas dzia�ania ka�dego 
sortowania nale�y wy�wietli� (w postaci tekstowej) na ekranie.

Wybrane sposoby sortowania:
1)Bubble Sort
2)Quick Sort
3)Selection Sort

Wykonal Jakub Gadecki
 */


#include <iostream>
#include <ctime>
#include <algorithm>
#include "funkcje.h"

using namespace std;
const int roz=10000;
int array[roz], bubble[roz], quick[roz], sele[roz];

int main(int argc, char** argv) {
	

	srand(time(NULL));
	for(int i;i<roz;i++){
		array[i]=rand() % roz;
	//	cout<<array[i]<<"\n";
	}
	copy(array, array+roz, bubble);
	copy(array, array+roz, quick);
	copy(array, array+roz, sele);

	clock_t start = clock();

	bubblesort(bubble, roz);
	cout<<"\nczas : "<<(((double)clock() - start) / (CLOCKS_PER_SEC/1000))<<"milisec.";
	
	cout<<"\nkoniec sortowania!\n";
	//quick sort
	start = clock();
	quicksort(quick,0,roz-1);
	cout<<"\nczas : "<<(((double)clock() - start)/ (CLOCKS_PER_SEC/1000))<<"milisec.";
	cout<<"\nkoniec sortowania!\n";

	start = clock();
	selectionsort(sele, roz);
	cout<<"\nczas : "<<(((double)clock() - start)/ (CLOCKS_PER_SEC/1000))<<"milisec.";
	cout<<"\nkoniec sortowania!\n";
	
/*	
	for(int i;i<roz;i++){
		cout<<quick[i]<<"\n";
	}
*/
	system("pause");
	return 0;
}
