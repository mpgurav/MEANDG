#ifndef RIEMANN_SOLVER
#define RIEMANN_SOLVER

#include "sysInclude.h"
#include "mathFunctions.h"
#include "Face.h"
#include "Cell.h"
#include "Gasdynamics.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Scalar Riemann Solvers ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

void scalarRiemannSolver(Face *face, int rkstep, int procBoundariesStartFace, double *receiveBuffer);
void BurgerRiemannSolver(Face *face, int rkstep, int procBoundariesStartFace, double *receiveBuffer);
void centralDifferenceHeatEquation(Face *face, int rkstep, int procBoundariesStartFace, double *receiveBuffer);
void RoeSolver(Face *face, int rkstep, int procBoundariesStartFace, double *receiveBuffer);
void RoeSolverNS(Face *face, int rkstep, int procBoundariesStartFace, double *receiveBuffer);
void LLFSolver(Face *face, int rkstep, int procBoundariesStartFace, double *receiveBuffer);
void LLFSolverNS(Face *face, int rkstep, int procBoundariesStartFace, double *receiveBuffer);

#endif
