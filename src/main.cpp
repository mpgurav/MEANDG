/** @file */
#include "sysInclude.h"
#include "Tests.h"
#include <mpi.h>
using namespace std;


int main(int argc, char *argv[]){

        int myRank, totalRanks;
        int mpiError; 
	srand(int(time(0)));

	//runAllTests();

	mpiError = MPI_Init(&argc,&argv);
	
	if ( mpiError != 0 )
        {
                cout << "\n MPI myRank = " << myRank;
                cout << " MPI initialization Fatal error!\n";
                cout << " MPI_Init has returned nonzero ierr.\n";
                exit(1);
        }
        mpiError = MPI_Comm_size(MPI_COMM_WORLD, &totalRanks);
        mpiError = MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
        	
	Test::TestEulerEquations1();
	//Test::TestScalarTransportSolver();
        
        MPI_Barrier(MPI_COMM_WORLD);
        MPI_Finalize();
	return 0;
}
