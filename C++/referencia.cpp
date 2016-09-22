void f(int, int&, const int&);
int main(){
int a = 22, b = 33, c = 44;
cout << "a = " << a << ", b = " <<
b << ", c = " << c << endl;
f(a,b,c);
cout << "a = " << a << ", b = " <<
b << ", c = " << c << endl;
f(2*a-3,b,c);
cout << "a = " << a << ", b = " <<
b << ", c = " << c << endl;
}
void f(int x, int& y, const int& z){
x += z;
y += z;
cout << "x = " << x << ", y = " <<
y << ", z = " << z << endl;
}
