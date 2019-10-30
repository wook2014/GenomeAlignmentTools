/* bed6FloatScore.h was originally generated by the autoSql program, which also 
 * generated bed6FloatScore.c and bed6FloatScore.sql.  This header links the database and
 * the RAM representation of objects. */

/* Copyright (C) 2004 The Regents of the University of California 
 * See README in this or parent directory for licensing information. */

#ifndef BED6FLOATSCORE_H
#define BED6FLOATSCORE_H

#define BED6FLOATSCORE_NUM_COLS 6

struct bed6FloatScore
/* Really BED 4 +.  Like BED 6, but with floating-point score (not int). */
    {
    struct bed6FloatScore *next;  /* Next in singly linked list. */
    char *chrom;	/* Chromosome */
    unsigned chromStart;	/* Start position in chromosome */
    unsigned chromEnd;	/* End position in chromosome */
    char *name;	/* Name of item */
    float score;	/* Floating point score. */
    char strand[2];	/* + or - */
    };

void bed6FloatScoreStaticLoad(char **row, struct bed6FloatScore *ret);
/* Load a row from bed6FloatScore table into ret.  The contents of ret will
 * be replaced at the next call to this function. */

struct bed6FloatScore *bed6FloatScoreLoad(char **row);
/* Load a bed6FloatScore from row fetched with select * from bed6FloatScore
 * from database.  Dispose of this with bed6FloatScoreFree(). */

struct bed6FloatScore *bed6FloatScoreLoadAll(char *fileName);
/* Load all bed6FloatScore from whitespace-separated file.
 * Dispose of this with bed6FloatScoreFreeList(). */

struct bed6FloatScore *bed6FloatScoreLoadAllByChar(char *fileName, char chopper);
/* Load all bed6FloatScore from chopper separated file.
 * Dispose of this with bed6FloatScoreFreeList(). */

#define bed6FloatScoreLoadAllByTab(a) bed6FloatScoreLoadAllByChar(a, '\t');
/* Load all bed6FloatScore from tab separated file.
 * Dispose of this with bed6FloatScoreFreeList(). */

struct bed6FloatScore *bed6FloatScoreCommaIn(char **pS, struct bed6FloatScore *ret);
/* Create a bed6FloatScore out of a comma separated string. 
 * This will fill in ret if non-null, otherwise will
 * return a new bed6FloatScore */

void bed6FloatScoreFree(struct bed6FloatScore **pEl);
/* Free a single dynamically allocated bed6FloatScore such as created
 * with bed6FloatScoreLoad(). */

void bed6FloatScoreFreeList(struct bed6FloatScore **pList);
/* Free a list of dynamically allocated bed6FloatScore's */

void bed6FloatScoreOutput(struct bed6FloatScore *el, FILE *f, char sep, char lastSep);
/* Print out bed6FloatScore.  Separate fields with sep. Follow last field with lastSep. */

#define bed6FloatScoreTabOut(el,f) bed6FloatScoreOutput(el,f,'\t','\n');
/* Print out bed6FloatScore as a line in a tab-separated file. */

#define bed6FloatScoreCommaOut(el,f) bed6FloatScoreOutput(el,f,',',',');
/* Print out bed6FloatScore as a comma separated list including final comma. */

/* -------------------------------- End autoSql Generated Code -------------------------------- */

#endif /* BED6FLOATSCORE_H */
