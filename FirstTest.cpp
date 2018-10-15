#include <iostream>

class A {};

class B : public A {};




class Integ
{
	int a;
public:

	Integ() : a(4) {}

	Integ & operator ++(int value)
	{
		Integ temp(*this);
		a += 1 + value;
		return temp;
	}
	
	explicit operator int () const {return a;}
	
	int GetA ()
	{
		return a;
	}
};

class Base
{
public:
    virtual void Foo(Base &i)
    {
        std::cout << "Base.Foo(Base)" << std::endl;
    }
};

class Derived : public Base
{
public:
	//using Base::Foo;
    void Foo(Base &i) override
    {
        std::cout << "Derived.Foo(Base)" << std::endl;
    }

    void Foo(Derived &i)
    {
        std::cout << "Derived.Foo(Derived)" << std::endl;
    }
};

class Human
{
public:
	void Shoot (Base &i)
	{
		i.Foo(i);
	}
};


int main ()
{

	Integ newInt;
	Integ *nenn = &newInt;

	int a1(1);  // const int a1(1);  тоже самое что    const int a1 = 1;
	const int a2(2);
	int b(1);
	
	std::cout << "Hello world!" << "test\b\b\b\b\b\b\b\b\b\b\n";
	std::cout << "Hello world!  " << a1 << "   test\n";
	
	//system("pause");
	//computations();
	
	int const *pch = &a1;
	int* const cpch = &b;
	
	std::cout << "&a1 = " << &a1 << "\n\n";
	
	std::cout << "*pch = " << *pch << "\n";
	std::cout << "*cpch = " << *cpch << "\n\n";
	
	pch = &a2;
	a1 = 3;
	pch = &a1;
	*cpch = int(newInt++);
	
	int c = 7;
	int &s = c;
	int &s2 = a1;
	s2 = c;
	int &s3 = c;
	
	
	std::cout << "c = " << c << "\n";
	std::cout << "&c = " << &c << "\n";
	std::cout << "s = " << s << "\n";
	std::cout << "&s = " << &s << "\n";
	std::cout << "s2 = " << s2 << "\n";
	std::cout << "&s2 = " << &s2 << "\n";
	std::cout << "s3 = " << s3 << "\n";
	std::cout << "&s3 = " << &s3 << "\n\n";
	
	int *d;
	d = &c;
	
	std::cout << "*d = " << *d << "\n";
	std::cout << "d = " << d << "\n\n";
	
	std::cout << "*pch = " << *pch << "\n";
	std::cout << "*cpch = " << *cpch << "\n";
	std::cout << "newInt.a = " << newInt.GetA() << "\n";
	
	//A *i = new B();
	Derived *v = new Derived();
	Base *vv = new Derived();
	Base *vvv = new Base();
	
	v->Foo(*v);		// Derived(Derived)
	vv->Foo(*vv);	// Base(Base)
	vv->Foo(*v);	// Base(Derived)
	v->Foo(*vv);	// Derived(Base)
	vvv->Foo(*v);	// Base(Base)
	
	
	std::cout << "------------------" << "\n\n";
	Human H;
	H.Shoot(*vvv);
	
    return 0;
}