/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : MAlice.g
 *     -                            On : 2012-11-21 10:13:56
 *     -                 for the lexer : MAliceLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer MAliceLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pMAliceLexer, which is returned from a call to MAliceLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pMAliceLexer are  as follows:
 *
 *  -  void      pMAliceLexer->T__36(pMAliceLexer)
 *  -  void      pMAliceLexer->T__37(pMAliceLexer)
 *  -  void      pMAliceLexer->T__38(pMAliceLexer)
 *  -  void      pMAliceLexer->T__39(pMAliceLexer)
 *  -  void      pMAliceLexer->T__40(pMAliceLexer)
 *  -  void      pMAliceLexer->T__41(pMAliceLexer)
 *  -  void      pMAliceLexer->T__42(pMAliceLexer)
 *  -  void      pMAliceLexer->T__43(pMAliceLexer)
 *  -  void      pMAliceLexer->T__44(pMAliceLexer)
 *  -  void      pMAliceLexer->T__45(pMAliceLexer)
 *  -  void      pMAliceLexer->T__46(pMAliceLexer)
 *  -  void      pMAliceLexer->T__47(pMAliceLexer)
 *  -  void      pMAliceLexer->T__48(pMAliceLexer)
 *  -  void      pMAliceLexer->T__49(pMAliceLexer)
 *  -  void      pMAliceLexer->T__50(pMAliceLexer)
 *  -  void      pMAliceLexer->T__51(pMAliceLexer)
 *  -  void      pMAliceLexer->T__52(pMAliceLexer)
 *  -  void      pMAliceLexer->T__53(pMAliceLexer)
 *  -  void      pMAliceLexer->T__54(pMAliceLexer)
 *  -  void      pMAliceLexer->T__55(pMAliceLexer)
 *  -  void      pMAliceLexer->T__56(pMAliceLexer)
 *  -  void      pMAliceLexer->T__57(pMAliceLexer)
 *  -  void      pMAliceLexer->T__58(pMAliceLexer)
 *  -  void      pMAliceLexer->T__59(pMAliceLexer)
 *  -  void      pMAliceLexer->T__60(pMAliceLexer)
 *  -  void      pMAliceLexer->T__61(pMAliceLexer)
 *  -  void      pMAliceLexer->T__62(pMAliceLexer)
 *  -  void      pMAliceLexer->T__63(pMAliceLexer)
 *  -  void      pMAliceLexer->T__64(pMAliceLexer)
 *  -  void      pMAliceLexer->T__65(pMAliceLexer)
 *  -  void      pMAliceLexer->T__66(pMAliceLexer)
 *  -  void      pMAliceLexer->T__67(pMAliceLexer)
 *  -  void      pMAliceLexer->T__68(pMAliceLexer)
 *  -  void      pMAliceLexer->T__69(pMAliceLexer)
 *  -  void      pMAliceLexer->T__70(pMAliceLexer)
 *  -  void      pMAliceLexer->T__71(pMAliceLexer)
 *  -  void      pMAliceLexer->T__72(pMAliceLexer)
 *  -  void      pMAliceLexer->T__73(pMAliceLexer)
 *  -  void      pMAliceLexer->T__74(pMAliceLexer)
 *  -  void      pMAliceLexer->T__75(pMAliceLexer)
 *  -  void      pMAliceLexer->T__76(pMAliceLexer)
 *  -  void      pMAliceLexer->T__77(pMAliceLexer)
 *  -  void      pMAliceLexer->T__78(pMAliceLexer)
 *  -  void      pMAliceLexer->T__79(pMAliceLexer)
 *  -  void      pMAliceLexer->T__80(pMAliceLexer)
 *  -  void      pMAliceLexer->T__81(pMAliceLexer)
 *  -  void      pMAliceLexer->T__82(pMAliceLexer)
 *  -  void      pMAliceLexer->T__83(pMAliceLexer)
 *  -  void      pMAliceLexer->T__84(pMAliceLexer)
 *  -  void      pMAliceLexer->T__85(pMAliceLexer)
 *  -  void      pMAliceLexer->T__86(pMAliceLexer)
 *  -  void      pMAliceLexer->T__87(pMAliceLexer)
 *  -  void      pMAliceLexer->T__88(pMAliceLexer)
 *  -  void      pMAliceLexer->T__89(pMAliceLexer)
 *  -  void      pMAliceLexer->T__90(pMAliceLexer)
 *  -  void      pMAliceLexer->T__91(pMAliceLexer)
 *  -  void      pMAliceLexer->T__92(pMAliceLexer)
 *  -  void      pMAliceLexer->T__93(pMAliceLexer)
 *  -  void      pMAliceLexer->T__94(pMAliceLexer)
 *  -  void      pMAliceLexer->T__95(pMAliceLexer)
 *  -  void      pMAliceLexer->T__96(pMAliceLexer)
 *  -  void      pMAliceLexer->T__97(pMAliceLexer)
 *  -  void      pMAliceLexer->ID(pMAliceLexer)
 *  -  void      pMAliceLexer->INT(pMAliceLexer)
 *  -  void      pMAliceLexer->COMMENT(pMAliceLexer)
 *  -  void      pMAliceLexer->WS(pMAliceLexer)
 *  -  void      pMAliceLexer->STRING(pMAliceLexer)
 *  -  void      pMAliceLexer->APOSTROPHE(pMAliceLexer)
 *  -  void      pMAliceLexer->CATCHALL(pMAliceLexer)
 *  -  void      pMAliceLexer->Tokens(pMAliceLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_MAliceLexer_H
#define _MAliceLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct MAliceLexer_Ctx_struct MAliceLexer, * pMAliceLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for MAliceLexer
 */
struct MAliceLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mT__36)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__37)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__38)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__39)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__40)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__41)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__42)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__43)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__44)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__45)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__46)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__47)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__48)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__49)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__50)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__51)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__52)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__53)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__54)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__55)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__56)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__57)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__58)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__59)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__60)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__61)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__62)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__63)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__64)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__65)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__66)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__67)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__68)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__69)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__70)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__71)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__72)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__73)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__74)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__75)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__76)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__77)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__78)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__79)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__80)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__81)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__82)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__83)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__84)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__85)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__86)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__87)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__88)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__89)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__90)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__91)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__92)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__93)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__94)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__95)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__96)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mT__97)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mID)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mINT)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mCOMMENT)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mWS)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mSTRING)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mAPOSTROPHE)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mCATCHALL)	(struct MAliceLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct MAliceLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct MAliceLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pMAliceLexer MAliceLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pMAliceLexer MAliceLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define WHILE      22
#define EOF      -1
#define T__93      93
#define T__94      94
#define T__91      91
#define INC      17
#define T__92      92
#define T__90      90
#define RETURN      20
#define CPL      15
#define BODY      6
#define APOSTROPHE      30
#define COMMENT      33
#define T__97      97
#define VARDEC      9
#define T__96      96
#define T__95      95
#define T__80      80
#define T__81      81
#define T__82      82
#define T__83      83
#define NS      28
#define VARSTAT      12
#define STDIN      21
#define INT      31
#define T__85      85
#define T__84      84
#define T__87      87
#define T__86      86
#define T__89      89
#define T__88      88
#define T__71      71
#define WS      34
#define T__72      72
#define T__70      70
#define FUNC      14
#define T__76      76
#define T__75      75
#define T__74      74
#define T__73      73
#define T__79      79
#define T__78      78
#define T__77      77
#define T__68      68
#define T__69      69
#define T__66      66
#define DEC      18
#define T__67      67
#define T__64      64
#define T__65      65
#define T__62      62
#define T__63      63
#define PROCDEC      5
#define T__61      61
#define ID      29
#define T__60      60
#define IF      24
#define T__55      55
#define T__56      56
#define T__57      57
#define T__58      58
#define PROG      4
#define T__51      51
#define EXPR      27
#define T__52      52
#define T__53      53
#define T__54      54
#define T__59      59
#define T__50      50
#define CHOICE      23
#define T__42      42
#define T__43      43
#define T__40      40
#define T__41      41
#define T__46      46
#define T__47      47
#define NEWARR      11
#define T__44      44
#define T__45      45
#define T__48      48
#define T__49      49
#define NEWVAR      10
#define PRINT      19
#define ELSEIF      26
#define HPL      8
#define T__36      36
#define T__37      37
#define T__38      38
#define T__39      39
#define ASSIGN      16
#define CATCHALL      35
#define COND      25
#define FUNCDEC      7
#define ARRMEMBER      13
#define STRING      32
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for MAliceLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
