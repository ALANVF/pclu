
/* This file was automatically generated by pclu.*/

#include "pclu_err.h"
#include "pclu_sys.h"


extern errcode sin();
extern errcode realOPadd();

/**** BEGIN PROCEDURE cos ****/

errcode cos(x, ret_1)
CLUREF x;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    enter_proc(7);

  LINE(9);
    {
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    T_1_1.real = 1.570796e+00;
    err = realOPadd(x, T_1_1, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    err = sin(T_1_2, &T_1_3);
    if (err != ERR_ok) goto ex_0;
    ret_1->num = T_1_3.num;
    }
    {signal (ERR_ok);}}
    goto end_0;
    ex_0:
        {
            if (err == ERR_failure) {signal(ERR_failure);}
            elist[0] = _pclu_erstr(err);
            {signal(ERR_failure);}
        }
    end_0: elist[0].str = no_return_values_STRING;
        {signal(ERR_failure);}
    }

/**** END PROCEDURE cos ****/

