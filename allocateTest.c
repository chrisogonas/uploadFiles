#include "omp.h"

int omp_get_thread_num();
int omp_get_num_threads();

int main(int arg, char *argc[]) {
    int i;
    #pragma omp parallel num_threads(4) allocate(i)
    {
        int thread_id = omp_get_thread_num();
        int num_of_threads = omp_get_num_threads();
    }
    return(0);
}
