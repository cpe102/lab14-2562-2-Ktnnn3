#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b, int *c, int *d){
	int p,q,temp;
	int x[4]={*a,*b,*c,*d};
		for(int j=0;j<10;j++){
			p=rand()%4;
			q=rand()%4;
			temp = x[p];
			x[p]=x[q];
			x[q]=temp;
			}

		*a=x[0];
		*b=x[1];
		*c=x[2];
		*d=x[3];
	}
