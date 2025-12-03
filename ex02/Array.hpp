#pragma once
// what is this

template<typename T>
class array{
    private:
        unsigned int size;
        T* array;
    public:
    array():array(NULL), size(0){};
    array(int size) {
        if (size < 0)
            throw OutOfBound();
        array = new T[size];
        size = size;
    }
    array(const array& copy) {
        this->size = copy.size;
        this->array = new T[this->size];
        for (unsigned int i = 0; i < this->size; i++)
            this->array[i] = copy.array[i];
    }
    array& operator=(const array& copy) {
        if (this == &copy)
            return *this;
        if (this->array)
            delete this->array;   
        this->array = NULL;
        this->size = copy.size;
        this->array = new T[copy.size];
        for (unsigned int i = 0; i < size; i++) {
            this->array[i] = copy.array[i];
        }
        return *this;
    }
    T& operator[](int i) const {
        if (i < 0 || i >= (int)size)
            throw OutOfBound();
        return array[i];
    }
    ~array() {
        if (array)
            delete[] array;
    };
    unsigned int size() const {
        return size;
    };
    class OutOfBound : public std::exception {
        public:
        const char *what() const throw() {
            return "Invalid index";
        }
    };
};