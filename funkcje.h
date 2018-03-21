/* funkcje sortowania, zamiany oraz kopiowania tablic
*/

void zamiana(int & a, int & b){
	int z = a;
	a = b;
	b = z;
		
	
}
int klon(int ar[],int ark[], int a){
	
	for(int i; i<a;i++){
		ark[i] = ar[i];
	}
	
}
int bubblesort(int ar[], int a){
		for(int i;i<a;i++){
			for(int i=0;i<a;i++){
				if (ar[i] > ar[i+1]){
					zamiana(ar[i], ar[i+1]);
				}
			}
		}
	
	return 0;
}


int partycja(int ar[], int a, int b){
	int x = ar[a], i=a, j=b, z;
	while(true){
		while(ar[j] > x) j--;
		while(ar[i] < x) i++;
		if (i < j){
			zamiana(ar[i], ar[j]);
			j--;
			i++;
		}else
			return j;
		
		
	}
	
	
}

int quicksort(int ar[], int a, int b){
	int tmp;
	if (a<b){
		tmp = partycja(ar,a,b);
		quicksort(ar,a,tmp);
		quicksort(ar,tmp+1,b);
	}
}

int selectionsort(int ar[], const int a){
	int z;
		for(int i = 0; i < a; i++){
			z=i;
			for(int j=i+1; j<a;j++){
				if(ar[j]<ar[z]) z=j;
				if(z!=i)zamiana(ar[z], ar[i]);
			}
			
		}
	
	
	
}
