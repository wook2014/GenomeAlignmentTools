/* genotype.c was originally generated by the autoSql program, which also 
 * generated genotype.h and genotype.sql.  This module links the database and
 * the RAM representation of objects. */

/* Copyright (C) 2014 The Regents of the University of California 
 * See README in this or parent directory for licensing information. */

#include "common.h"
#include "linefile.h"
#include "dystring.h"
#include "jksql.h"
#include "genotype.h"


void genotypeStaticLoad(char **row, struct genotype *ret)
/* Load a row from genotype table into ret.  The contents of ret will
 * be replaced at the next call to this function. */
{
int sizeOne,i;
char *s;

ret->rsId = row[0];
strcpy(ret->SNPalleles, row[1]);
ret->chrom = row[2];
ret->chromStart = sqlSigned(row[3]);
ret->strand = row[4][0];
ret->assembly = row[5];
ret->center = row[6];
ret->protLSID = row[7];
ret->assayLSID = row[8];
ret->panelLSID = row[9];
strcpy(ret->NA06985, row[10]);
strcpy(ret->NA06991, row[11]);
strcpy(ret->NA06993, row[12]);
strcpy(ret->NA06993_dup, row[13]);
strcpy(ret->NA06994, row[14]);
strcpy(ret->NA07000, row[15]);
strcpy(ret->NA07019, row[16]);
strcpy(ret->NA07022, row[17]);
strcpy(ret->NA07029, row[18]);
strcpy(ret->NA07034, row[19]);
strcpy(ret->NA07048, row[20]);
strcpy(ret->NA07055, row[21]);
strcpy(ret->NA07056, row[22]);
strcpy(ret->NA07345, row[23]);
strcpy(ret->NA07348, row[24]);
strcpy(ret->NA07357, row[25]);
strcpy(ret->NA10830, row[26]);
strcpy(ret->NA10831, row[27]);
strcpy(ret->NA10835, row[28]);
strcpy(ret->NA10838, row[29]);
strcpy(ret->NA10839, row[30]);
strcpy(ret->NA10846, row[31]);
strcpy(ret->NA10847, row[32]);
strcpy(ret->NA10851, row[33]);
strcpy(ret->NA10854, row[34]);
strcpy(ret->NA10855, row[35]);
strcpy(ret->NA10856, row[36]);
strcpy(ret->NA10857, row[37]);
strcpy(ret->NA10859, row[38]);
strcpy(ret->NA10860, row[39]);
strcpy(ret->NA10861, row[40]);
strcpy(ret->NA10863, row[41]);
strcpy(ret->NA11829, row[42]);
strcpy(ret->NA11830, row[43]);
strcpy(ret->NA11831, row[44]);
strcpy(ret->NA11832, row[45]);
strcpy(ret->NA11839, row[46]);
strcpy(ret->NA11840, row[47]);
strcpy(ret->NA11881, row[48]);
strcpy(ret->NA11882, row[49]);
strcpy(ret->NA11992, row[50]);
strcpy(ret->NA11993, row[51]);
strcpy(ret->NA11993_dup, row[52]);
strcpy(ret->NA11994, row[53]);
strcpy(ret->NA11995, row[54]);
strcpy(ret->NA12003, row[55]);
strcpy(ret->NA12003_dup, row[56]);
strcpy(ret->NA12004, row[57]);
strcpy(ret->NA12005, row[58]);
strcpy(ret->NA12006, row[59]);
strcpy(ret->NA12043, row[60]);
strcpy(ret->NA12044, row[61]);
strcpy(ret->NA12056, row[62]);
strcpy(ret->NA12057, row[63]);
strcpy(ret->NA12144, row[64]);
strcpy(ret->NA12145, row[65]);
strcpy(ret->NA12146, row[66]);
strcpy(ret->NA12154, row[67]);
strcpy(ret->NA12155, row[68]);
strcpy(ret->NA12156, row[69]);
strcpy(ret->NA12156_dup, row[70]);
strcpy(ret->NA12234, row[71]);
strcpy(ret->NA12236, row[72]);
strcpy(ret->NA12239, row[73]);
strcpy(ret->NA12248, row[74]);
strcpy(ret->NA12248_dup, row[75]);
strcpy(ret->NA12249, row[76]);
strcpy(ret->NA12264, row[77]);
strcpy(ret->NA12707, row[78]);
strcpy(ret->NA12716, row[79]);
strcpy(ret->NA12717, row[80]);
strcpy(ret->NA12740, row[81]);
strcpy(ret->NA12750, row[82]);
strcpy(ret->NA12751, row[83]);
strcpy(ret->NA12752, row[84]);
strcpy(ret->NA12753, row[85]);
strcpy(ret->NA12760, row[86]);
strcpy(ret->NA12761, row[87]);
strcpy(ret->NA12762, row[88]);
strcpy(ret->NA12763, row[89]);
strcpy(ret->NA12801, row[90]);
strcpy(ret->NA12802, row[91]);
strcpy(ret->NA12812, row[92]);
strcpy(ret->NA12813, row[93]);
strcpy(ret->NA12814, row[94]);
strcpy(ret->NA12815, row[95]);
strcpy(ret->NA12864, row[96]);
strcpy(ret->NA12865, row[97]);
strcpy(ret->NA12872, row[98]);
strcpy(ret->NA12873, row[99]);
strcpy(ret->NA12874, row[100]);
strcpy(ret->NA12875, row[101]);
strcpy(ret->NA12878, row[102]);
strcpy(ret->NA12891, row[103]);
strcpy(ret->NA12892, row[104]);
}

