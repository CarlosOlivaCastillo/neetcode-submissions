class DynamicArray {
public:

    //declare pointer
    int* data;
    int capacity;
    int size;

    DynamicArray(int capacity) {
        data = new int[capacity];
        this->capacity = capacity;
        size = 0;
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        if(i >= size){
            throw std::out_of_range("Index out of bounds");
        }
        else{
            data[i] = n;
        }
    }

    void pushback(int n) {
        if(size >= capacity){
            resize();
        }
        
        data[size] = n;
        size++;
    }

    int popback() {
        int return_value = data[size - 1];
        size--;

        return return_value;
    }

    void resize() {
        int* copy = new int[size];
        for(int i = 0; i < size; i++){
            copy[i] = data[i];
        }
        
        delete[] data;

        capacity *= 2;
        data = new int[capacity];

        for(int i = 0; i < size; i++){
            data[i] = copy[i];
        }

        delete[] copy;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
