#ifndef ARRAY_ASSIGN_AST
#define ARRAY_ASSIGN_AST

#include "ASTNode.hpp"
#include "ExprAST.hpp"

class ArrayAssignAST : public ASTNode {

public:
	ArrayAssignAST(boost::shared_ptr<SymbolTable> st, string name, boost::shared_ptr<ExprAST> element, boost::shared_ptr<ExprAST> value);
};

#endif