
/* This file was automatically generated by pclu.*/

#include "pclu_err.h"
#include "pclu_sys.h"


extern errcode arrayOPpredict();
extern errcode arrayOPtrim();
extern errcode stringOPchars();
extern errcode charOPequal();
extern errcode arrayOPaddh();
extern errcode arrayOPtop();
extern errcode arrayOPremh();
extern errcode stringOPac2s();
extern errcode unify_spacing_IB_1();
static int unify_spacing_own_init = 0;
CLUREF unify_spacingOPbuf;

/**** BEGIN PROCEDURE unify_spacing ****/

errcode unify_spacing(s, ret_1)
CLUREF s;
CLUREF *ret_1;
    {
    struct {
        errcode err;
        errcode ecode2;
        CLUREF ever;
        CLUREF out;
        CLUREF c;
        CLUREF s;
        } locals;
    locals.s = s;
        if (unify_spacing_own_init == 0) {
        unify_spacing_own_init = 1;
        {
            {CLUREF T_0_1;
            CLUREF T_0_2;
            T_0_1.num = 100;
            locals.err = arrayOPpredict(CLU_1, T_0_1, &T_0_2);
            if (locals.err != ERR_ok) goto ex_0;
            unify_spacingOPbuf.num = T_0_2.num;
            }
            }
    }
    enter_proc(3);

  LINE(6);
    {
    locals.err = arrayOPtrim(unify_spacingOPbuf, CLU_1, CLU_0);
    if (locals.err != ERR_ok) goto ex_0;
    }

  LINE(7);
    {
        {locals.ever.tf = false;
        }
        }

  LINE(8);
    {
        {locals.out.tf = false;
        }
        }

  LINE(9);
    {
        locals.err = stringOPchars(locals.s, unify_spacing_IB_1, &locals, &locals.ecode2);
        if (locals.err == ERR_iterbodyreturn) {
        ret_1->num = elist[0].num;
        signal(ERR_ok);}
        if (locals.err == ERR_iterbodysignal) {signal(locals.ecode2);}
        if (locals.err == ERR_break) locals.err = ERR_ok;
        if (locals.err == ERR_iterbodyexit) locals.err = locals.ecode2;
        if (locals.err != ERR_ok) goto ex_0;
        }

  LINE(29);
    {
    if (locals.ever.num == true) {

  LINE(30);
        {
        CLUREF T_3_1;
        CLUREF T_3_2;
        CLUREF T_3_3;
        locals.err = arrayOPtop(unify_spacingOPbuf, &T_3_1);
        if (locals.err != ERR_ok) goto ex_1;
        T_3_2.ch = ' ';
        T_3_3.num = (T_3_1.ch == T_3_2.ch)? true : false;
        if (T_3_3.num == true) {

  LINE(31);
            {
            CLUREF T_4_1;
            locals.err = arrayOPremh(unify_spacingOPbuf, &T_4_1);
            if (locals.err != ERR_ok) goto ex_1;
            }
            }
            }/* end if */
            goto end_1;
            ex_1:
                if ((locals.err == ERR_bounds)) {
                }
                else {
                    goto ex_0;
                }
            end_1:;

  LINE(33);
        {
        CLUREF T_2_1;
        locals.err = stringOPac2s(unify_spacingOPbuf, &T_2_1);
        if (locals.err != ERR_ok) goto ex_0;
        locals.s.num = T_2_1.num;
        }
        }
        }/* end if */

  LINE(35);
    {
    locals.err = arrayOPtrim(unify_spacingOPbuf, CLU_1, CLU_0);
    if (locals.err != ERR_ok) goto ex_0;
    }

  LINE(36);
    {
    {
    ret_1->num = locals.s.num;
    }
    {signal (ERR_ok);}}
    goto end_0;
    ex_0:
        {
            if (locals.err == ERR_failure) {signal(ERR_failure);}
            elist[0] = _pclu_erstr(locals.err);
            {signal(ERR_failure);}
        }
    end_0: elist[0].str = no_return_values_STRING;
        {signal(ERR_failure);}
    }

