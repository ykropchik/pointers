//
// Created by YKROPCHIK on 27.10.2019.
//

int sum(const int *pointer, unsigned int n){
    int result = 0;
    for (unsigned int i = 0; i < n; i++){
        result += pointer[i];
    }
    return result;
}