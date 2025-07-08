#pragma once
# include <iostream>

template<typename T>
class Array
{
    public:
		unsigned int size(void) const;
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        T& operator[](unsigned int idx);
        const T& operator[](unsigned int idx) const;
        ~Array();

		class SomeException : public std::exception
		{
			public:
				const char *what() const throw();
		};
    private:
		T*					_array;
		unsigned int		_n;
};
