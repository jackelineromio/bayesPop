#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .C calls */
extern void get_deaths_from_sr_abridged(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void get_deaths_from_sr_1x1(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void get_sx27(void *, void *);
extern void LC(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void TotalPopProj(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void TotalPopProj1x1(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"get_deaths_from_sr", (DL_FUNC) &get_deaths_from_sr_abridged,  9},
    {"get_deaths_from_sr_1x1", (DL_FUNC) &get_deaths_from_sr_1x1,  9},
    {"get_sx27",           (DL_FUNC) &get_sx27,            2},
    {"LC",                 (DL_FUNC) &LC,                 14},
    {"TotalPopProj",       (DL_FUNC) &TotalPopProj,       19},
    {"TotalPopProj1x1",    (DL_FUNC) &TotalPopProj1x1,    19},
    {NULL, NULL, 0}
};

void R_init_bayesPop(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
