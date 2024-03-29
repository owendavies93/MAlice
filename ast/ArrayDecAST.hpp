#ifndef ARRAY_DEC_AST
#define ARRAY_DEC_AST

#include "ASTNode.hpp"
#include "ExprAST.hpp"
#include "../idents/Array.hpp"
#include "../ASTVisitor.hpp"

class ArrayDecAST : public ASTNode {
    boost::shared_ptr<SymbolTable> _st;
    boost::shared_ptr<ExprAST> _length;
    string _name;
    string _elemType;
    int _lineNo;
	boost::shared_ptr<Type> _typeObj;
    void check();
public:
    ArrayDecAST(boost::shared_ptr<SymbolTable> st,
                  boost::shared_ptr<ExprAST> expr, string name,
                  string typeName, boost::weak_ptr<ASTNode> parent,
                  int lineNo);
    void print();
    string getNodeName();
	void accept(boost::shared_ptr<ASTVisitor> v, boost::shared_ptr<AssemFunc> func);
  void accept(boost::shared_ptr<ASTVisitor> v);
};

#endif
