#include "mpi.h"

#include <string.h>


int MPI_Barrier(MPI_Comm comm)
{
  return 0 ; 
}

int MPI_Scatterv(void *sendbuf, int *sendcounts, int *displs, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm )
{
  memmove( recvbuf, sendbuf, sendcounts[0] * sendtype );
  return 0;   
}

int MPI_Gatherv(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  memmove(recvbuf, sendbuf, sendcount * sendtype); 
  return 0; 
}

int MPI_Comm_size(MPI_Comm comm, int *size)
{
  *size = 1; 
  return 0;  
}


int MPI_Comm_rank(MPI_Comm comm, int *rank)
{
  *rank = 0; 
  return 0; 
}

  
int MPI_Bcast(void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  return 0 ; 
}



void MPI_Init( int *argc, char ***argv)
{
}

void MPI_Finalize()
{
}


int MPI_Allreduce(void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  if(sendbuf != MPI_IN_PLACE )
    {
      memmove(recvbuf, sendbuf, count * datatype);
    }
  return 0 ; 
}
