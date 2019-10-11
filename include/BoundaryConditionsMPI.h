#ifndef BOUNDARYCONDITIONSMPI_H
#define BOUNDARYCONDITIONSMPI_H
#include "sysInclude.h"
#include "mathFunctions.h"
#include "Point.h"
#include "Face.h"
#include "Cell.h"
#include "Gasdynamics.h"

class BoundaryConditionsMPI{
	
public:
	/// Constructor function
	BoundaryConditionsMPI(int id = 0);				
	
	/// Destructor function
	~BoundaryConditionsMPI(); 

	/// Get method for boundary id
	int getId() const;

	/// Set method for boundary id
	void setId(int id);

	/// Get the boundary name
	string getName();

	/// Set the boundary name
	void setName(string name);

	/// Get the number of faces
	int getNoOfFaces() const;

	/// Set the number of faces
	void setNoOfFaces(int noOfFaces);
	
	/// Get the starting face
	int getStartFace() const;

	/// Set the starting face
	void setStartFace(int startFace);
	
	/// Get my processor number  
	int getMyProcNo() const;
	
	/// Get my processor number  
	void setMyProcNo(int myProcNo);
	
	/// Get Neighbour processor number  
	int getNeighbProcNo() const;
	
	/// Get Neighbour processor number  
	void setNeighbProcNo(int neighbProcNo);
	
	/// Set variable value for all the primitive variables
	void setVariableValue(int variableNo, double Value);

	/// Set variable type for all the primitive variables
	double getVariableValue(int variableNo);

	/// Get a pointer to the variableValue array
	TensorO1<double>* getVariableValueArray();

	/// Set variable type for all the primitive variables
	void setVariableType(int variableNo, string Type);
		
	/// Get a pointer to the variableType array
	TensorO1<string>* getVariableTypeArray();

	/*__________________________________________________________________________________________*/
private:
	/// OpenFOAM identifier of the boundary
	int id;					

	/// Boundary name
	string name;						

	/// Number of faces for the boundary
	int noOfFaces;						

	/// Starting face for the boundary 
	int startFace;						
        
        /// My processor number  
        int myProcNo;
        
        /// Neighbour processor number  
        int neighbProcNo;
        
	/// Variable type for each of the primitive variables for this boundary condition (1 type for scalar)
	TensorO1<string> variableType;	

	/// Value of the primitive variable for this boundary condition
	TensorO1<double> variableValue;        
};

#endif
