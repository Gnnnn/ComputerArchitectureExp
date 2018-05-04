<<<<<<< HEAD
#include <omp.h>
#include <stdio.h>
int main() {
	int nthreads, tid;
	omp_set_num_threads(10);
#pragma omp parallel private(nthreads,tid)
	{
		tid = omp_get_thread_num();
		printf("Hello World from OMP thread %d\n", tid);
		if (tid == 0) {
			nthreads = omp_get_num_threads();
			printf("Number of threads is %d\n", nthreads);
		}
	}
}
=======
#include <omp.h>
#include <stdio.h>
int main() {
	int nthreads, tid;
	omp_set_num_threads(10);
#pragma omp parallel private(nthreads,tid)
	{
		tid = omp_get_thread_num();
		printf("Hello World from OMP thread %d\n", tid);
		if (tid == 0) {
			nthreads = omp_get_num_threads();
			printf("Number of threads is %d\n", nthreads);
		}
	}
}
>>>>>>> f159b6d8a5f0cbbcdce24e04581e65ba9f02f08d
