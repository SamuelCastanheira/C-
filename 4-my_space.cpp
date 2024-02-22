#include <iostream>

namespace My_code {
    class complex { /* ... */ };
    complex sqr t(complex);
    int main();
    ...
}
int My_code::main(){
    complex z {1,2};
    auto z2 = sqrt(z);
    td::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
}

int My_code::main(){
    ...
};

int main(){
    return My_code::main();
}