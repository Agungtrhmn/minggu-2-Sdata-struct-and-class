#include <iostream>
using namespace std;
class Persegi {   
int x,y; 
public:   
void sisi (int x);   

int Luas (void) {
y=x*x;
return (y);
}
};
void Persegi::sisi (int i){
x = i;
}
int main(int argc, char** argv) {
Persegi kotak;
int i;
cout<<"Masukkan sisi : ";cin>>i;
kotak.sisi (i);
cout<<"Luas          : "<<kotak.Luas();
return 0;
}