struct genotype *genotypeLoad(char **row)
/* Load a genotype from row fetched with select * from genotype
 * from database.  Dispose of this with genotypeFree(). */
{
struct genotype *ret;
int sizeOne,i;
char *s;

AllocVar(ret);
ret->rsId = cloneString(row[0]);
strcpy(ret->SNPalleles, row[1]);
ret->chrom = cloneString(row[2]);
ret->chromStart = sqlSigned(row[3]);
ret->strand = row[4][0];
ret->assembly = cloneString(row[5]);
ret->center = cloneString(row[6]);
ret->protLSID = cloneString(row[7]);
ret->assayLSID = cloneString(row[8]);
ret->panelLSID = cloneString(row[9]);
strcpy(ret->NA06985, row[10]);
strcpy(ret->NA06991, row[11]);
strcpy(ret->NA06993, row[12]);
strcpy(ret->NA06993_dup, row[13]);
strcpy(ret->NA06994, row[14]);
strcpy(ret->NA07000, row[15]);
strcpy(ret->NA07019, row[16]);
strcpy(ret->NA07022, row[17]);
strcpy(ret->NA07029, row[18]);
strcpy(ret->NA07034, row[19]);
strcpy(ret->NA07048, row[20]);
strcpy(ret->NA07055, row[21]);
strcpy(ret->NA07056, row[22]);
strcpy(ret->NA07345, row[23]);
strcpy(ret->NA07348, row[24]);
strcpy(ret->NA07357, row[25]);
strcpy(ret->NA10830, row[26]);
strcpy(ret->NA10831, row[27]);
strcpy(ret->NA10835, row[28]);
strcpy(ret->NA10838, row[29]);
strcpy(ret->NA10839, row[30]);
strcpy(ret->NA10846, row[31]);
strcpy(ret->NA10847, row[32]);
strcpy(ret->NA10851, row[33]);
strcpy(ret->NA10854, row[34]);
strcpy(ret->NA10855, row[35]);
strcpy(ret->NA10856, row[36]);
strcpy(ret->NA10857, row[37]);
strcpy(ret->NA10859, row[38]);
strcpy(ret->NA10860, row[39]);
strcpy(ret->NA10861, row[40]);
strcpy(ret->NA10863, row[41]);
strcpy(ret->NA11829, row[42]);
strcpy(ret->NA11830, row[43]);
strcpy(ret->NA11831, row[44]);
strcpy(ret->NA11832, row[45]);
strcpy(ret->NA11839, row[46]);
strcpy(ret->NA11840, row[47]);
strcpy(ret->NA11881, row[48]);
strcpy(ret->NA11882, row[49]);
strcpy(ret->NA11992, row[50]);
strcpy(ret->NA11993, row[51]);
strcpy(ret->NA11993_dup, row[52]);
strcpy(ret->NA11994, row[53]);
strcpy(ret->NA11995, row[54]);
strcpy(ret->NA12003, row[55]);
strcpy(ret->NA12003_dup, row[56]);
strcpy(ret->NA12004, row[57]);
strcpy(ret->NA12005, row[58]);
strcpy(ret->NA12006, row[59]);
strcpy(ret->NA12043, row[60]);
strcpy(ret->NA12044, row[61]);
strcpy(ret->NA12056, row[62]);
strcpy(ret->NA12057, row[63]);
strcpy(ret->NA12144, row[64]);
strcpy(ret->NA12145, row[65]);
strcpy(ret->NA12146, row[66]);
strcpy(ret->NA12154, row[67]);
strcpy(ret->NA12155, row[68]);
strcpy(ret->NA12156, row[69]);
strcpy(ret->NA12156_dup, row[70]);
strcpy(ret->NA12234, row[71]);
strcpy(ret->NA12236, row[72]);
strcpy(ret->NA12239, row[73]);
strcpy(ret->NA12248, row[74]);
strcpy(ret->NA12248_dup, row[75]);
strcpy(ret->NA12249, row[76]);
strcpy(ret->NA12264, row[77]);
strcpy(ret->NA12707, row[78]);
strcpy(ret->NA12716, row[79]);
strcpy(ret->NA12717, row[80]);
strcpy(ret->NA12740, row[81]);
strcpy(ret->NA12750, row[82]);
strcpy(ret->NA12751, row[83]);
strcpy(ret->NA12752, row[84]);
strcpy(ret->NA12753, row[85]);
strcpy(ret->NA12760, row[86]);
strcpy(ret->NA12761, row[87]);
strcpy(ret->NA12762, row[88]);
strcpy(ret->NA12763, row[89]);
strcpy(ret->NA12801, row[90]);
strcpy(ret->NA12802, row[91]);
strcpy(ret->NA12812, row[92]);
strcpy(ret->NA12813, row[93]);
strcpy(ret->NA12814, row[94]);
strcpy(ret->NA12815, row[95]);
strcpy(ret->NA12864, row[96]);
strcpy(ret->NA12865, row[97]);
strcpy(ret->NA12872, row[98]);
strcpy(ret->NA12873, row[99]);
strcpy(ret->NA12874, row[100]);
strcpy(ret->NA12875, row[101]);
strcpy(ret->NA12878, row[102]);
strcpy(ret->NA12891, row[103]);
strcpy(ret->NA12892, row[104]);
return ret;
}

