#include <iostream>
using namespace std;

class persegi_panjang
{
    private:
        int panjang;
        int lebar;
        int luas;
    public:
        void input_data()
        {
            cout << "masukkan panjang: ";
            cin >> panjang;
            cout << "masukkan lebar: ";
            cin >> lebar;
        }
        void hitung_luas()
        {
            luas = panjang*lebar;
        }
        void output_data()
        {
            cout << "tampilkan luas = " << luas << endl;
        }
};

int main()
{
        persegi_panjang PP;
        PP.input_data();
        PP.hitung_luas();
        PP.output_data();
}
