#include <iostream>
#include <vector>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

double exp(double a, double p){
    if(p==0){
        return 1;
    }
    else{
        return a*exp(a,--p);    
    }
}

double sine(int x){
    double rad = x*3.14/180;
    double ans=0;
    for(int i=0; i < 7; i++){
       ans += exp(-1, i) * exp(rad, 2 * i + 1) / fact(2 * i + 1);
    }
    return ans;
}

double cosine(int x){
    double rad = x*3.14159/180;
    double ans=0;
    for(int i=0; i < 7; i++){
       ans += exp(-1, i) * exp(rad, 2 * i ) / fact(2 * i );
    }
    return ans;
}

double tangent(int x){
    if(x==90){
        return -1;
    }
    double rad = x*3.14/180;
    double ans = rad + exp(rad, 3)/3 + exp(rad, 5)*(2/15);
    return ans;
}
int main(){
    cout << "1. Arithmetic Operations" << endl << "2. Trigonometric Operations" << endl;
    int n1;
    cin >> n1;
    
            int sum=0;
    switch(n1){
        case 1:
            cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl << "5. Exponent" << endl << "6. Factorial" << endl;
            int x;
            cin >> x;
            switch(x){
                double a , b;
                
                case 1:
                    cout << "Enter the numbers and enter 0 to stop entering" << endl;
                    int z;
                    cin >> z;
                    while(z){
                        sum+=z;
                        cin >> z;
                    }
                    cout << sum << endl;
                    break;
                case 2:
                    cout << "Enter two numbers" << endl;
                    cin >> a >> b;
                    cout << (-1)*(a-b) << endl;
                    break;
                case 3:
                    cout << "Enter two numbers" << endl;
                    cin >> a >> b;
                    cout << a*b << endl;
                    break;
                case 4:
                    cout << "Enter dividend and divisor respectively" << endl;
                    cin >> a >> b;
                    cout << a/b << endl;
                    break;
                case 5:
                    cout << "Enter base and power respectively" << endl;
                    cin >> a >> b;
                    cout << exp(a,b) << endl;
                    break;
                case 6:
                    cout << "Enter a number" << endl;
                    cin >> a;
                    cout << fact(a) << endl;
                    break;
                default:
                    cout << "Invalid Choice" << endl;
                    break;
            }
            break;
        case 2:
            cout << "1. Sine" << endl << "2. Cosine" << endl << "3. Tangent" << endl;
            int y;
            cin >> y;
            switch(y){
                case 1:
                    cout << "Enter the angle in degrees" << endl;
                    int deg;
                    cin >> deg;
                    cout << sine(deg) << endl;
                    break;
                case 2:
                    cout << "Enter the angle in degrees" << endl;
                    cin >> deg;
                    cout << cosine(deg) << endl;
                    break;
                case 3:
                    cout << "Enter the angle in degrees" << endl;
                    cin >> deg;
                    cout << tangent(deg) << endl;
                    break;
                default :
                    cout << "Invalid Choice" << endl;
                    break;
            }
    }
    return 0;
}