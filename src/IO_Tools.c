/*This file is generated by Bash-script.*/

#include <stdio.h>
#include <stdlib.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include "gapsio.h"
#include "IO_Tools.h"
int GAPS_IO_LoadLua2C(Gaps_IO_LuaInputEnv *pLuaenv,Gaps_IO_InputsContainer *pInputs)
{
	GAPS_IO_Load_double(pLuaenv,"Unit_B",&(pInputs->Unit_B));
	GAPS_IO_Load_double(pLuaenv,"Unit_E",&(pInputs->Unit_E));
	GAPS_IO_Load_double(pLuaenv,"Unit_Time",&(pInputs->Unit_Time));
	GAPS_IO_Load_double(pLuaenv,"Unit_Space",&(pInputs->Unit_Space));
	GAPS_IO_Load_double(pLuaenv,"Unit_P",&(pInputs->Unit_P));
	GAPS_IO_Load_double(pLuaenv,"Unit_V",&(pInputs->Unit_V));
	GAPS_IO_Load_double(pLuaenv,"Unit_A",&(pInputs->Unit_A));
	GAPS_IO_Load_double(pLuaenv,"Unit_Phi",&(pInputs->Unit_Phi));
	GAPS_IO_Load_double(pLuaenv,"Unit_Energy",&(pInputs->Unit_Energy));
	GAPS_IO_Load_double(pLuaenv,"Unit_Mass",&(pInputs->Unit_Mass));
	GAPS_IO_Load_double(pLuaenv,"Unit_Charge",&(pInputs->Unit_Charge));
	GAPS_IO_Load_double(pLuaenv,"dT",&(pInputs->dT));
	GAPS_IO_Load_long(pLuaenv,"num_total_particles",&(pInputs->num_total_particles));
	GAPS_IO_Load_long(pLuaenv,"SavePerNSteps",&(pInputs->SavePerNSteps));
	GAPS_IO_Load_long(pLuaenv,"num_steps",&(pInputs->num_steps));
	GAPS_IO_Load_long(pLuaenv,"num_steps_saved",&(pInputs->num_steps_saved));
	GAPS_IO_Load_long(pLuaenv,"OpenDataSaving",&(pInputs->OpenDataSaving));
	GAPS_IO_Load_long(pLuaenv,"Open_Cal_Work",&(pInputs->Open_Cal_Work));
	GAPS_IO_Load_long(pLuaenv,"Open_Cal_Acceleration",&(pInputs->Open_Cal_Acceleration));
	GAPS_IO_Load_double(pLuaenv,"HenonLambda",&(pInputs->HenonLambda));
	GAPS_IO_Load_double(pLuaenv,"EMField_scaleE",&(pInputs->EMField_scaleE));
	GAPS_IO_Load_double(pLuaenv,"EMField_scaleB",&(pInputs->EMField_scaleB));
	GAPS_IO_Load_long(pLuaenv,"Pusher_Type",&(pInputs->Pusher_Type));
	GAPS_IO_Load_double(pLuaenv,"Pusher_RootFindingTol",&(pInputs->Pusher_RootFindingTol));
	GAPS_IO_Load_long(pLuaenv,"Pusher_RungeKutta_Dim",&(pInputs->Pusher_RungeKutta_Dim));
	GAPS_IO_Load_long(pLuaenv,"Pusher_RungeKutta_Order",&(pInputs->Pusher_RungeKutta_Order));
	GAPS_IO_Load_long(pLuaenv,"Pusher_NIntegral_N",&(pInputs->Pusher_NIntegral_N));
	GAPS_IO_Load_long(pLuaenv,"Pusher_RECSA_GF4D_Order",&(pInputs->Pusher_RECSA_GF4D_Order));
	GAPS_IO_Load_long(pLuaenv,"EMField_Type",&(pInputs->EMField_Type));
	GAPS_IO_Load_long(pLuaenv,"EMField_CalConsistentField",&(pInputs->EMField_CalConsistentField));
	GAPS_IO_Load_long(pLuaenv,"EMField_Cal_B",&(pInputs->EMField_Cal_B));
	GAPS_IO_Load_long(pLuaenv,"EMField_Cal_E",&(pInputs->EMField_Cal_E));
	GAPS_IO_Load_double(pLuaenv,"EMField_B0",&(pInputs->EMField_B0));
	GAPS_IO_Load_double(pLuaenv,"EMField_E0",&(pInputs->EMField_E0));
	GAPS_IO_Load_double(pLuaenv,"EMField_Uniform_AngleEB",&(pInputs->EMField_Uniform_AngleEB));
	GAPS_IO_Load_double(pLuaenv,"EMField_Tokamak_R0",&(pInputs->EMField_Tokamak_R0));
	GAPS_IO_Load_double(pLuaenv,"EMField_Tokamak_q",&(pInputs->EMField_Tokamak_q));
	GAPS_IO_Load_double(pLuaenv,"EMField_Tokamak_a",&(pInputs->EMField_Tokamak_a));
	GAPS_IO_Load_string(pLuaenv,"EMField_Discrete_Filename",pInputs->EMField_Discrete_Filename);
	GAPS_IO_Load_double(pLuaenv,"EMField_RadNonUniform_R0",&(pInputs->EMField_RadNonUniform_R0));
	GAPS_IO_Load_double(pLuaenv,"EMField_EarthDipole_R0",&(pInputs->EMField_EarthDipole_R0));
	GAPS_IO_Load_double(pLuaenv,"EMField_EOscillator_R0",&(pInputs->EMField_EOscillator_R0));
	GAPS_IO_Load_double(pLuaenv,"EMField_MagMirrorChain_Rm",&(pInputs->EMField_MagMirrorChain_Rm));
	GAPS_IO_Load_double(pLuaenv,"EMField_MagMirrorChain_S",&(pInputs->EMField_MagMirrorChain_S));
	GAPS_IO_Load_long(pLuaenv,"ExtForce_Cal_RadLarmor",&(pInputs->ExtForce_Cal_RadLarmor));
	GAPS_IO_Load_double(pLuaenv,"ExtForce_RadLarmor_Const",&(pInputs->ExtForce_RadLarmor_Const));
	GAPS_IO_Load_long(pLuaenv,"ExtForce_Cal_GCElecCollision",&(pInputs->ExtForce_Cal_GCElecCollision));
	GAPS_IO_Load_double(pLuaenv,"ExtForce_GCElecCollision_Const",&(pInputs->ExtForce_GCElecCollision_Const));
	GAPS_IO_Load_double(pLuaenv,"ExtForce_GCElecCollision_Ne",&(pInputs->ExtForce_GCElecCollision_Ne));
	GAPS_IO_Load_double(pLuaenv,"ExtForce_GCElecCollision_LnLambda",&(pInputs->ExtForce_GCElecCollision_LnLambda));
	GAPS_IO_Load_long(pLuaenv,"ExtForce_Cal_GCElecBremsstrahlung",&(pInputs->ExtForce_Cal_GCElecBremsstrahlung));
	GAPS_IO_Load_double(pLuaenv,"ExtForce_GCElecBremsstrahlung_Const",&(pInputs->ExtForce_GCElecBremsstrahlung_Const));
	GAPS_IO_Load_double(pLuaenv,"ExtForce_GCElecBremsstrahlung_Ne",&(pInputs->ExtForce_GCElecBremsstrahlung_Ne));
	GAPS_IO_Load_double(pLuaenv,"ExtForce_GCElecBremsstrahlung_Zeff",&(pInputs->ExtForce_GCElecBremsstrahlung_Zeff));
	GAPS_IO_Load_long(pLuaenv,"Init_Num_Particles",&(pInputs->Init_Num_Particles));
	GAPS_IO_Load_string(pLuaenv,"Init_Status_Type",pInputs->Init_Status_Type);
	GAPS_IO_Load_string(pLuaenv,"Init_Ptc_Type",pInputs->Init_Ptc_Type);
	GAPS_IO_Load_string(pLuaenv,"Init_X_Type",pInputs->Init_X_Type);
	GAPS_IO_Load_string(pLuaenv,"Init_P_Type",pInputs->Init_P_Type);
	GAPS_IO_Load_string(pLuaenv,"Init_Aclr_Type",pInputs->Init_Aclr_Type);
	GAPS_IO_Load_double(pLuaenv,"Init_X_Torus_MajorRadius",&(pInputs->Init_X_Torus_MajorRadius));
	GAPS_IO_Load_double(pLuaenv,"Init_X_ParabolicTorus_MajorRadius",&(pInputs->Init_X_ParabolicTorus_MajorRadius));
	GAPS_IO_Load_double(pLuaenv,"Init_X_ParabolicTorus_rmax",&(pInputs->Init_X_ParabolicTorus_rmax));
	GAPS_IO_Load_table(pLuaenv,"Init_X_Constant_X0",3,pInputs->Init_X_Constant_X0);
	GAPS_IO_Load_table(pLuaenv,"Init_X_Cuboid_Boundaries",6,pInputs->Init_X_Cuboid_Boundaries);
	GAPS_IO_Load_table(pLuaenv,"Init_X_Cylinder_Boundaries",6,pInputs->Init_X_Cylinder_Boundaries);
	GAPS_IO_Load_table(pLuaenv,"Init_X_Torus_Boundaries",6,pInputs->Init_X_Torus_Boundaries);
	GAPS_IO_Load_double(pLuaenv,"Init_P_Maxwell_Temp",&(pInputs->Init_P_Maxwell_Temp));
	GAPS_IO_Load_table(pLuaenv,"Init_P_Constant_P0",3,pInputs->Init_P_Constant_P0);
	GAPS_IO_Load_table(pLuaenv,"Init_P_Gyrocenter_SampleRegion",6,pInputs->Init_P_Gyrocenter_SampleRegion);
	GAPS_IO_Load_table(pLuaenv,"Init_Aclr_Constant_Aclr0",3,pInputs->Init_Aclr_Constant_Aclr0);
	GAPS_IO_Load_double(pLuaenv,"Init_Status_Constant_IsDead",&(pInputs->Init_Status_Constant_IsDead));
	GAPS_IO_Load_table(pLuaenv,"Init_Ptc_Constant_ChargeMass",2,pInputs->Init_Ptc_Constant_ChargeMass);
	GAPS_IO_Load_table(pLuaenv,"Init_P_Cuboid_Boundaries",6,pInputs->Init_P_Cuboid_Boundaries);
	GAPS_IO_Load_double(pLuaenv,"Init_P_Cuboid_E_k",&(pInputs->Init_P_Cuboid_E_k));
return 0;
}

