#ifndef TEMPLATESDYNAMIC_H
#define TEMPLATESDYNAMIC_H
#include <iostream>
template<typename T> 
class DynamicTemplate
{
    private:
        T *data; 
        int size;
    public:
        DynamicTemplate()
        {
            this->size=0;
            data= new T[size];
        }
        DynamicTemplate(const T *dat, int val)
        {
            this->size=val;
            data= new T[size];
            for(int i=0;i<size;i++)
                data[i] = dat[i];
        }
        DynamicTemplate(const DynamicTemplate &o)
        {
            data=new T[o.size];
            for(int i=0;i<o.size;i++)
                data[i]=o.data[i];
        }
        void set(const T val, int pos)
        {
            data[pos]=val;
        }
        T get(int pos)const
        {
            return data[pos];
        }
        void print() const{
            std::cout<<"[";
            for(int i=0;i<size;i++)
                std::cout<<data[i]<<" ";
            std::cout<<"]"<<std::endl;
        }
        void pushback(const T val)
        {
            T *newdata= new T[size+1];
            for(int i=0;i<size;i++)
                newdata[i]=data[i];
            newdata[size]=val;
            size++;
            delete[] data;
            this->data=newdata;
        }
        void insertar(const T val,const int pos)
        {
            T *newdata= new T[size+1];
            for(int i=size;i>pos;i--)
                newdata[i]=data[i-1];
            for(int i=0;i<pos;i++)
                newdata[i]=data[i];
            newdata[pos]=val;
            size++;
            delete[] data;
            this->data=newdata;
        }
        void remove(int pos)
        {
            T *newdata= new T[size-1];
            for(int i=pos;i<size-1;i++)
                newdata[i]=data[i+1];
            for(int i=0;i<pos;i++)
                newdata[i]=data[i];
            size--;
            delete[] data;
            this->data=newdata;
        }
        ~DynamicTemplate(){
            delete[] data;
        }
};

#endif