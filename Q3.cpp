#include <iostream>
using namespace std;

struct Point{
    float x;
    float y;
};
int main(){
    int count=0;
    Point point[7];
    for(int i=0;i<7;i++){
        cout << "x" << i+1 <<":" ;
        cin >> point[i].x;
        cout << "y" << i+1 << ":";
        cin >> point[i].y;
    }
    for(int i=0;i<7;i++){
        if(point[i].x>0 && point[i].y>0){
            count++;
            
        }
    }
    cout << "count:" << count << endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}
