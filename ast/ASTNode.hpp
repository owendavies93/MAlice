#ifndef AST_NODE_H
#define AST_NODE_H

#include <boost/shared_ptr.hpp>
#include <vector>
#include "../SymbolTable.hpp"
#include "../ASTVisitor.hpp"
#include <iostream>

class ASTNode {
    virtual void check() = 0;
protected:
    vector< boost::shared_ptr<ASTNode> > _children;
    boost::shared_ptr<SymbolTable> _st;
    boost::weak_ptr<ASTNode> _parent;
    int _lineNo;
public:
    ASTNode(boost::shared_ptr<SymbolTable> st,
              boost::weak_ptr<ASTNode> parent, int lineNo);
    vector< boost::shared_ptr<ASTNode> > getChildren();
    void addChild(boost::shared_ptr<ASTNode> child);
    boost::weak_ptr<ASTNode> getParent();
    virtual string getNodeName() = 0;
    virtual void print() = 0;
    // For nodes that don't have a function as a parent (Prog, FuncDec, ProcDec)
    virtual void accept(boost::shared_ptr<ASTVisitor> v);
    // For nodes that do have a function as a parent
    virtual void accept(boost::shared_ptr<ASTVisitor> v, boost::shared_ptr<AssemFunc> func);
};

#endif
