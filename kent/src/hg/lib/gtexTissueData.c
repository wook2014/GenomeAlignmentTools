/* gtexTissueData.c was originally generated by the autoSql program, which also 
 * generated gtexTissueData.h and gtexTissueData.sql.  This module links the database and
 * the RAM representation of objects. */

#include "common.h"
#include "linefile.h"
#include "dystring.h"
#include "jksql.h"
#include "gtexTissueData.h"



char *gtexTissueDataCommaSepFieldNames = "geneId,tissue,min,q1,median,q3,max";

void gtexTissueDataStaticLoad(char **row, struct gtexTissueData *ret)
/* Load a row from gtexTissueData table into ret.  The contents of ret will
 * be replaced at the next call to this function. */
{

ret->geneId = row[0];
ret->tissue = row[1];
ret->min = sqlDouble(row[2]);
ret->q1 = sqlDouble(row[3]);
ret->median = sqlDouble(row[4]);
ret->q3 = sqlDouble(row[5]);
ret->max = sqlDouble(row[6]);
}

struct gtexTissueData *gtexTissueDataLoadByQuery(struct sqlConnection *conn, char *query)
/* Load all gtexTissueData from table that satisfy the query given.  
 * Where query is of the form 'select * from example where something=something'
 * or 'select example.* from example, anotherTable where example.something = 
 * anotherTable.something'.
 * Dispose of this with gtexTissueDataFreeList(). */
{
struct gtexTissueData *list = NULL, *el;
struct sqlResult *sr;
char **row;

sr = sqlGetResult(conn, query);
while ((row = sqlNextRow(sr)) != NULL)
    {
    el = gtexTissueDataLoad(row);
    slAddHead(&list, el);
    }
slReverse(&list);
sqlFreeResult(&sr);
return list;
}

void gtexTissueDataSaveToDb(struct sqlConnection *conn, struct gtexTissueData *el, char *tableName, int updateSize)
/* Save gtexTissueData as a row to the table specified by tableName. 
 * As blob fields may be arbitrary size updateSize specifies the approx size
 * of a string that would contain the entire query. Arrays of native types are
 * converted to comma separated strings and loaded as such, User defined types are
 * inserted as NULL. This function automatically escapes quoted strings for mysql. */
{
struct dyString *update = newDyString(updateSize);
sqlDyStringPrintf(update, "insert into %s values ( '%s','%s',%g,%g,%g,%g,%g)", 
	tableName,  el->geneId,  el->tissue,  el->min,  el->q1,  el->median,  el->q3,  el->max);
sqlUpdate(conn, update->string);
freeDyString(&update);
}

struct gtexTissueData *gtexTissueDataLoad(char **row)
/* Load a gtexTissueData from row fetched with select * from gtexTissueData
 * from database.  Dispose of this with gtexTissueDataFree(). */
{
struct gtexTissueData *ret;

AllocVar(ret);
ret->geneId = cloneString(row[0]);
ret->tissue = cloneString(row[1]);
ret->min = sqlDouble(row[2]);
ret->q1 = sqlDouble(row[3]);
ret->median = sqlDouble(row[4]);
ret->q3 = sqlDouble(row[5]);
ret->max = sqlDouble(row[6]);
return ret;
}

struct gtexTissueData *gtexTissueDataLoadAll(char *fileName) 
/* Load all gtexTissueData from a whitespace-separated file.
 * Dispose of this with gtexTissueDataFreeList(). */
{
struct gtexTissueData *list = NULL, *el;
struct lineFile *lf = lineFileOpen(fileName, TRUE);
char *row[7];

while (lineFileRow(lf, row))
    {
    el = gtexTissueDataLoad(row);
    slAddHead(&list, el);
    }
lineFileClose(&lf);
slReverse(&list);
return list;
}

struct gtexTissueData *gtexTissueDataLoadAllByChar(char *fileName, char chopper) 
/* Load all gtexTissueData from a chopper separated file.
 * Dispose of this with gtexTissueDataFreeList(). */
{
struct gtexTissueData *list = NULL, *el;
struct lineFile *lf = lineFileOpen(fileName, TRUE);
char *row[7];

while (lineFileNextCharRow(lf, chopper, row, ArraySize(row)))
    {
    el = gtexTissueDataLoad(row);
    slAddHead(&list, el);
    }
lineFileClose(&lf);
slReverse(&list);
return list;
}

struct gtexTissueData *gtexTissueDataCommaIn(char **pS, struct gtexTissueData *ret)
/* Create a gtexTissueData out of a comma separated string. 
 * This will fill in ret if non-null, otherwise will
 * return a new gtexTissueData */
{
char *s = *pS;

if (ret == NULL)
    AllocVar(ret);
ret->geneId = sqlStringComma(&s);
ret->tissue = sqlStringComma(&s);
ret->min = sqlDoubleComma(&s);
ret->q1 = sqlDoubleComma(&s);
ret->median = sqlDoubleComma(&s);
ret->q3 = sqlDoubleComma(&s);
ret->max = sqlDoubleComma(&s);
*pS = s;
return ret;
}

void gtexTissueDataFree(struct gtexTissueData **pEl)
/* Free a single dynamically allocated gtexTissueData such as created
 * with gtexTissueDataLoad(). */
{
struct gtexTissueData *el;

if ((el = *pEl) == NULL) return;
freeMem(el->geneId);
freeMem(el->tissue);
freez(pEl);
}

void gtexTissueDataFreeList(struct gtexTissueData **pList)
/* Free a list of dynamically allocated gtexTissueData's */
{
struct gtexTissueData *el, *next;

for (el = *pList; el != NULL; el = next)
    {
    next = el->next;
    gtexTissueDataFree(&el);
    }
*pList = NULL;
}

void gtexTissueDataOutput(struct gtexTissueData *el, FILE *f, char sep, char lastSep) 
/* Print out gtexTissueData.  Separate fields with sep. Follow last field with lastSep. */
{
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->geneId);
if (sep == ',') fputc('"',f);
fputc(sep,f);
if (sep == ',') fputc('"',f);
fprintf(f, "%s", el->tissue);
if (sep == ',') fputc('"',f);
fputc(sep,f);
fprintf(f, "%g", el->min);
fputc(sep,f);
fprintf(f, "%g", el->q1);
fputc(sep,f);
fprintf(f, "%g", el->median);
fputc(sep,f);
fprintf(f, "%g", el->q3);
fputc(sep,f);
fprintf(f, "%g", el->max);
fputc(lastSep,f);
}

/* -------------------------------- End autoSql Generated Code -------------------------------- */
