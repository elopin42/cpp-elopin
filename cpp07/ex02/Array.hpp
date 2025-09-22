#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
private:
    T* data;
    unsigned int len;

public:
    Array() : data(0), len(0) {}
    Array(unsigned int n) : data(new T[n]()), len(n) {}
    ~Array() { delete[] data; }

    unsigned int size() const { return len; }

    T& operator[](unsigned int i) {
        if (i >= len) throw std::out_of_range("Index out of range");
        return data[i];
    }

    Array(const Array& other) : data(new T[other.len]), len(other.len) {
        for (unsigned int i = 0; i < len; ++i)
            data[i] = other.data[i];
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            len = other.len;
            data = new T[len];
            for (unsigned int i = 0; i < len; ++i)
                data[i] = other.data[i];
        }
        return *this;
    }
};

#endif 


