#include <iostream>;
using namespace std;

class bangun{
private:
float x,y;
public:
float luas(){return x*y;};
void beri_Nilai(float panjang, float lebar);
};

//scope operator (::)
void bangun::beri_Nilai(float panjang, float lebar){
x = panjang;
y = lebar;
}

int main(){
bangun a,b;
a.beri_Nilai(7,12);
b.beri_Nilai(7,13);
cout<<"Luas persegi panjang a adalah = "<<a.luas()<<endl;
cout<<"Luas persegi panjang b adalah = "<<b.luas()<<endl;

cin.get();
return 0;
}

