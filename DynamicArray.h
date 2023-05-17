#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include <iostream>


template <typename T>
class DynamicIntegerArray{
    private:
        T *data;
        int size;
    public:
        DynamicIntegerArray(){
            this->size = 0;
            data = new T[0];
        }
        DynamicIntegerArray(T arr[],int size){
            this->size = size;
            data = new T[size];
            for (int i = 0; i < size; i++)
                data[i] = arr[i];
        }
        DynamicIntegerArray(const DynamicIntegerArray &o){
            this->size = o.size;
            data = new T[o.size];
            for(int i = 0; i < o.size; i++)
                data[i] = o.data[i];
        }
        void print() const {
            std::cout << "[ ";
            for(int i = 0; i < size; i++)
                std::cout << data[i] << " ";
            std::cout << "]" << std::endl;
        }
        ~DynamicIntegerArray(){
            delete[] data;
        }
        void pushback(T value) {
            T *newdata;
            this->size = size+1;
            newdata = new T[size];
            for(int i = 0; i < size-1; i++)
                newdata[i] = data[i];
            newdata[size-1]=value;
            delete[] data;
            data = newdata;
        }
        void insert(T value, int pos) {
            T *newdata;
            this->size = size+1;
            newdata = new T[size];
            for(int i = 0; i < size; i++) {
                if(i<pos-1)
                    newdata[i]=data[i];
                else if (i==(pos-1))
                    newdata[i]=value;
                else
                    newdata[i]=data[i-1];
            }
            
            /*for(int i = 0; i < pos; i++){
                newdata[i] = data[i];
                }
            newdata[pos-1] = value;
            for(int i = pos; i < size; i++){
                    newdata[i] = data[i-1];
            }*/
            
            delete[] data;
            data = newdata;
        }
        void remov(int pos) {
            T *newdata;
            this->size = size-1;
            newdata = new T[size];
            for(int i = 0; i < size; i++){
                if(i<pos-1)
                    newdata[i]=data[i];
                else 
                    newdata[i]=data[i+1];
            }
            delete[] data;
            data = newdata;    
        }
        
};

#endif