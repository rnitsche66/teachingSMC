(* ********************************************************************* *)
(* This is a Mma init file such that the local NonLinSys Toolbox will be *)
(* used or loaded for Mma                                                *)
(*                                                                       *)
(* Rainer Nitsche, 03.05.2019                                            *)
(* ********************************************************************* *)

(* Mma TB auf OneDrive umgezogen am 25.09.2020 *)
NonLinDir="c:\\Users\\nitr\\OneDrive - Festo\\home\\mathematica\\NonLinSys";
(* NonLinDir="c:\\Users\\nitr\\Documents\\mathematica\\NonLinSys"; *)

(* *************************************************************************** *)
AppendTo[$Path,NonLinDir]
(* ************************************************************************** *)
(* Deklarationen zum automatischen Nachladen                                  *)
(* ************************************************************************** *)
DeclarePackage["ToMatlab`",
               {"ToMatlab", "WriteMatlab", "PrintMatlab", "RulesToMatlab"}
	       ];
DeclarePackage["MatlabCode`",
               {"MLMatlabSimulation", "MLIntegrator", "MLtsim"}
	       ];
DeclarePackage["SymbMan`",
               {"ListVec", "ListSubst", "Reshape", "MSpan", "RowVecQ",
"ScalarQ", "SymbolQ", "NotSymbolQ", "RealQ", "ConstantQ",
"NotConstantQ", "ColVecQ", "MatrixNotVectorQ", "VecOrScalarQ",
"FunctionQ", "SimpleFunctionQ", "SystemFuncQ", "NotSystemFuncQ",
"FracQ", "RationalQ", "ProductQ", "PowerQ", "SumQ", "NMatrixQ",
"SameNumberOfRowsQ", "SameNumberOfColsQ", "DerivativeQ", "RuleListQ",
"FunctionListQ", "ReplaceDeriv", "KeepArgs", "ReturnRules", "ColVec",
"GetColVec", "GetRowVec", "CombineList", "Concat", "GenVector",
"ListOfVars", "CountVars", "ListOfFuncs", "SystemFuncs",
"ReturnRulesDeriv", "LDisplay", "CountLDisplay", "Unblank", "MyPrint",
"AssignOut", "TestPattern", "EmptyListQ"}
              ];
DeclarePackage["FormDep`",
               {"Arguments", "FuncDep", "Abbreviate", "Sortstates",
"RemoveSimpleFunctions", "RemoveArguments", "ReturnRules", "NewName",
"AllDerivatives", "BuildFunctionRules", "UnionRules", "SortVar"}
              ];

DeclarePackage["NLOperat`",
               {"Jacobi", "Lf", "adf", "MA", "NA", "GenUbar",
		   "GenUbarDot", "Interactive", "GenerateExtVF"}];
DeclarePackage["CMexCode`",
	       {"CMexCodeHeader", "CMexCodeTrailer", "CMexCodePlainFunc"}];

DeclarePackage["ObserverNormalForm`",
              {"ObservabilityMatrixQB", 
               "TransformationIntoObservabilityNormalform",                   
               "TransformationIntoBrunovskyNormalformObserver"}
  	                        ];   



(* ************************************************************************** *)
(* Ende der Deklarationen zum automatischen Nachladen                         *)
(* ************************************************************************** *)

(* 
  Print["Loading Packages:"];
  Get[NonLinDir <> "SymbMan.m"]
Print["  SymbMan.m "];
  Get[NonLinDir <> "FormDep.m"]

Print["  FormDep.m "];
  Get[NonLinDir <> "NLOperat.m"]
Print["  NLOperat.m "];
*)
  Print[" ************************************************ "];
   Print["Packages declared running... \n
	 c:\\Users\\nitr\\AppData\\Roaming\\Mathematica\\Kernel\\init.m"];
   Print[" ************************************************ "];

Print["Note a local development system is loaded - not the git repo!"]
   
   
   Print["Done. "];
(** User Mathematica initialization file **)

