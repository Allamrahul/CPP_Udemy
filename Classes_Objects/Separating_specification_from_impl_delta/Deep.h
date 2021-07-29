
#ifndef _DEEP_H
#define _DEEP_H

class Deep {
    private:
        int *data;
    public:
    // constructor
        Deep(int d);

    // copy constructor
        Deep(const Deep &source);

    // Destructor
        ~Deep();

    // API
        int* get_data() {
            return data;
        }

        void set_data_val(int val) {
            *data = val;
        }

};

#endif