/**** END PROCEDURE unify_spacing ****/


/**** BEGIN ITERATOR BODIES for unify_spacing ****/

errcode unify_spacing_IB_1(iv_1, locals, iecode)
errcode *iecode;
CLUREF iv_1;
struct {
    errcode err;
    errcode ecode2;
    CLUREF ever;
    CLUREF out;
    CLUREF c;
    CLUREF s;
    } *locals;
{
    locals->c.num = iv_1.num;
    enter_iter_body_proc(10);

  FB_LINE(10);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    T_1_1.ch = '\t';
    T_1_2.num = (locals->c.ch == T_1_1.ch)? true : false;
    if (T_1_2.num == true) {

  FB_LINE(11);
        {
        locals->ever.tf = true;
        }

  FB_LINE(12);
        {
        if (locals->out.num == true) {

  FB_LINE(13);
            {
            CLUREF T_3_1;
            T_3_1.ch = ' ';
            {
            if ((unify_spacingOPbuf.array->int_low + unify_spacingOPbuf.array->ext_size + 1) < unify_spacingOPbuf.array->int_size) {
                unify_spacingOPbuf.array->store->data[unify_spacingOPbuf.array->int_low + unify_spacingOPbuf.array->ext_size] = T_3_1.num;
                unify_spacingOPbuf.array->ext_size++; unify_spacingOPbuf.array->ext_high++;}
            else {
                locals->err = arrayOPaddh(unify_spacingOPbuf, T_3_1);
                if (locals->err != ERR_ok) goto ex_0;}
            }
            }

  FB_LINE(14);
            {
            locals->out.tf = false;
            }
            }
            }/* end if */

  FB_LINE(16);
        {signal(ERR_ok);}
        }
    else {
    CLUREF T_1_3;
    CLUREF T_1_4;
    T_1_3.ch = ' ';
    T_1_4.num = (locals->c.ch == T_1_3.ch)? true : false;
    if (T_1_4.num == true) {

  FB_LINE(18);
        {
        if (locals->out.num == true) {

  FB_LINE(19);
            {
            CLUREF T_3_1;
            T_3_1.ch = ' ';
            {
            if ((unify_spacingOPbuf.array->int_low + unify_spacingOPbuf.array->ext_size + 1) < unify_spacingOPbuf.array->int_size) {
                unify_spacingOPbuf.array->store->data[unify_spacingOPbuf.array->int_low + unify_spacingOPbuf.array->ext_size] = T_3_1.num;
                unify_spacingOPbuf.array->ext_size++; unify_spacingOPbuf.array->ext_high++;}
            else {
                locals->err = arrayOPaddh(unify_spacingOPbuf, T_3_1);
                if (locals->err != ERR_ok) goto ex_0;}
            }
            }

  FB_LINE(20);
            {
            locals->out.tf = false;
            }

  FB_LINE(21);
            {signal(ERR_ok);}
            }
            }/* end if */

  FB_LINE(23);
        {
        locals->ever.tf = true;
        }

  FB_LINE(24);
        {signal(ERR_ok);}
        }
        }}/* end if */

  FB_LINE(26);
    {
    {
    if ((unify_spacingOPbuf.array->int_low + unify_spacingOPbuf.array->ext_size + 1) < unify_spacingOPbuf.array->int_size) {
        unify_spacingOPbuf.array->store->data[unify_spacingOPbuf.array->int_low + unify_spacingOPbuf.array->ext_size] = locals->c.num;
        unify_spacingOPbuf.array->ext_size++; unify_spacingOPbuf.array->ext_high++;}
    else {
        locals->err = arrayOPaddh(unify_spacingOPbuf, locals->c);
        if (locals->err != ERR_ok) goto ex_0;}
    }
    }

  FB_LINE(27);
    {
    locals->out.tf = true;
    }
    {signal(ERR_ok);}
    ex_0:
        {
            *iecode = locals->err;
            {signal(ERR_iterbodyexit);}}
    end_0: {signal(ERR_ok);}
    }/* end unify_spacing_IB_1 */

/**** END ITERATOR BODIES for unify_spacing ****/

