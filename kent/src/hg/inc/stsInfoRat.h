/* stsInfoRat.h was originally generated by the autoSql program, which also 
 * generated stsInfoRat.c and stsInfoRat.sql.  This header links the database and
 * the RAM representation of objects. */

/* Copyright (C) 2003 The Regents of the University of California 
 * See README in this or parent directory for licensing information. */

#ifndef STSINFORAT_H
#define STSINFORAT_H

struct stsInfoRat
/* Constant STS marker information */
    {
    struct stsInfoRat *next;  /* Next in singly linked list. */
    unsigned identNo;	/* UCSC identification number */
    char *name;	/* Official UCSC name */
    unsigned RGDId;	/* Marker's RGD Id */
    char *RGDName;	/* Marker's RGD name */
    unsigned UiStsId;	/* Marker's UiStsId */
    unsigned nameCount;	/* Number of alias */
    char *alias;	/* alias, or N/A */
    char *primer1;	/* primer1 sequence */
    char *primer2;	/* primer2 sequence */
    char *distance;	/* Length of STS sequence */
    unsigned sequence;	/* Whether the full sequence is available (1) or not (0) for STS */
    char *organis;	/* Organism for which STS discovered */
    char *fhhName;	/* Name in FHH_x_ACI map */
    char *fhhChr;	/* Chromosome in Genetic map */
    float fhhGeneticPos;	/* Position in Genetic map */
    char *shrspName;	/* Name in SHRSP_x_BN */
    char *shrspChr;	/* Chromosome in Genetic map */
    float shrspGeneticPos;	/* Position in Genetic map */
    char *rhName;	/* Name in RH map */
    char *rhChr;	/* Chromosome in Genetic map */
    float rhGeneticPos;	/* Position in Genetic map. */
    float RHLOD;	/* LOD score of RH map */
    char *GeneName;	/* Associated gene name */
    char *GeneID;	/* Associated gene Id */
    char *clone;	/* Clone sequence */
    };

void stsInfoRatStaticLoad(char **row, struct stsInfoRat *ret);
/* Load a row from stsInfoRat table into ret.  The contents of ret will
 * be replaced at the next call to this function. */

struct stsInfoRat *stsInfoRatLoad(char **row);
/* Load a stsInfoRat from row fetched with select * from stsInfoRat
 * from database.  Dispose of this with stsInfoRatFree(). */

struct stsInfoRat *stsInfoRatLoadAll(char *fileName);
/* Load all stsInfoRat from a tab-separated file.
 * Dispose of this with stsInfoRatFreeList(). */

struct stsInfoRat *stsInfoRatCommaIn(char **pS, struct stsInfoRat *ret);
/* Create a stsInfoRat out of a comma separated string. 
 * This will fill in ret if non-null, otherwise will
 * return a new stsInfoRat */

void stsInfoRatFree(struct stsInfoRat **pEl);
/* Free a single dynamically allocated stsInfoRat such as created
 * with stsInfoRatLoad(). */

void stsInfoRatFreeList(struct stsInfoRat **pList);
/* Free a list of dynamically allocated stsInfoRat's */

void stsInfoRatOutput(struct stsInfoRat *el, FILE *f, char sep, char lastSep);
/* Print out stsInfoRat.  Separate fields with sep. Follow last field with lastSep. */

#define stsInfoRatTabOut(el,f) stsInfoRatOutput(el,f,'\t','\n');
/* Print out stsInfoRat as a line in a tab-separated file. */

#define stsInfoRatCommaOut(el,f) stsInfoRatOutput(el,f,',',',');
/* Print out stsInfoRat as a comma separated list including final comma. */

/* -------------------------------- End autoSql Generated Code -------------------------------- */

#endif /* STSINFORAT_H */
