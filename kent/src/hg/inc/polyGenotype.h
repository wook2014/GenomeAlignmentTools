/* polyGenotype.h was originally generated by the autoSql program, which also 
 * generated polyGenotype.c and polyGenotype.sql.  This header links the database and
 * the RAM representation of objects. */

/* Copyright (C) 2013 The Regents of the University of California 
 * See README in this or parent directory for licensing information. */

#ifndef POLYGENOTYPE_H
#define POLYGENOTYPE_H

#ifndef JKSQL_H
#include "jksql.h"
#endif

#define POLYGENOTYPE_NUM_COLS 8

struct polyGenotype
/* Genotype Information for Retrotransposon Insertion Polymorphisms (RIP) in Humans */
    {
    struct polyGenotype *next;  /* Next in singly linked list. */
    char *name;	/* Database ID identifying RIP */
    char *ethnicGroup;	/* Ethnic group for this measurement */
    int plusPlus;	/* homozygous wild type allele count */
    int plusMinus;	/* heterozygous allele count */
    int minusMinus;	/* homozygous allele count */
    int sampleSize;	/* number of measurements */
    float alleleFrequency;	/* frequency of homozygosity */
    float unbiasedHeterozygosity;	/* frequency of heterozygosity */
    };

void polyGenotypeStaticLoad(char **row, struct polyGenotype *ret);
/* Load a row from polyGenotype table into ret.  The contents of ret will
 * be replaced at the next call to this function. */

struct polyGenotype *polyGenotypeLoad(char **row);
/* Load a polyGenotype from row fetched with select * from polyGenotype
 * from database.  Dispose of this with polyGenotypeFree(). */

struct polyGenotype *polyGenotypeLoadAll(char *fileName);
/* Load all polyGenotype from whitespace-separated file.
 * Dispose of this with polyGenotypeFreeList(). */

struct polyGenotype *polyGenotypeLoadAllByChar(char *fileName, char chopper);
/* Load all polyGenotype from chopper separated file.
 * Dispose of this with polyGenotypeFreeList(). */

#define polyGenotypeLoadAllByTab(a) polyGenotypeLoadAllByChar(a, '\t');
/* Load all polyGenotype from tab separated file.
 * Dispose of this with polyGenotypeFreeList(). */

struct polyGenotype *polyGenotypeLoadByQuery(struct sqlConnection *conn, char *query);
/* Load all polyGenotype from table that satisfy the query given.  
 * Where query is of the form 'select * from example where something=something'
 * or 'select example.* from example, anotherTable where example.something = 
 * anotherTable.something'.
 * Dispose of this with polyGenotypeFreeList(). */

void polyGenotypeSaveToDb(struct sqlConnection *conn, struct polyGenotype *el, char *tableName, int updateSize);
/* Save polyGenotype as a row to the table specified by tableName. 
 * As blob fields may be arbitrary size updateSize specifies the approx size
 * of a string that would contain the entire query. Arrays of native types are
 * converted to comma separated strings and loaded as such, User defined types are
 * inserted as NULL. Strings are automatically escaped to allow insertion into the database. */

struct polyGenotype *polyGenotypeCommaIn(char **pS, struct polyGenotype *ret);
/* Create a polyGenotype out of a comma separated string. 
 * This will fill in ret if non-null, otherwise will
 * return a new polyGenotype */

void polyGenotypeFree(struct polyGenotype **pEl);
/* Free a single dynamically allocated polyGenotype such as created
 * with polyGenotypeLoad(). */

void polyGenotypeFreeList(struct polyGenotype **pList);
/* Free a list of dynamically allocated polyGenotype's */

void polyGenotypeOutput(struct polyGenotype *el, FILE *f, char sep, char lastSep);
/* Print out polyGenotype.  Separate fields with sep. Follow last field with lastSep. */

#define polyGenotypeTabOut(el,f) polyGenotypeOutput(el,f,'\t','\n');
/* Print out polyGenotype as a line in a tab-separated file. */

#define polyGenotypeCommaOut(el,f) polyGenotypeOutput(el,f,',',',');
/* Print out polyGenotype as a comma separated list including final comma. */

/* -------------------------------- End autoSql Generated Code -------------------------------- */

#endif /* POLYGENOTYPE_H */
