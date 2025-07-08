#pragma once
# include <iostream>
# include <exception>

template<typename T>
class Array
{
    public:
		unsigned int size(void) const {
			return _n;
		}
        Array() : _array(NULL), _n(0) {}
        Array(unsigned int n) : _array(new T[n]()),  _n(n)  {}
        Array(const Array& other) : _array(NULL), _n(0) {
			*this = other;
		}
        Array& operator=(const Array& other) {
			if (this != &other)	{
				delete[] _array;
				_n = other._n;
				_array = new T[_n];
				for (unsigned int i = 0; i < _n; ++ i)
					_array[i] = other._array[i];
			}
			return (*this);
		}
        ~Array() { delete[] _array;}
        T& operator[](unsigned int idx) {
			if (idx >= _n)
				throw indexOutOfBoundsException();
			return (_array[idx]);
		}
        const T& operator[](unsigned int idx) const {
			if (idx >= _n)
				throw indexOutOfBoundsException();
			return (_array[idx]);
		}

		class indexOutOfBoundsException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("That index is out of bounds!");
				}
		};
    private:
		T*					_array;
		unsigned int		_n;
};