struct genotype *genotypeLoadAll(char *fileName) 
/* Load all genotype from a whitespace-separated file.
 * Dispose of this with genotypeFreeList(). */
{
struct genotype *list = NULL, *el;
struct lineFile *lf = lineFileOpen(fileName, TRUE);
char *row[105];

while (lineFileRow(lf, row))
    {
    el = genotypeLoad(row);
    slAddHead(&list, el);
    }
lineFileClose(&lf);
slReverse(&list);
return list;
}

struct genotype *genotypeLoadAllByChar(char *fileName, char chopper) 
/* Load all genotype from a chopper separated file.
 * Dispose of this with genotypeFreeList(). */
{
struct genotype *list = NULL, *el;
struct lineFile *lf = lineFileOpen(fileName, TRUE);
char *row[105];

while (lineFileNextCharRow(lf, chopper, row, ArraySize(row)))
    {
    el = genotypeLoad(row);
    slAddHead(&list, el);
    }
lineFileClose(&lf);
slReverse(&list);
return list;
}

struct genotype *genotypeLoadByQuery(struct sqlConnection *conn, char *query)
/* Load all genotype from table that satisfy the query given.  
 * Where query is of the form 'select * from example where something=something'
 * or 'select example.* from example, anotherTable where example.something = 
 * anotherTable.something'.
 * Dispose of this with genotypeFreeList(). */
{
struct genotype *list = NULL, *el;
struct sqlResult *sr;
char **row;

sr = sqlGetResult(conn, query);
while ((row = sqlNextRow(sr)) != NULL)
    {
    el = genotypeLoad(row);
    slAddHead(&list, el);
    }
slReverse(&list);
sqlFreeResult(&sr);
return list;
}

