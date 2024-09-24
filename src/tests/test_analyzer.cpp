//
// Created by barra on 9/22/2024.
//
#include <iostream>
#include <algorithm>
#include <vector>

int test_analyzer(){
    int arr[] = {1, 32, 6, 20, 86};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::vector<int> vect{arr, arr+n};

    std::cout << "Vector: ";
    for(int i = 0; i < n; i++)
        std::cout << vect[i] << " ";

    std::sort(vect.begin(), vect.end());

    std::cout << *max_element(vect.begin(), vect.end());

    return 0;
}
