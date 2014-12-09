#ifndef MPI_H
#define MPI_H

#define MPI_COMM_WORLD 0
#define MPI_IN_PLACE 0

#define MPI_INT 4 
#define MPI_UNSIGNED_LONG 4 
#define MPI_DOUBLE  8 


#define MPI_SUM 0  


typedef int MPI_Op;
typedef int MPI_Comm;
typedef int MPI_Datatype; 

void MPI_Init( int *argc, char ***argv);
void MPI_Finalize(); 
void MPI_Broadcast();

int MPI_Barrier(MPI_Comm comm);


int MPI_Comm_size(MPI_Comm comm, int *size);
int MPI_Comm_rank(MPI_Comm comm, int *rank); 
  

int MPI_Scatterv(void *sendbuf, int *sendcounts, int *displs, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm );
int MPI_Gatherv(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype, int root, MPI_Comm comm); 


int MPI_Bcast(void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm); 


#endif /* MPI_H */

 
