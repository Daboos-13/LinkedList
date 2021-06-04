#include <iostream>
//#include "FCISLL.h"
#include "FCISLL.cpp"
bool is_even( int& n){
    return (n%2==0);
}
bool is_odd( int& n ){
    return (n%2!=0);
}
int main() {

    string choice ;
    FCISLL<int> list ;
    int input {};
    while (true) {
        cout << "welcome to FCI Linked list " << endl;
        cout << "1- add to the head " << endl;
        cout << "2- add to the tail" << endl;
        cout << "3- remove form head" << endl;
        cout << "4- remove from tail" << endl;
        cout << "5- remove from index" << endl;
        cout << "6- remove item " << endl;
        cout << "7- remove even numbers" << endl;
        cout << "8- remove odd numbers" << endl;
        cout << "9- size of the list" << endl;
        cout << "10- print the list " << endl;
        cout << "0- exit" << endl;
        cin >> choice;
        if (choice == "1") {

            cout<<"enter the number : "<<endl;
            cin>>input;
            list.addToHead(input);
//            cout<<list;


        }else if(choice=="2"){

            cout<<"enter the number : "<<endl;
            cin>>input;
            list.addToTail(input);
            cout<<list;



        }else if (choice=="3"){

            if (list.isEmpty()){
                cout<<"list is already empty"<<endl;
            }else{
                list.removeFromHead();
                cout<<"item removed "<<endl;
                cout<<list;
            }




        }else if (choice=="4"){
            if (list.isEmpty()){
                cout<<"list is already empty"<<endl;
            }else{
                list.removeFromTail();
                cout<<"item removed "<<endl;
                cout<<list;
            }

        }else if (choice=="5"){
            if (list.isEmpty()){
                cout<<"list is already empty"<<endl;

            }else{
                cout<<"enter the index"<<endl;
                cin>>input;
               int x =list.removeFromIndex(input);
                cout<<x <<" is the removed item"<<endl;
                cout<<list;

            }




        }else if (choice=="6"){
            if (list.isEmpty()){
                cout<<"list is already empty"<<endl;

            }else{
                cout<<"enter the item"<<endl;
                cin>>input;
                int x =list.removeItem(input);
                cout<<x <<" is  removed "<<endl;
                cout<<list;

            }


        }else if (choice=="7"){

            if (list.isEmpty()){
                cout<<"list is empty"<<endl;
            }else{
                list.removeWithPredicate(is_even);
                cout<<"even numbers are removed"<<endl;
                cout<<list;


            }




        }else if (choice=="8"){


            if (list.isEmpty()){
                cout<<"list is empty"<<endl;
            }else{
                list.removeWithPredicate(is_odd);
                cout<<"odd numbers are removed"<<endl;
                cout<<list;

            }


        }else if (choice=="9"){
            if (list.isEmpty()){
                cout<<"list is empty"<<endl;
            }else{
                cout<<"the size of the list is "<<list.size()<<endl;
            }


        }else if (choice=="10"){
            if (list.isEmpty()){
                cout<<"list is empty"<<endl;

            }else{
                cout<<list;

            }

        }






























        else if(choice=="0"){
            break;
        }


    }

    return 0;
}
