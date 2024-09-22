#include <iostream>

void modify(int *&, int);

int main()
{
    int i,size;
    std::cout << "Enter the size of the array: ";
    std::cin  >> size;
    int *ptr = new int[size];
    std::cout << "Enter the elements of the array: ";
    for(i = 0; i < size ; i++)
    {
        std::cin  >> ptr[i];
    }
    modify(ptr, size);
    i = 0;
    do
    {
        std::cout << ptr[i] << ' ' ;
        i++;
    }while(ptr[i] != '\0');


    return 0;
}

void modify(int *&Pref, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size;)
        {
            if(Pref[i] == Pref[j])
            {
                int k;
                for(k = j; k < size - 1; k++)
                {
                    Pref[k] = Pref[k+1];
                }
                Pref[k] = '\0';
                break;
            }
            j++;
        }
    }
}
