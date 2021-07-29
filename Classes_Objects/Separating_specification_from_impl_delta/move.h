

#ifndef _MOVE_H_
#define _MOVE_H_

#include<iostream>

class Move {

    private:
        int *data;


    public:

        Move(int d) {
            data = new int;
            *data = d;
            std::cout << "Constructor for: " << d <<std::endl;
        }

        Move(const Move &source) : Move(*source.data) { // copy construtor 
            std::cout << "Copy constructor - deep copy for " << *data <<std::endl;
        }

        Move(Move &&source) : data {source.data} {   // Move constructor
            source.data = nullptr;          // steal the data and null out the source pointer
            std::cout << "Move constructor moving resource for " << *data <<std::endl;

        }

        ~Move() {
            
            if(data != nullptr)
            {
                std::cout << "Destructor freeing data for: " << *data <<std::endl;
            }
            else {
                std::cout << "Destructor freeing data for nullptr" <<std::endl;
            }
            delete data;
        }

        void set_data_value(int val) {*data = val;}
        int get_data_value() {return *data;}

        

};


#endif