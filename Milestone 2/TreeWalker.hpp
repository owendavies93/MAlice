#ifndef	TREE_WALKER_H
#define TREE_WALKER_H 

#include <antlr3.h>
#include <map>
#include "AST.hpp"

using namespace std;

class TreeWalker {
	typedef void (TreeWalker::*PROC)(pANTLR3_BASE_TREE, SymbolTable*, ASTNode*, int);
	map<string, PROC> _memberMap;
	SymbolTable* _topSt;
	pANTLR3_BASE_TREE _inputTree;
	AST* _outputTree;
	void init();
	void processPROG(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processPROCDEC(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processBODY(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processFUNCDEC(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processHPL(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processVARDEC(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processNEWVAR(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processNEWARR(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processVARSTAT(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processARRMEMBER(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processFUNC(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processCPL(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processASSIGN(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processINC(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processDEC(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processPRINT(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processRETURN(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processSTDIN(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processWHILE(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processCHOICE(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processIF(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processCOND(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	void processEXPR(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	pANTLR3_BASE_TREE childByNum(pANTLR3_BASE_TREE tree, int num);
	string createStringFromTree(pANTLR3_BASE_TREE tree);

public:
	void walk(pANTLR3_BASE_TREE, SymbolTable*, ASTNode* parent, int childNum);
	TreeWalker(SymbolTable* topSt, pANTLR3_BASE_TREE inputTree, AST* outputTree);
};

#endif