#include<iostream>
using namespace std;
class Array
{
private:
	int size;
	int index;
	int* p;
	void resize()
	{
		size = size * 2;
		int* pt = new int[size];
		for (int i = 0; i < size / 2; i++)
			pt[i] = p[i];
		delete[] p;
		p = pt;
	}
public:
	Array(int s = 5)
	{
		size = s;
		index = 0;
		p = new int[size];
		for (int i = 0; i < size; i++)
			p[i] = 0;
	}
	void setElement(int i)
	{
		if (index >= size)
			resize();
		p[index] = i;
		index++;
	}
	int getElement(int a)
	{
		return p[a];
	}
	int getindex()
	{
		return index;
	}
	int getlength()
	{
		return size;
	}
		
};
int main()
{
	Array a;
	for (int i = 0; i < a.getlength(); i++)
		a.setElement(i+1);
	a.setElement(100);
	a.setElement(200);
	for (int i = 0; i <a.getindex(); i++)
		cout << a.getElement(i) << " ";

}