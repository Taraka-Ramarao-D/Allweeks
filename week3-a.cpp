#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int choice,x,key,n;

    do{
        cout<<"\n\n.......VECTOR OPERATION MENU.......";
        cout<<"\n1. Insert elements ";
        cout<<"\n2. display elements";
        cout<<"\n3. sort an element";
        cout<<"\n4. search an element";
        cout<<"\n5. exit";
        cout<<"\n6.delete;";
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch (choice){
            case 1:
                cout<<"Enter the number of elements you want to insert: ";
                cin>>n;
                cout<<"Enter the elements:\n ";
                for(int i=0;i<n;i++){
                    cin>>x;
                    v.push_back(x);
                }
                break;
            case 2:
                if (v.empty()){
                    cout<<"Vector is empty.";
                }
                else{
                    cout<<"Elements in the vector: ";
                    for(vector<int>::iterator it=v.begin(); it!=v.end(); ++it){
                        cout<<*it<<" ";
                    }
                }
                break;
            case 3:
            if(v.empty()){
                cout<<"Vector is empty.";
            }
            else{
                sort(v.begin(),v.end());
                cout<<"Elements sorted successfully.";
            }
            break;
            case 4:
            if(v.empty()){
                cout<<"Vector is empty.";
            }
            else{
                cout<<"Enter the element to search: ";
                cin>>key;
                vector<int>::iterator it=find(v.begin(),v.end(),key);
                if(it !=v.end()){
                    cout<<"Element found at position: "<<it-v.begin()+1;
                }
                else{
                    cout<<"Element not found in the vector.";
                }
            }
            break;
            case 5:
            cout<<"Exiting the program.";
            break;

            default:
            cout<<"Invalid choice. Please try again.";
        }
    }while(choice!=5);
    return 0;
}