#include "prime.hpp"
#include <cmath>

bool is_prime_half(int n, int* n_modops){
    if(n_modops != nullptr){
        *n_modops = 0;
    }

    if(n <= 1){
        return false;
    }else if(n == 2){
        return true;
    }else if(n > 2){
        if(n_modops != nullptr){
            (*n_modops)++;
        }
        
        if(n % 2 == 0){
        return false;
    }
        for(int i = 3; i <= n/2; i += 2){
            if(n_modops != nullptr){
                (*n_modops)++;
            }
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }

    return false;
}

bool is_prime_sqrt(int n, int* n_modops){
    if(n_modops != nullptr){
        *n_modops = 0;
    }

    if(n <= 1){
        return false;
    }else if(n == 2){
        return true;
    }
    else if(n > 2){
        if(n_modops != nullptr){
            (*n_modops)++;
        }
        if(n % 2 == 0){
        return false;
    }
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n_modops != nullptr){
                (*n_modops)++;
            }
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }

    return false;
}

int count_modops_half(int lo, int hi){
    int n_mod = 0;
    int sum = 0;

    for(int i = lo; i <= hi; i++){
        is_prime_half(i, &n_mod);
        sum += n_mod;
    }

    return sum;
}

int count_modops_sqrt(int lo, int hi){
    int n_mod = 0;
    int sum = 0;

    for(int i = lo; i <= hi; i++){
        is_prime_sqrt(i, &n_mod);
        sum += n_mod;
    }

    return sum;
}