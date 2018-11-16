//Gaddis_8th_Chapter#2_Problem#8_Total Purchase

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    double priceofitem1=15.95,priceofitem2=24.95,priceofitem3=6.95,priceofitem4=12.95,priceofitem5=3.95;
    double subtotal=priceofitem1+priceofitem2+priceofitem3+priceofitem4+priceofitem5;
    double salestax=.07;
    double total=subtotal*salestax+subtotal;
    cout<<"Price of item 1:"<<priceofitem1<<endl;
    cout<<"Price of item 2:"<<priceofitem2<<endl;
    cout<<"Price of item 3:"<<priceofitem3<<endl;
    cout<<"Price of item 4:"<<priceofitem4<<endl;
    cout<<"Price of item 5:"<<priceofitem5<<endl;
    cout<<"Subtotal:"<<subtotal<<endl;
    cout<<"Sales Tax:"<<salestax<<endl;
    cout<<"Total:"<<total<<endl;
    
    
    
    return 0;
}

