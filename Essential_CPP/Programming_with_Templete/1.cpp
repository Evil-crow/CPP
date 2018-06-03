#include <iostream>
class example {
public:
    example( double min, double max );
    example( const double *array, int size );
    double &operator[]( int index );
    bool operator==( const example & ) const;
    bool insert( const double *, int );
    bool insert( double );
    double min() const { return _min; }
    double max() const { return _max; }
    void min( double );
    void max( double );
    int count( double value) const;
private:
    double _min;
    double _max;
};


// 简单上来说实现class template就是将类型都转为占位符, 当然也有例外,我们事后再说
template <typename T>
class example_template {
public:
    example_template<T>(T min, T max);
    example_template<T>(const T *array, int size);
    T &operator[](int index);
    bool operator==(const example_template &) const;
    bool insert(const T *, int);
    bool insert(T);
    T min() const { return _min; }
    T max() const { return _max; }
    void min(T);
    void max(T);
    int count(T value) const;
private:
    T _min;
    T _max;
};