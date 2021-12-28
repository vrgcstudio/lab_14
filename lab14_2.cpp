#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool P[][M],int s,int x,int y){
    int R = 30;
    int C = 70;
    for (int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++){
            if(sqrt(pow(i - x,2) + pow(j - y,2)) <= s-1){
                P[i][j] = 1;
            }
        }
    }

}

void showImage(const bool P[][M]){
    int R = 30;
    int C = 70;
    
    cout << "------------------------------------------------------------------------";
    cout << endl;
    
    for (int i = 0; i < R; i++)
    {
        cout << '|';
        for(int j = 0; j < C; j++){
            if(P[i][j] > 0){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << '|';
        cout << '\n';
    }
    cout << "------------------------------------------------------------------------";
    cout << endl;
}