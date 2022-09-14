#include <iostream>
using namespace std;

int main()
{
    cout<< "******BATTLESHIP ROYALE******"<<endl;
    cout<<"Instruction: "<<endl;
    cout<<"***There are 8 Battleships in space, choose a row and a column between [0-4] for rows and [0-3]for columns to hit a ship"<<endl;
    int lives = 10;
    int ships =8;
    int ship[5][4]={
        {0,0,1,1},
        {1,0,0,0},
        {0,1,0,1},
        {0,0,0,0},
        {1,0,1,1}
    };
    string answer;
    cout<<"Ready?"<<endl;
    cin>>answer;
    if(answer == "yes"){
                while((ships>0 && ships<=8) && lives>0){
                        int row;
                        int column;
                        cout<<"Enter a row number: ";
                        cin>>row;
                        cout<<"Enter a column number: ";
                        cin>>column;
                        if(ship[row][column]){
                                    cout<< "HIT!"<<endl;
                                    ships--;
                                    cout<<ships<<" ships left"<<endl;
                                    ship[row][column] = 0;
                        }else{
                            cout<< "Missed"<<endl;
                            lives--;
                            cout<< "You have "<<lives<<" lives left"<<endl;
                        }
                    if(lives == 0){
                    cout<< "You Lost"<<endl;
                    cout<< "Try again? ";
                    string again;
                    cin>>again;
                    if(again == "yes"){
                        main();
                    }else{
                    return 0;
                    }
                }
                }
                if(ships==0){
                    cout<< "VICTORY! You won";
                    return 0;
                }
    }else if(answer == "no"){
        return 0;
    }else{
        cout<<"Unrecognized"<<endl;
        cout<<"pick yes or no";
        main();
    }
    return 0;
}
