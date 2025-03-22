// analyzes product sales and inventory for a store
#include <iostream> 
#include <string>
#define TAX_RATE_PREPROCESSOR 0.08f  //defines a preprocessor constant put on number 6
using namespace std;
int main()
{  
    cout<<"THIS IS A  C++ PROGRAM THAT ANALYZE PRODUCT SALES AND INVENTORY FOR A STORE " <<  endl ;
     string product_name;
    int product_category ;
    int intial_inventory_quantity;
    float product_price ;
    int numbers_of_iteams_sold;
    cout<<"enter your product name please ?: ";
    cin>>product_name ;
    cout<<"enter category product catgory (1-5) pelase ?:  ";
    cin>>product_category ;
    cout<<"enter intial inventory quntity?:  " ;
    cin>>intial_inventory_quantity;
    cout <<"enter product price?;" ;
    cin>>product_price ;
    cout<<"enter number of items sold?:" ;
    cin>>numbers_of_iteams_sold;
    int new_inventory ; 
     new_inventory =intial_inventory_quantity ; 
     float total_sales ;
     total_sales= numbers_of_iteams_sold * product_price;
     string inventoryStatus = (new_inventory < 10) ? "Low Inventory" : "Sufficient Inventory";
     auto totalSalesCopy = total_sales;       
     decltype(intial_inventory_quantity) extraStock = 40;   
     cout << "For tax rate the result will be " << (int)(TAX_RATE_PREPROCESSOR * 100) << " %" << endl;
     //detail information
     cout<<"product information"<< endl ;
     cout<<"NAME :" << product_name << endl;
     cout<<"INTTUAL INVENTORY :" << intial_inventory_quantity << endl ;
     cout << "PRICE PER UNIT : $" << (int)product_price << endl;
     cout <<"INVENTORY STATUS : " << inventoryStatus << endl;
     cout << "Helper Variable (Total Sales Copy): $" << totalSalesCopy << endl;
    cout << "Extra Stock (decltype example): " << extraStock <<  endl ;
    if(product_category >=1 && product_category <=5 ) {
    switch (product_category) {
        case 1:
            cout << "Electronics is your product category"<<endl;
        break;
        case 2:
            cout << "Gloceries is your product category"<<endl;
        break;
        case 3:
            cout << "Clothing is your product categor"<<endl;
        break;
        case 4:
            cout<<"Stationary is your product categor"<<endl;
        break;
        case 5:
            cout<<"Miscellaneous is your product categor"<<endl;
        break;
    }
} else{
    cout<<"you have entered invalid product category please enter the number that between 1 and 5";
}
cout<<"Receipt"<<endl;
    int i;
    for (i = 1; i <= numbers_of_iteams_sold; i += 1) {
        cout << " the item" << i << " the price of the product is " << product_price << " birr" << endl;
    }
    return 0;
}
