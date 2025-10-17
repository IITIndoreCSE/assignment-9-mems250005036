#include <iostream>
using namespace std;
struct Item{
    int id;
    float cost;
};

    
    


int main(){
    Item items[6];
    items[0]={1,51.00};
    items[1]={2,26.64};
    items[2]={3,45.69};
    items[3]={4,69.69};
  
    
    items[4]={5,17.32};
    items[5]={6,18.36};
    for(int i=0;i<6;i++){
        if(items[i].cost>50){
            cout << "Item ID : " << items[i].id << endl;
            cout << "cost:" << items[i].cost << endl;
            
        }
        
    }
