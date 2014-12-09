#include "mpi.h" 

void MPI_Init( int argc, char **argv)
{
}

void MPI_Finalize()
{
}


int MPI_Allreduce(void *sendbuf, void *recvbuf, int count,
                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
}