void genotypeSaveToDb(struct sqlConnection *conn, struct genotype *el, char *tableName, int updateSize)
/* Save genotype as a row to the table specified by tableName. 
 * As blob fields may be arbitrary size updateSize specifies the approx size
 * of a string that would contain the entire query. Arrays of native types are
 * converted to comma separated strings and loaded as such, User defined types are
 * inserted as NULL. Strings are automatically escaped to allow insertion into the database. */
{
struct dyString *update = newDyString(updateSize);
sqlDyStringPrintf(update, "insert into %s values ( '%s','%s','%s',%d,'%c','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s')", 
	tableName,  el->rsId,  el->SNPalleles,  el->chrom,  el->chromStart,  el->strand,  el->assembly,  el->center,  el->protLSID,  el->assayLSID,  el->panelLSID,  el->NA06985,  el->NA06991,  el->NA06993,  el->NA06993_dup,  el->NA06994,  el->NA07000,  el->NA07019,  el->NA07022,  el->NA07029,  el->NA07034,  el->NA07048,  el->NA07055,  el->NA07056,  el->NA07345,  el->NA07348,  el->NA07357,  el->NA10830,  el->NA10831,  el->NA10835,  el->NA10838,  el->NA10839,  el->NA10846,  el->NA10847,  el->NA10851,  el->NA10854,  el->NA10855,  el->NA10856,  el->NA10857,  el->NA10859,  el->NA10860,  el->NA10861,  el->NA10863,  el->NA11829,  el->NA11830,  el->NA11831,  el->NA11832,  el->NA11839,  el->NA11840,  el->NA11881,  el->NA11882,  el->NA11992,  el->NA11993,  el->NA11993_dup,  el->NA11994,  el->NA11995,  el->NA12003,  el->NA12003_dup,  el->NA12004,  el->NA12005,  el->NA12006,  el->NA12043,  el->NA12044,  el->NA12056,  el->NA12057,  el->NA12144,  el->NA12145,  el->NA12146,  el->NA12154,  el->NA12155,  el->NA12156,  el->NA12156_dup,  el->NA12234,  el->NA12236,  el->NA12239,  el->NA12248,  el->NA12248_dup,  el->NA12249,  el->NA12264,  el->NA12707,  el->NA12716,  el->NA12717,  el->NA12740,  el->NA12750,  el->NA12751,  el->NA12752,  el->NA12753,  el->NA12760,  el->NA12761,  el->NA12762,  el->NA12763,  el->NA12801,  el->NA12802,  el->NA12812,  el->NA12813,  el->NA12814,  el->NA12815,  el->NA12864,  el->NA12865,  el->NA12872,  el->NA12873,  el->NA12874,  el->NA12875,  el->NA12878,  el->NA12891,  el->NA12892);
sqlUpdate(conn, update->string);
freeDyString(&update);
}


