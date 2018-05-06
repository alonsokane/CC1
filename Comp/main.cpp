#include <iostream>

int main() {
    int n,menor,mayor;
    std::cin >> n;
    if (n % 2)
        return 0;
    int arr[n];

    // 1 5 7 4 4 3
    // 0   2

    menor=101;
    mayor=-1;
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
        if(arr[i]<menor)
            menor=i;
        if(arr[i]>mayor)
            mayor=i;
    }

    arr[menor]=-1;
    arr[mayor]=101;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++)

    }


    std::cout<<menor<<" "<<mayor;
}