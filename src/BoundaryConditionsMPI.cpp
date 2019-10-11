#include "BoundaryConditionsMPI.h"
using namespace std;



// Class constructor 
BoundaryConditionsMPI::BoundaryConditionsMPI(int id){ 
	this->id = id;

};

// Class destructor 
BoundaryConditionsMPI::~BoundaryConditionsMPI(void){
}; 

int BoundaryConditionsMPI::getId() const{
	return id;	
}

void BoundaryConditionsMPI::setId(int id){
	this->id = id;
}

string BoundaryConditionsMPI::getName(){
	return name;	
}

void BoundaryConditionsMPI::setName(string name){
	this->name = name;
}


int BoundaryConditionsMPI::getNoOfFaces() const{
	return noOfFaces;	
}

void BoundaryConditionsMPI::setNoOfFaces(int noOfFaces){
	this->noOfFaces = noOfFaces;
}

int BoundaryConditionsMPI::getStartFace() const{
	return startFace;	
}

void BoundaryConditionsMPI::setStartFace(int startFace){
	this->startFace = startFace;
}

int BoundaryConditionsMPI::getMyProcNo() const{
	return myProcNo;	
}

void BoundaryConditionsMPI::setMyProcNo(int myProcNo){
	this->myProcNo = myProcNo;
}

int BoundaryConditionsMPI::getNeighbProcNo() const{
	return neighbProcNo;	
}

void BoundaryConditionsMPI::setNeighbProcNo(int neighbProcNo){
	this->neighbProcNo = neighbProcNo;
}

void BoundaryConditionsMPI::setVariableValue(int variableNo, double Value){
	this->variableValue.setValue(variableNo, Value);
}

double BoundaryConditionsMPI::getVariableValue(int variableNo){
	return this->variableValue.getValue(variableNo);
}
void BoundaryConditionsMPI::setVariableType(int variableNo, string Type){
	this->variableType.setValue(variableNo, Type);
}

TensorO1<string>* BoundaryConditionsMPI::getVariableTypeArray(){
	return &this->variableType;
};

TensorO1<double>* BoundaryConditionsMPI::getVariableValueArray(){
	return &this->variableValue;
};

