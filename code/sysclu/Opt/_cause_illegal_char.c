
/* This file was automatically generated by pclu.*/

#include "pclu_err.h"
#include "pclu_sys.h"



/**** BEGIN PROCEDURE _cause_illegal_char ****/

errcode _cause_illegal_char()
    {
    errcode err;
    errcode ecode2;
    enter_proc(3);

  LINE(4);
    {
    {signal (ERR_illegal_char);}}
    goto end_0;
    ex_0:
        {
            if (err == ERR_failure) {signal(ERR_failure);}
            elist[0] = _pclu_erstr(err);
            {signal(ERR_failure);}
        }
    end_0: {signal(ERR_ok);}
    }

/**** END PROCEDURE _cause_illegal_char ****/