int GAPS_IO_GenCalInfoMfile(char *filename,Gaps_IO_InputsContainer *pInputs)
{
	FILE *pf=fopen(filename,"w");	
	long i;
	fprintf(pf,"function y=GAPS_IO_LoadCalInfo()\n");
	fprintf(pf,"\ty.%s = %e;\n", "Unit_B",pInputs->Unit_B);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_E",pInputs->Unit_E);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_Time",pInputs->Unit_Time);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_Space",pInputs->Unit_Space);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_P",pInputs->Unit_P);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_V",pInputs->Unit_V);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_A",pInputs->Unit_A);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_Phi",pInputs->Unit_Phi);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_Energy",pInputs->Unit_Energy);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_Mass",pInputs->Unit_Mass);
	fprintf(pf,"\ty.%s = %e;\n", "Unit_Charge",pInputs->Unit_Charge);
	fprintf(pf,"\ty.%s = %e;\n", "dT",pInputs->dT);
	fprintf(pf,"\ty.%s = %ld;\n", "num_total_particles",pInputs->num_total_particles);
	fprintf(pf,"\ty.%s = %ld;\n", "SavePerNSteps",pInputs->SavePerNSteps);
	fprintf(pf,"\ty.%s = %ld;\n", "num_steps",pInputs->num_steps);
	fprintf(pf,"\ty.%s = %ld;\n", "num_steps_saved",pInputs->num_steps_saved);
	fprintf(pf,"\ty.%s = %ld;\n", "OpenDataSaving",pInputs->OpenDataSaving);
	fprintf(pf,"\ty.%s = %ld;\n", "Open_Cal_Work",pInputs->Open_Cal_Work);
	fprintf(pf,"\ty.%s = %ld;\n", "Open_Cal_Acceleration",pInputs->Open_Cal_Acceleration);
	fprintf(pf,"\ty.%s = %e;\n", "HenonLambda",pInputs->HenonLambda);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_scaleE",pInputs->EMField_scaleE);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_scaleB",pInputs->EMField_scaleB);
	fprintf(pf,"\ty.%s = %ld;\n", "Pusher_Type",pInputs->Pusher_Type);
	fprintf(pf,"\ty.%s = %e;\n", "Pusher_RootFindingTol",pInputs->Pusher_RootFindingTol);
	fprintf(pf,"\ty.%s = %ld;\n", "Pusher_RungeKutta_Dim",pInputs->Pusher_RungeKutta_Dim);
	fprintf(pf,"\ty.%s = %ld;\n", "Pusher_RungeKutta_Order",pInputs->Pusher_RungeKutta_Order);
	fprintf(pf,"\ty.%s = %ld;\n", "Pusher_NIntegral_N",pInputs->Pusher_NIntegral_N);
	fprintf(pf,"\ty.%s = %ld;\n", "Pusher_RECSA_GF4D_Order",pInputs->Pusher_RECSA_GF4D_Order);
	fprintf(pf,"\ty.%s = %ld;\n", "EMField_Type",pInputs->EMField_Type);
	fprintf(pf,"\ty.%s = %ld;\n", "EMField_CalConsistentField",pInputs->EMField_CalConsistentField);
	fprintf(pf,"\ty.%s = %ld;\n", "EMField_Cal_B",pInputs->EMField_Cal_B);
	fprintf(pf,"\ty.%s = %ld;\n", "EMField_Cal_E",pInputs->EMField_Cal_E);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_B0",pInputs->EMField_B0);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_E0",pInputs->EMField_E0);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_Uniform_AngleEB",pInputs->EMField_Uniform_AngleEB);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_Tokamak_R0",pInputs->EMField_Tokamak_R0);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_Tokamak_q",pInputs->EMField_Tokamak_q);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_Tokamak_a",pInputs->EMField_Tokamak_a);
	fprintf(pf,"\ty.%s = \'%s\';\n", "EMField_Discrete_Filename",pInputs->EMField_Discrete_Filename);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_RadNonUniform_R0",pInputs->EMField_RadNonUniform_R0);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_EarthDipole_R0",pInputs->EMField_EarthDipole_R0);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_EOscillator_R0",pInputs->EMField_EOscillator_R0);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_MagMirrorChain_Rm",pInputs->EMField_MagMirrorChain_Rm);
	fprintf(pf,"\ty.%s = %e;\n", "EMField_MagMirrorChain_S",pInputs->EMField_MagMirrorChain_S);
	fprintf(pf,"\ty.%s = %ld;\n", "ExtForce_Cal_RadLarmor",pInputs->ExtForce_Cal_RadLarmor);
	fprintf(pf,"\ty.%s = %e;\n", "ExtForce_RadLarmor_Const",pInputs->ExtForce_RadLarmor_Const);
	fprintf(pf,"\ty.%s = %ld;\n", "ExtForce_Cal_GCElecCollision",pInputs->ExtForce_Cal_GCElecCollision);
	fprintf(pf,"\ty.%s = %e;\n", "ExtForce_GCElecCollision_Const",pInputs->ExtForce_GCElecCollision_Const);
	fprintf(pf,"\ty.%s = %e;\n", "ExtForce_GCElecCollision_Ne",pInputs->ExtForce_GCElecCollision_Ne);
	fprintf(pf,"\ty.%s = %e;\n", "ExtForce_GCElecCollision_LnLambda",pInputs->ExtForce_GCElecCollision_LnLambda);
	fprintf(pf,"\ty.%s = %ld;\n", "ExtForce_Cal_GCElecBremsstrahlung",pInputs->ExtForce_Cal_GCElecBremsstrahlung);
	fprintf(pf,"\ty.%s = %e;\n", "ExtForce_GCElecBremsstrahlung_Const",pInputs->ExtForce_GCElecBremsstrahlung_Const);
	fprintf(pf,"\ty.%s = %e;\n", "ExtForce_GCElecBremsstrahlung_Ne",pInputs->ExtForce_GCElecBremsstrahlung_Ne);
	fprintf(pf,"\ty.%s = %e;\n", "ExtForce_GCElecBremsstrahlung_Zeff",pInputs->ExtForce_GCElecBremsstrahlung_Zeff);
	fprintf(pf,"\ty.%s = %ld;\n", "Init_Num_Particles",pInputs->Init_Num_Particles);
	fprintf(pf,"\ty.%s = \'%s\';\n", "Init_Status_Type",pInputs->Init_Status_Type);
	fprintf(pf,"\ty.%s = \'%s\';\n", "Init_Ptc_Type",pInputs->Init_Ptc_Type);
	fprintf(pf,"\ty.%s = \'%s\';\n", "Init_X_Type",pInputs->Init_X_Type);
	fprintf(pf,"\ty.%s = \'%s\';\n", "Init_P_Type",pInputs->Init_P_Type);
	fprintf(pf,"\ty.%s = \'%s\';\n", "Init_Aclr_Type",pInputs->Init_Aclr_Type);
	fprintf(pf,"\ty.%s = %e;\n", "Init_X_Torus_MajorRadius",pInputs->Init_X_Torus_MajorRadius);
	fprintf(pf,"\ty.%s = %e;\n", "Init_X_ParabolicTorus_MajorRadius",pInputs->Init_X_ParabolicTorus_MajorRadius);
	fprintf(pf,"\ty.%s = %e;\n", "Init_X_ParabolicTorus_rmax",pInputs->Init_X_ParabolicTorus_rmax);
	fprintf(pf,"\ty.%s = [","Init_X_Constant_X0");
	for(i=0;i<3;i++){fprintf(pf,"%e ",pInputs->Init_X_Constant_X0[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = [","Init_X_Cuboid_Boundaries");
	for(i=0;i<6;i++){fprintf(pf,"%e ",pInputs->Init_X_Cuboid_Boundaries[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = [","Init_X_Cylinder_Boundaries");
	for(i=0;i<6;i++){fprintf(pf,"%e ",pInputs->Init_X_Cylinder_Boundaries[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = [","Init_X_Torus_Boundaries");
	for(i=0;i<6;i++){fprintf(pf,"%e ",pInputs->Init_X_Torus_Boundaries[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = %e;\n", "Init_P_Maxwell_Temp",pInputs->Init_P_Maxwell_Temp);
	fprintf(pf,"\ty.%s = [","Init_P_Constant_P0");
	for(i=0;i<3;i++){fprintf(pf,"%e ",pInputs->Init_P_Constant_P0[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = [","Init_P_Gyrocenter_SampleRegion");
	for(i=0;i<6;i++){fprintf(pf,"%e ",pInputs->Init_P_Gyrocenter_SampleRegion[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = [","Init_Aclr_Constant_Aclr0");
	for(i=0;i<3;i++){fprintf(pf,"%e ",pInputs->Init_Aclr_Constant_Aclr0[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = %e;\n", "Init_Status_Constant_IsDead",pInputs->Init_Status_Constant_IsDead);
	fprintf(pf,"\ty.%s = [","Init_Ptc_Constant_ChargeMass");
	for(i=0;i<2;i++){fprintf(pf,"%e ",pInputs->Init_Ptc_Constant_ChargeMass[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = [","Init_P_Cuboid_Boundaries");
	for(i=0;i<6;i++){fprintf(pf,"%e ",pInputs->Init_P_Cuboid_Boundaries[i]);}
	fprintf(pf,"];\n");
	fprintf(pf,"\ty.%s = %e;\n", "Init_P_Cuboid_E_k",pInputs->Init_P_Cuboid_E_k);
	fprintf(pf,"end\n");
	fclose(pf);
	return 0;
}

int GAPS_IO_GenCalInfoPython(char *filename,Gaps_IO_InputsContainer *pInputs)
{
	FILE *pf=fopen(filename,"w");	
	long i;
	fprintf(pf,"class CalInfo():\n");
	fprintf(pf,"\t%s = %e\n", "Unit_B",pInputs->Unit_B);
	fprintf(pf,"\t%s = %e\n", "Unit_E",pInputs->Unit_E);
	fprintf(pf,"\t%s = %e\n", "Unit_Time",pInputs->Unit_Time);
	fprintf(pf,"\t%s = %e\n", "Unit_Space",pInputs->Unit_Space);
	fprintf(pf,"\t%s = %e\n", "Unit_P",pInputs->Unit_P);
	fprintf(pf,"\t%s = %e\n", "Unit_V",pInputs->Unit_V);
	fprintf(pf,"\t%s = %e\n", "Unit_A",pInputs->Unit_A);
	fprintf(pf,"\t%s = %e\n", "Unit_Phi",pInputs->Unit_Phi);
	fprintf(pf,"\t%s = %e\n", "Unit_Energy",pInputs->Unit_Energy);
	fprintf(pf,"\t%s = %e\n", "Unit_Mass",pInputs->Unit_Mass);
	fprintf(pf,"\t%s = %e\n", "Unit_Charge",pInputs->Unit_Charge);
	fprintf(pf,"\t%s = %e\n", "dT",pInputs->dT);
	fprintf(pf,"\t%s = %ld\n", "num_total_particles",pInputs->num_total_particles);
	fprintf(pf,"\t%s = %ld\n", "SavePerNSteps",pInputs->SavePerNSteps);
	fprintf(pf,"\t%s = %ld\n", "num_steps",pInputs->num_steps);
	fprintf(pf,"\t%s = %ld\n", "num_steps_saved",pInputs->num_steps_saved);
	fprintf(pf,"\t%s = %ld\n", "OpenDataSaving",pInputs->OpenDataSaving);
	fprintf(pf,"\t%s = %ld\n", "Open_Cal_Work",pInputs->Open_Cal_Work);
	fprintf(pf,"\t%s = %ld\n", "Open_Cal_Acceleration",pInputs->Open_Cal_Acceleration);
	fprintf(pf,"\t%s = %e\n", "HenonLambda",pInputs->HenonLambda);
	fprintf(pf,"\t%s = %e\n", "EMField_scaleE",pInputs->EMField_scaleE);
	fprintf(pf,"\t%s = %e\n", "EMField_scaleB",pInputs->EMField_scaleB);
	fprintf(pf,"\t%s = %ld\n", "Pusher_Type",pInputs->Pusher_Type);
	fprintf(pf,"\t%s = %e\n", "Pusher_RootFindingTol",pInputs->Pusher_RootFindingTol);
	fprintf(pf,"\t%s = %ld\n", "Pusher_RungeKutta_Dim",pInputs->Pusher_RungeKutta_Dim);
	fprintf(pf,"\t%s = %ld\n", "Pusher_RungeKutta_Order",pInputs->Pusher_RungeKutta_Order);
	fprintf(pf,"\t%s = %ld\n", "Pusher_NIntegral_N",pInputs->Pusher_NIntegral_N);
	fprintf(pf,"\t%s = %ld\n", "Pusher_RECSA_GF4D_Order",pInputs->Pusher_RECSA_GF4D_Order);
	fprintf(pf,"\t%s = %ld\n", "EMField_Type",pInputs->EMField_Type);
	fprintf(pf,"\t%s = %ld\n", "EMField_CalConsistentField",pInputs->EMField_CalConsistentField);
	fprintf(pf,"\t%s = %ld\n", "EMField_Cal_B",pInputs->EMField_Cal_B);
	fprintf(pf,"\t%s = %ld\n", "EMField_Cal_E",pInputs->EMField_Cal_E);
	fprintf(pf,"\t%s = %e\n", "EMField_B0",pInputs->EMField_B0);
	fprintf(pf,"\t%s = %e\n", "EMField_E0",pInputs->EMField_E0);
	fprintf(pf,"\t%s = %e\n", "EMField_Uniform_AngleEB",pInputs->EMField_Uniform_AngleEB);
	fprintf(pf,"\t%s = %e\n", "EMField_Tokamak_R0",pInputs->EMField_Tokamak_R0);
	fprintf(pf,"\t%s = %e\n", "EMField_Tokamak_q",pInputs->EMField_Tokamak_q);
	fprintf(pf,"\t%s = %e\n", "EMField_Tokamak_a",pInputs->EMField_Tokamak_a);
	fprintf(pf,"\t%s = \'%s\'\n", "EMField_Discrete_Filename",pInputs->EMField_Discrete_Filename);
	fprintf(pf,"\t%s = %e\n", "EMField_RadNonUniform_R0",pInputs->EMField_RadNonUniform_R0);
	fprintf(pf,"\t%s = %e\n", "EMField_EarthDipole_R0",pInputs->EMField_EarthDipole_R0);
	fprintf(pf,"\t%s = %e\n", "EMField_EOscillator_R0",pInputs->EMField_EOscillator_R0);
	fprintf(pf,"\t%s = %e\n", "EMField_MagMirrorChain_Rm",pInputs->EMField_MagMirrorChain_Rm);
	fprintf(pf,"\t%s = %e\n", "EMField_MagMirrorChain_S",pInputs->EMField_MagMirrorChain_S);
	fprintf(pf,"\t%s = %ld\n", "ExtForce_Cal_RadLarmor",pInputs->ExtForce_Cal_RadLarmor);
	fprintf(pf,"\t%s = %e\n", "ExtForce_RadLarmor_Const",pInputs->ExtForce_RadLarmor_Const);
	fprintf(pf,"\t%s = %ld\n", "ExtForce_Cal_GCElecCollision",pInputs->ExtForce_Cal_GCElecCollision);
	fprintf(pf,"\t%s = %e\n", "ExtForce_GCElecCollision_Const",pInputs->ExtForce_GCElecCollision_Const);
	fprintf(pf,"\t%s = %e\n", "ExtForce_GCElecCollision_Ne",pInputs->ExtForce_GCElecCollision_Ne);
	fprintf(pf,"\t%s = %e\n", "ExtForce_GCElecCollision_LnLambda",pInputs->ExtForce_GCElecCollision_LnLambda);
	fprintf(pf,"\t%s = %ld\n", "ExtForce_Cal_GCElecBremsstrahlung",pInputs->ExtForce_Cal_GCElecBremsstrahlung);
	fprintf(pf,"\t%s = %e\n", "ExtForce_GCElecBremsstrahlung_Const",pInputs->ExtForce_GCElecBremsstrahlung_Const);
	fprintf(pf,"\t%s = %e\n", "ExtForce_GCElecBremsstrahlung_Ne",pInputs->ExtForce_GCElecBremsstrahlung_Ne);
	fprintf(pf,"\t%s = %e\n", "ExtForce_GCElecBremsstrahlung_Zeff",pInputs->ExtForce_GCElecBremsstrahlung_Zeff);
	fprintf(pf,"\t%s = %ld\n", "Init_Num_Particles",pInputs->Init_Num_Particles);
	fprintf(pf,"\t%s = \'%s\'\n", "Init_Status_Type",pInputs->Init_Status_Type);
	fprintf(pf,"\t%s = \'%s\'\n", "Init_Ptc_Type",pInputs->Init_Ptc_Type);
	fprintf(pf,"\t%s = \'%s\'\n", "Init_X_Type",pInputs->Init_X_Type);
	fprintf(pf,"\t%s = \'%s\'\n", "Init_P_Type",pInputs->Init_P_Type);
	fprintf(pf,"\t%s = \'%s\'\n", "Init_Aclr_Type",pInputs->Init_Aclr_Type);
	fprintf(pf,"\t%s = %e\n", "Init_X_Torus_MajorRadius",pInputs->Init_X_Torus_MajorRadius);
	fprintf(pf,"\t%s = %e\n", "Init_X_ParabolicTorus_MajorRadius",pInputs->Init_X_ParabolicTorus_MajorRadius);
	fprintf(pf,"\t%s = %e\n", "Init_X_ParabolicTorus_rmax",pInputs->Init_X_ParabolicTorus_rmax);
	fprintf(pf,"\t%s = [%e","Init_X_Constant_X0",pInputs->Init_X_Constant_X0[0]);
	for(i=1;i<3;i++){fprintf(pf,",%e ",pInputs->Init_X_Constant_X0[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = [%e","Init_X_Cuboid_Boundaries",pInputs->Init_X_Cuboid_Boundaries[0]);
	for(i=1;i<6;i++){fprintf(pf,",%e ",pInputs->Init_X_Cuboid_Boundaries[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = [%e","Init_X_Cylinder_Boundaries",pInputs->Init_X_Cylinder_Boundaries[0]);
	for(i=1;i<6;i++){fprintf(pf,",%e ",pInputs->Init_X_Cylinder_Boundaries[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = [%e","Init_X_Torus_Boundaries",pInputs->Init_X_Torus_Boundaries[0]);
	for(i=1;i<6;i++){fprintf(pf,",%e ",pInputs->Init_X_Torus_Boundaries[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = %e\n", "Init_P_Maxwell_Temp",pInputs->Init_P_Maxwell_Temp);
	fprintf(pf,"\t%s = [%e","Init_P_Constant_P0",pInputs->Init_P_Constant_P0[0]);
	for(i=1;i<3;i++){fprintf(pf,",%e ",pInputs->Init_P_Constant_P0[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = [%e","Init_P_Gyrocenter_SampleRegion",pInputs->Init_P_Gyrocenter_SampleRegion[0]);
	for(i=1;i<6;i++){fprintf(pf,",%e ",pInputs->Init_P_Gyrocenter_SampleRegion[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = [%e","Init_Aclr_Constant_Aclr0",pInputs->Init_Aclr_Constant_Aclr0[0]);
	for(i=1;i<3;i++){fprintf(pf,",%e ",pInputs->Init_Aclr_Constant_Aclr0[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = %e\n", "Init_Status_Constant_IsDead",pInputs->Init_Status_Constant_IsDead);
	fprintf(pf,"\t%s = [%e","Init_Ptc_Constant_ChargeMass",pInputs->Init_Ptc_Constant_ChargeMass[0]);
	for(i=1;i<2;i++){fprintf(pf,",%e ",pInputs->Init_Ptc_Constant_ChargeMass[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = [%e","Init_P_Cuboid_Boundaries",pInputs->Init_P_Cuboid_Boundaries[0]);
	for(i=1;i<6;i++){fprintf(pf,",%e ",pInputs->Init_P_Cuboid_Boundaries[i]);}
	fprintf(pf,"]\n");
	fprintf(pf,"\t%s = %e\n", "Init_P_Cuboid_E_k",pInputs->Init_P_Cuboid_E_k);
	fclose(pf);
	return 0;
}
