//
// Created by gitpod on 12/19/23.
//

#include <mpi.h>

int main(int argc, char** argv){
    MPI_Init(&argc, &argv);
    int rank, nprocs;

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_rank(MPI_COMM_WORLD, &nprocs);

    std::printf("Rank %d of %d procs\n", rank, nprocs);

    MPI_Finalize();
    return 0;

}