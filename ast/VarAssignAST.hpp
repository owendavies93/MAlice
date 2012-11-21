#ifndef VAR_ASSIGN_AST_H
#define VAR_ASSIGN_AST_H

#include "ASTNode.hpp"
#include "ExprAST.hpp"
#include "../idents/Variable.hpp"

class VarAssignAST : public ASTNode {
	boost::shared_ptr<SymbolTable> _st;
	string _varName;
	boost::shared_ptr<ExprAST> _expr;
	boost::shared_ptr<Variable> _varObj;

public:
	VarAssignAST(boost::shared_ptr<SymbolTable> st, string varName, boost::shared_ptr<ExprAST> expr);
	void check();
};

#endif