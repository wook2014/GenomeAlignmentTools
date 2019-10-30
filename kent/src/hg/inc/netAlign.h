/* netAlign.h was originally generated by the autoSql program, which also 
 * generated netAlign.c and netAlign.sql.  This header links the database and
 * the RAM representation of objects. */

/* Copyright (C) 2002 The Regents of the University of California 
 * See README in this or parent directory for licensing information. */

#ifndef NETALIGN_H
#define NETALIGN_H

struct netAlign
/* Database representation of a net of alignments. */
    {
    struct netAlign *next;  /* Next in singly linked list. */
    unsigned level;	/* Level of alignment */
    char *tName;	/* Target chromosome */
    unsigned tStart;	/* Start on target */
    unsigned tEnd;	/* End on target */
    char strand[2];	/* Orientation of query. + or - */
    char *qName;	/* Query chromosome */
    unsigned qStart;	/* Start on query */
    unsigned qEnd;	/* End on query */
    unsigned chainId;	/* Associated chain Id with alignment details */
    unsigned ali;	/* Bases in gap-free alignments */
    double score;	/* Score - a number proportional to 100x matching bases */
    int qOver;	/* Overlap with parent gap on query side. -1 for undefined */
    int qFar;	/* Distance from parent gap on query side. -1 for undefined */
    int qDup;	/* Bases with two or more copies in query. -1 for undefined */
    char *type;	/* Syntenic type: gap/top/syn/nonsyn/inv */
    int tN;	/* Unsequenced bases on target. -1 for undefined */
    int qN;	/* Unsequenced bases on query. -1 for undefined */
    int tR;	/* RepeatMasker bases on target. -1 for undefined */
    int qR;	/* RepeatMasker bases on query. -1 for undefined */
    int tNewR;	/* Lineage specific repeats on target. -1 for undefined */
    int qNewR;	/* Lineage specific repeats on query. -1 for undefined */
    int tOldR;	/* Bases of ancient repeats on target. -1 for undefined */
    int qOldR;	/* Bases of ancient repeats on query. -1 for undefined */
    int tTrf;	/* Bases of Tandam repeats on target. -1 for undefined */
    int qTrf;	/* Bases of Tandam repeats on query. -1 for undefined */
    };

void netAlignStaticLoad(char **row, struct netAlign *ret);
/* Load a row from netAlign table into ret.  The contents of ret will
 * be replaced at the next call to this function. */

struct netAlign *netAlignLoad(char **row);
/* Load a netAlign from row fetched with select * from netAlign
 * from database.  Dispose of this with netAlignFree(). */

struct netAlign *netAlignLoadAll(char *fileName);
/* Load all netAlign from a tab-separated file.
 * Dispose of this with netAlignFreeList(). */

struct netAlign *netAlignCommaIn(char **pS, struct netAlign *ret);
/* Create a netAlign out of a comma separated string. 
 * This will fill in ret if non-null, otherwise will
 * return a new netAlign */

void netAlignFree(struct netAlign **pEl);
/* Free a single dynamically allocated netAlign such as created
 * with netAlignLoad(). */

void netAlignFreeList(struct netAlign **pList);
/* Free a list of dynamically allocated netAlign's */

void netAlignOutput(struct netAlign *el, FILE *f, char sep, char lastSep);
/* Print out netAlign.  Separate fields with sep. Follow last field with lastSep. */

#define netAlignTabOut(el,f) netAlignOutput(el,f,'\t','\n');
/* Print out netAlign as a line in a tab-separated file. */

#define netAlignCommaOut(el,f) netAlignOutput(el,f,',',',');
/* Print out netAlign as a comma separated list including final comma. */

/* -------------------------------- End autoSql Generated Code -------------------------------- */

#endif /* NETALIGN_H */
