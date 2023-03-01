#include<iostream>
using namespace std;
int main(){
    int desx,desy;
    cin>>desx>>desy;
    int turn=1;//0:左下方向，1：右上方向
    int posx=1,posy=1;
    int step=1;
    while(true){
        if(posx==desx&&posy==desy){
            cout<<step;
            break;
        }
        else{
            step++;
            if(turn) {
                if (posy==1) {
                    posx++;
                    turn=0;
                } else {
                    posx++;
                    posy--;
                }
            }
            else{
                if(posx==1){
                    posy++;
                    turn=1;
                }
                else{
                    posx--;
                    posy++;
                }
            }
        }
    }
    return 0;
}
