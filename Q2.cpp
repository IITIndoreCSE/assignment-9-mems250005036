#include<iostream>
using namespace std;

struct Color{
    int red;
    int green;
    int blue;
    
};
int main(){
    Color color[5];
    color[0]={120,240,300};
    color[1]={100,58,69};
    color[2]={70,69,98};
    color[3]={67,114,75};
    color[4]={70,89,98};
    for(int i=0;i<3;i++){
        color[i].red=255-color[i].red;
        color[i].green=255-color[i].green;
        color[i].blue=255-color[i].blue;
        
    }
    cout << "RED " ;
    for(int i=0;i<5;i++){
        cout << color[i].red << " ";
        
    }
    cout << endl;
    cout << "BLUE " ;
    for(int i=0;i<5;i++){
        cout << color[i].blue << " ";
    }
    cout << endl;
    cout << "GREEN ";
    for(int i=0;i<5;i++){
        cout << color[i].green << " ";
        
    }
 
    
    
    
    
    
    
    return 0;
    
}