struct genotype *genotypeCommaIn(char **pS, struct genotype *ret)
/* Create a genotype out of a comma separated string. 
 * This will fill in ret if non-null, otherwise will
 * return a new genotype */
{
char *s = *pS;
int i;

if (ret == NULL)
    AllocVar(ret);
ret->rsId = sqlStringComma(&s);
sqlFixedStringComma(&s, ret->SNPalleles, sizeof(ret->SNPalleles));
ret->chrom = sqlStringComma(&s);
ret->chromStart = sqlSignedComma(&s);
sqlFixedStringComma(&s, &(ret->strand), sizeof(ret->strand));
ret->assembly = sqlStringComma(&s);
ret->center = sqlStringComma(&s);
ret->protLSID = sqlStringComma(&s);
ret->assayLSID = sqlStringComma(&s);
ret->panelLSID = sqlStringComma(&s);
sqlFixedStringComma(&s, ret->NA06985, sizeof(ret->NA06985));
sqlFixedStringComma(&s, ret->NA06991, sizeof(ret->NA06991));
sqlFixedStringComma(&s, ret->NA06993, sizeof(ret->NA06993));
sqlFixedStringComma(&s, ret->NA06993_dup, sizeof(ret->NA06993_dup));
sqlFixedStringComma(&s, ret->NA06994, sizeof(ret->NA06994));
sqlFixedStringComma(&s, ret->NA07000, sizeof(ret->NA07000));
sqlFixedStringComma(&s, ret->NA07019, sizeof(ret->NA07019));
sqlFixedStringComma(&s, ret->NA07022, sizeof(ret->NA07022));
sqlFixedStringComma(&s, ret->NA07029, sizeof(ret->NA07029));
sqlFixedStringComma(&s, ret->NA07034, sizeof(ret->NA07034));
sqlFixedStringComma(&s, ret->NA07048, sizeof(ret->NA07048));
sqlFixedStringComma(&s, ret->NA07055, sizeof(ret->NA07055));
sqlFixedStringComma(&s, ret->NA07056, sizeof(ret->NA07056));
sqlFixedStringComma(&s, ret->NA07345, sizeof(ret->NA07345));
sqlFixedStringComma(&s, ret->NA07348, sizeof(ret->NA07348));
sqlFixedStringComma(&s, ret->NA07357, sizeof(ret->NA07357));
sqlFixedStringComma(&s, ret->NA10830, sizeof(ret->NA10830));
sqlFixedStringComma(&s, ret->NA10831, sizeof(ret->NA10831));
sqlFixedStringComma(&s, ret->NA10835, sizeof(ret->NA10835));
sqlFixedStringComma(&s, ret->NA10838, sizeof(ret->NA10838));
sqlFixedStringComma(&s, ret->NA10839, sizeof(ret->NA10839));
sqlFixedStringComma(&s, ret->NA10846, sizeof(ret->NA10846));
sqlFixedStringComma(&s, ret->NA10847, sizeof(ret->NA10847));
sqlFixedStringComma(&s, ret->NA10851, sizeof(ret->NA10851));
sqlFixedStringComma(&s, ret->NA10854, sizeof(ret->NA10854));
sqlFixedStringComma(&s, ret->NA10855, sizeof(ret->NA10855));
sqlFixedStringComma(&s, ret->NA10856, sizeof(ret->NA10856));
sqlFixedStringComma(&s, ret->NA10857, sizeof(ret->NA10857));
sqlFixedStringComma(&s, ret->NA10859, sizeof(ret->NA10859));
sqlFixedStringComma(&s, ret->NA10860, sizeof(ret->NA10860));
sqlFixedStringComma(&s, ret->NA10861, sizeof(ret->NA10861));
sqlFixedStringComma(&s, ret->NA10863, sizeof(ret->NA10863));
sqlFixedStringComma(&s, ret->NA11829, sizeof(ret->NA11829));
sqlFixedStringComma(&s, ret->NA11830, sizeof(ret->NA11830));
sqlFixedStringComma(&s, ret->NA11831, sizeof(ret->NA11831));
sqlFixedStringComma(&s, ret->NA11832, sizeof(ret->NA11832));
sqlFixedStringComma(&s, ret->NA11839, sizeof(ret->NA11839));
sqlFixedStringComma(&s, ret->NA11840, sizeof(ret->NA11840));
sqlFixedStringComma(&s, ret->NA11881, sizeof(ret->NA11881));
sqlFixedStringComma(&s, ret->NA11882, sizeof(ret->NA11882));
sqlFixedStringComma(&s, ret->NA11992, sizeof(ret->NA11992));
sqlFixedStringComma(&s, ret->NA11993, sizeof(ret->NA11993));
sqlFixedStringComma(&s, ret->NA11993_dup, sizeof(ret->NA11993_dup));
sqlFixedStringComma(&s, ret->NA11994, sizeof(ret->NA11994));
sqlFixedStringComma(&s, ret->NA11995, sizeof(ret->NA11995));
sqlFixedStringComma(&s, ret->NA12003, sizeof(ret->NA12003));
sqlFixedStringComma(&s, ret->NA12003_dup, sizeof(ret->NA12003_dup));
sqlFixedStringComma(&s, ret->NA12004, sizeof(ret->NA12004));
sqlFixedStringComma(&s, ret->NA12005, sizeof(ret->NA12005));
sqlFixedStringComma(&s, ret->NA12006, sizeof(ret->NA12006));
sqlFixedStringComma(&s, ret->NA12043, sizeof(ret->NA12043));
sqlFixedStringComma(&s, ret->NA12044, sizeof(ret->NA12044));
sqlFixedStringComma(&s, ret->NA12056, sizeof(ret->NA12056));
sqlFixedStringComma(&s, ret->NA12057, sizeof(ret->NA12057));
sqlFixedStringComma(&s, ret->NA12144, sizeof(ret->NA12144));
sqlFixedStringComma(&s, ret->NA12145, sizeof(ret->NA12145));
sqlFixedStringComma(&s, ret->NA12146, sizeof(ret->NA12146));
sqlFixedStringComma(&s, ret->NA12154, sizeof(ret->NA12154));
sqlFixedStringComma(&s, ret->NA12155, sizeof(ret->NA12155));
sqlFixedStringComma(&s, ret->NA12156, sizeof(ret->NA12156));
sqlFixedStringComma(&s, ret->NA12156_dup, sizeof(ret->NA12156_dup));
sqlFixedStringComma(&s, ret->NA12234, sizeof(ret->NA12234));
sqlFixedStringComma(&s, ret->NA12236, sizeof(ret->NA12236));
sqlFixedStringComma(&s, ret->NA12239, sizeof(ret->NA12239));
sqlFixedStringComma(&s, ret->NA12248, sizeof(ret->NA12248));
sqlFixedStringComma(&s, ret->NA12248_dup, sizeof(ret->NA12248_dup));
sqlFixedStringComma(&s, ret->NA12249, sizeof(ret->NA12249));
sqlFixedStringComma(&s, ret->NA12264, sizeof(ret->NA12264));
sqlFixedStringComma(&s, ret->NA12707, sizeof(ret->NA12707));
sqlFixedStringComma(&s, ret->NA12716, sizeof(ret->NA12716));
sqlFixedStringComma(&s, ret->NA12717, sizeof(ret->NA12717));
sqlFixedStringComma(&s, ret->NA12740, sizeof(ret->NA12740));
sqlFixedStringComma(&s, ret->NA12750, sizeof(ret->NA12750));
sqlFixedStringComma(&s, ret->NA12751, sizeof(ret->NA12751));
sqlFixedStringComma(&s, ret->NA12752, sizeof(ret->NA12752));
sqlFixedStringComma(&s, ret->NA12753, sizeof(ret->NA12753));
sqlFixedStringComma(&s, ret->NA12760, sizeof(ret->NA12760));
sqlFixedStringComma(&s, ret->NA12761, sizeof(ret->NA12761));
sqlFixedStringComma(&s, ret->NA12762, sizeof(ret->NA12762));
sqlFixedStringComma(&s, ret->NA12763, sizeof(ret->NA12763));
sqlFixedStringComma(&s, ret->NA12801, sizeof(ret->NA12801));
sqlFixedStringComma(&s, ret->NA12802, sizeof(ret->NA12802));
sqlFixedStringComma(&s, ret->NA12812, sizeof(ret->NA12812));
sqlFixedStringComma(&s, ret->NA12813, sizeof(ret->NA12813));
sqlFixedStringComma(&s, ret->NA12814, sizeof(ret->NA12814));
sqlFixedStringComma(&s, ret->NA12815, sizeof(ret->NA12815));
sqlFixedStringComma(&s, ret->NA12864, sizeof(ret->NA12864));
sqlFixedStringComma(&s, ret->NA12865, sizeof(ret->NA12865));
sqlFixedStringComma(&s, ret->NA12872, sizeof(ret->NA12872));
sqlFixedStringComma(&s, ret->NA12873, sizeof(ret->NA12873));
sqlFixedStringComma(&s, ret->NA12874, sizeof(ret->NA12874));
sqlFixedStringComma(&s, ret->NA12875, sizeof(ret->NA12875));
sqlFixedStringComma(&s, ret->NA12878, sizeof(ret->NA12878));
sqlFixedStringComma(&s, ret->NA12891, sizeof(ret->NA12891));
sqlFixedStringComma(&s, ret->NA12892, sizeof(ret->NA12892));
*pS = s;
return ret;
}

