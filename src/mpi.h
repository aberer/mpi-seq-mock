#ifndef MPI_H
#define MPI_H

#define MPI_COMM_WORLD 0

typedef int MPI_Op;
typedef int MPI_Comm;
typedef int MPI_Datatype; 

void MPI_Init( int argc, char **argv);
void MPI_Finalize(); 



#endif /* MPI_H */

 
