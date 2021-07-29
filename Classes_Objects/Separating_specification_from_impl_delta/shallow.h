
#ifndef _SHALLOW_H
#define _SHALLOW_H

class Shallow {
    private:
        int *data;
    public:
    // constructor
        Shallow(int d);

    // copy constructor
        Shallow(const Shallow &source);

    // Destructor
        ~Shallow();

    // API
        int* get_data() {
            return data;
        }

        void set_data_val(int val) {
            *data = val;
        }

};

#endif