void genotypeFree(struct genotype **pEl)
/* Free a single dynamically allocated genotype such as created
 * with genotypeLoad(). */
{
struct genotype *el;

if ((el = *pEl) == NULL) return;
freeMem(el->rsId);
freeMem(el->chrom);
freeMem(el->assembly);
freeMem(el->center);
freeMem(el->protLSID);
freeMem(el->assayLSID);
freeMem(el->panelLSID);
freez(pEl);
}

void genotypeFreeList(struct genotype **pList)
/* Free a list of dynamically allocated genotype's */
{
struct genotype *el, *next;

for (el = *pList; el != NULL; el = next)
    {
    next = el->next;
    genotypeFree(&el);
    }
*pList = NULL;
}

void genotypeOutput(struct genotype *el, FILE *f, char sep, char lastSep) 
/* Print out genotype.  Separate fields with sep. Follow last field with lastSep. */
{
int i;
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->rsId);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->SNPalleles);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->chrom);
if (sep == ',') fputc('"',f);
fputc(sep,f);
fprintf(f, "%d", el->chromStart);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%c", el->strand);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->assembly);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->center);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->protLSID);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->assayLSID);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->panelLSID);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA06985);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA06991);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA06993);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA06993_dup);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA06994);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07000);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07019);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07022);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07029);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07034);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07048);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07055);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07056);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07345);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07348);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA07357);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10830);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10831);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10835);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10838);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10839);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10846);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10847);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10851);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10854);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10855);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10856);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10857);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10859);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10860);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10861);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA10863);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11829);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11830);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11831);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11832);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11839);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11840);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11881);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11882);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11992);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11993);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11993_dup);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11994);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA11995);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12003);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12003_dup);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12004);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12005);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12006);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12043);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12044);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12056);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12057);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12144);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12145);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12146);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12154);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12155);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12156);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12156_dup);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12234);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12236);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12239);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12248);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12248_dup);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12249);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12264);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12707);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12716);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12717);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12740);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12750);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12751);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12752);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12753);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12760);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12761);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12762);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12763);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12801);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12802);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12812);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12813);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12814);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12815);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12864);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12865);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12872);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12873);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12874);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12875);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12878);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12891);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->NA12892);
if (sep == ',') fputc('"',f);
fputc(lastSep,f);
}

/* -------------------------------- End autoSql Generated Code -------------------------------- */
