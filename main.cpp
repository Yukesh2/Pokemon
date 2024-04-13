#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main() {
    srand(time(NULL));
    cout << "Welcome to the Pokemon Battle Game"<<endl;
    cout << "Choose one Pokemon to battle"<<endl;
    cout << "Your options are 1) Pikachu  2)charlizard 3)Bulbasaur" <<endl;
    cout << "You can only choose one"<<endl;
    int i;
    cin >> i;
    int cpu;
    if(i == 1){
        cout << "Alright So you Choose Pikachu"<<endl;
    }
    else if (i==2){
        cout << "Alright so you choose Charlizard"<<endl;
    }
    else{
        cout << " Alright so you choose Bulbasaur"<<endl;
    }
    cpu = rand()%3+1;
    //cpu choosing pokemon
     if(cpu == 1){
        cout << "Alright So CPU Choose Pikachu"<<endl;
    }
    else if (cpu==2){
        cout << "Alright so CPU choose Charlizard"<<endl;
    }
    else{
        cout << " Alright so CPU choose Bulbasaur"<<endl;
    }
    //if the pokemon is same
    if(i == cpu){
        cout << "You both have selected the same pokemon"<<endl;
        cout << "So it is a draw";
    }
    else if(i==1){
        if(cpu==2){
            cout << "You have choosen Pikachu"<<endl;
            cout << "CPU have choosen charlizard"<<endl;
            cout << "Pikachu uses thuberbold but it was useless against charllizard"<<endl;
            cout << "Charlizard uses fireball and defeats pikachu";
        }
        if(cpu==3){
            cout << "You have Choosen Pikachu"<<endl;
            cout << "Cpu have choosen balbasaur"<<endl;
            cout<<"pikachu thunderbolts has no effect on balbasaur"<<endl;
            cout << "balbasaur uses plantation and wins the match";
        }

    }
    else if(i==2){
        if(cpu==1){

            cout<<"Charlizard uses fireball and won the match";
        }
        if(cpu == 3){

            cout<<"Charlizard uses fireball and won the match";
        }

    }
    else if(i==3){
        if(cpu==1){

            cout<<"Pikachu uses thuderbolt but doesnot work"<<endl;
            cout << "Balbasaur uses plantation and won the match";
        }
        if(cpu == 2){


            cout << "Balbasaur attacks didnot worked to charlizard"<<endl;
            cout << "Charlizard finishes the match with the fireball attack";
        }
    }


    return 0;
}
