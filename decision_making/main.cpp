#include<iostream>
using namespace std;
int main()
{
    //if and else example
    // int budget;
    // cout<<"Enter Your Budget"<<endl;
    // cin>>budget;

    // if(budget>2000000)
    // {
    //     cout<<"you can buy the car"<<endl;
    // }

    // else{
    //     cout<<"Your are poor"<<endl;
    // }
    // return 0;


    //if else if & if else if else
    // int marks;
    // cout<<"Enter your makrs"<<endl;
    // cin>>marks;

    // if(marks>90)
    // {
    //     cout<<"Grade A"<<endl;

    // }

    // else if (marks>80)
    // {
    //     /* code */cout<<"Grade B"<<endl;
    // }

    // else if(marks>70)
    // {
    //     cout<<"Grade C"<<endl;
    // }

    // else if(marks>60)
    // {
    //     cout<<"Grade D"<<endl;
    // }
    
    // else{
    //     cout<<"You are fail";
    // }

    // return 0;

    //nested if
    float height;
    cout<<"Enter height"<<endl;
    cin>>height;

    float weight;
    cout<<"Enter weight"<<endl;
    cin>>weight;

    if(height>5){
        if(weight>70)
        {
            cout<<"You got a good bmi"<<endl;
        }
        else{
            cout<<"Bad"<<endl;
        }
    }

    else{
        cout<<"bournvita pilo"<<endl;
    }
}