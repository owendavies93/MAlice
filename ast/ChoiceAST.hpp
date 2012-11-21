#ifndef CHOICE_AST
#define CHOICE_AST

#include "ASTNode.hpp"
#include "ExprAST.hpp"

class ChoiceAST : public ASTNode {
	boost::shared_ptr<SymbolTable> _st;
	boost::shared_ptr<ExprAST> _expr;
public:
	ChoiceAST(boost::shared_ptr<SymbolTable> st, boost::shared_ptr<ExprAST> expr);
	void check();
};

#endif