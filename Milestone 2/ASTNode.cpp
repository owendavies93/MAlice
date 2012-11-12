#include "ASTNode.hpp"

ASTNode::ASTNode(SymbolTable* st) {
	_st = st;
}

vector<ASTNode*> ASTNode::getChildren() {
	return _children;
}
