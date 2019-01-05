
/* This file was automatically generated by pclu.*/

#include "pclu_err.h"
#include "pclu_sys.h"


/**** BEGIN CLUSTER file_spec ****/

extern errcode intOPgt();
extern errcode stringOPindexc();
extern errcode intOPadd();
extern errcode boolOPnot();
extern errcode charOPequal();
extern errcode stringOPfetch();
extern errcode intOPequal();
extern errcode _fixup_dir_part();
extern errcode _last_indexc();
extern errcode stringOPsubstr();
extern errcode intOPsub();
extern errcode stringOPrest();
extern errcode _split_name_part();
extern errcode recordOPget_1();
extern errcode stringOPempty();
extern errcode stringOPequal();
extern errcode stringOPappend();
extern errcode stringOPconcat();
extern errcode recordOPget_2();
extern errcode recordOPget_4();
extern errcode recordOPget_3();
extern errcode recordOPsimilar();
extern errcode pstreamOPtext();
extern errcode pstreamOPtextc();
extern errcode stringOPencode();
extern errcode file_specOPunparse();
extern errcode file_specOPparse();
extern errcode stringOPdecode();
extern errcode recordOP_gcd();
extern struct OPS *string_ops;
struct OPS  *record_dir_name_other_suffix_ops;
CLUREF STR_;
CLUREF STR__057;
CLUREF STR_bad_040format;
static int file_spec_own_init = 0;
OWN_req file_spec_ownreqs = {0,0};
errcode file_spec_own_init_proc()
{
    errcode err;
    enter_own_init_proc();
        if (file_spec_own_init == 0) {
        add_selector_info("dir", 0, string_ops); 
        add_selector_info("name", 1, string_ops); 
        add_selector_info("other", 2, string_ops); 
        add_selector_info("suffix", 3, string_ops); 
        find_selector_ops("record", 4, &(record_dir_name_other_suffix_ops));
        stringOPcons("", CLU_1, CLU_0, &STR_);
        stringOPcons("/", CLU_1, CLU_1, &STR__057);
        stringOPcons("bad format", CLU_1, CLU_10, &STR_bad_040format);
        file_spec_own_init = 1;
        {signal(ERR_ok);}
    ex_0: pclu_unhandled(err); {signal(ERR_failure);}
        }
    }


/**** BEGIN PROCEDURE create ****/

errcode file_specOPcreate(dir, name, suffix, other, ret_1)
CLUREF dir;
CLUREF name;
CLUREF suffix;
CLUREF other;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    CLUREF i;
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(26);

  LINE(28);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    CLUREF T_1_4;
    CLUREF T_1_5;
    CLUREF T_1_6;
    CLUREF T_1_7;
    CLUREF T_1_8;
    CLUREF T_1_9;
    CLUREF T_1_10;
    CLUREF T_1_11;
    T_1_3.ch = '/';
    err = stringOPindexc(T_1_3, name, &T_1_4);
    if (err != ERR_ok) goto ex_0;
    T_1_5.num = (T_1_4.num > 0)? true : false;
    T_1_2.num = T_1_5.num;
    if (!T_1_5.num) {
        T_1_6.ch = '/';
        err = stringOPindexc(T_1_6, suffix, &T_1_7);
        if (err != ERR_ok) goto ex_0;
        T_1_8.num = (T_1_7.num > 0)? true : false;
        T_1_2.num = T_1_8.num;
    }
    T_1_1.num = T_1_2.num;
    if (!T_1_2.num) {
        T_1_9.ch = '/';
        err = stringOPindexc(T_1_9, other, &T_1_10);
        if (err != ERR_ok) goto ex_0;
        T_1_11.num = (T_1_10.num > 0)? true : false;
        T_1_1.num = T_1_11.num;
    }
    if (T_1_1.num == true) {

  LINE(31);
        {
        {signal (ERR_bad_format);}}
        }
        }/* end if */

  LINE(32);
    {
        {CLUREF T_1_1;
        CLUREF T_1_2;
        T_1_1.ch = '.';
        err = stringOPindexc(T_1_1, name, &T_1_2);
        if (err != ERR_ok) goto ex_0;
        i.num = T_1_2.num;
        }
        }

  LINE(33);
    {
    CLUREF T_2_1;
    T_2_1.num = (i.num > 0)? true : false;
    if (T_2_1.num == true) {

  LINE(34);
        for (;;) {
            if (true != true) { break; }

  LINE(35);
            {
            CLUREF T_4_1;
            T_4_1.num = i.num + 1;
             if ((T_4_1.num > 0 && i.num < 0 && 1 < 0) || 
                 (T_4_1.num < 0 && i.num > 0 && 1 > 0)) {
                err = ERR_overflow;
                goto ex_1;}
            i.num = T_4_1.num;
            }

  LINE(36);
            {
            CLUREF T_4_1;
            CLUREF T_4_2;
            CLUREF T_4_3;
            CLUREF T_4_4;
            err = stringOPfetch(name, i, &T_4_1);
            if (err != ERR_ok) goto ex_1;
            T_4_2.ch = '.';
            T_4_3.num = (T_4_1.ch == T_4_2.ch)? true : false;
            T_4_4.num = T_4_3.num ^ 1;
            if (T_4_4.num == true) {

  LINE(37);
                {
                {signal (ERR_bad_format);}}
                }
                }/* end if */
            }
            end_while_1:;
        }
        }/* end if */
        goto end_1;
        ex_1:
            if ((err == ERR_bounds)) {
            }
            else {
                goto ex_0;
            }
        end_1:;

  LINE(40);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    T_1_1.ch = '.';
    err = stringOPindexc(T_1_1, suffix, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    i.num = T_1_2.num;
    }

  LINE(41);
    {
    CLUREF T_2_1;
    T_2_1.num = (i.num > 0)? true : false;
    if (T_2_1.num == true) {

  LINE(42);
        {
        CLUREF T_3_1;
        T_3_1.num = (i.num == 1)? true : false;
        if (T_3_1.num == true) {

  LINE(43);
            {
            {signal (ERR_bad_format);}}
            }
            }/* end if */

  LINE(44);
        for (;;) {
            if (true != true) { break; }

  LINE(45);
            {
            CLUREF T_4_1;
            T_4_1.num = i.num + 1;
             if ((T_4_1.num > 0 && i.num < 0 && 1 < 0) || 
                 (T_4_1.num < 0 && i.num > 0 && 1 > 0)) {
                err = ERR_overflow;
                goto ex_2;}
            i.num = T_4_1.num;
            }

  LINE(46);
            {
            CLUREF T_4_1;
            CLUREF T_4_2;
            CLUREF T_4_3;
            CLUREF T_4_4;
            err = stringOPfetch(suffix, i, &T_4_1);
            if (err != ERR_ok) goto ex_2;
            T_4_2.ch = '.';
            T_4_3.num = (T_4_1.ch == T_4_2.ch)? true : false;
            T_4_4.num = T_4_3.num ^ 1;
            if (T_4_4.num == true) {

  LINE(47);
                {
                {signal (ERR_bad_format);}}
                }
                }/* end if */
            }
            end_while_2:;
        }
        }/* end if */
        goto end_2;
        ex_2:
            if ((err == ERR_bounds)) {
            }
            else {
                goto ex_0;
            }
        end_2:;

  LINE(58);
    {
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    RecordAlloc(4, T_1_1);
    err = _fixup_dir_part(dir, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    T_1_1.vec->data[0]  = T_1_2.num;
    T_1_1.vec->data[1]  = name.num;
    T_1_1.vec->data[3]  = suffix.num;
    T_1_1.vec->data[2]  = other.num;
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE create ****/

static int file_specOPparse_own_init = 0;

/**** BEGIN PROCEDURE parse ****/

errcode file_specOPparse(s, ret_1)
CLUREF s;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    CLUREF i;
    CLUREF dir;
    CLUREF name;
    CLUREF suffix;
        if (file_specOPparse_own_init == 0) {
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        file_specOPparse_own_init = 1;
    }
    enter_proc(64);

  LINE(65);
    {
        {CLUREF T_1_1;
        CLUREF T_1_2;
        T_1_1.ch = '/';
        err = _last_indexc(T_1_1, s, &T_1_2);
        if (err != ERR_ok) goto ex_0;
        i.num = T_1_2.num;
        }
        }

  LINE(67);
    {
    CLUREF T_1_1;
    T_1_1.num = (i.num == 0)? true : false;
    if (T_1_1.num == true) {

  LINE(68);
        {
        dir = STR_;
        }
        }
    else {

  LINE(69);
        {
        CLUREF T_2_1;
        T_2_1.num = (i.num == 1)? true : false;
        if (T_2_1.num == true) {

  LINE(70);
            {
            dir = STR__057;
            }
            }
        else {

  LINE(71);
            {
            CLUREF T_3_1;
            CLUREF T_3_2;
            CLUREF T_3_3;
            T_3_1.num = i.num - 1;
             if ((T_3_1.num >= 0 && i.num < 0 && (-1) < 0) || 
                 (T_3_1.num <= 0 && i.num > 0 && (-1) > 0)) {
                err = ERR_overflow;
                goto ex_0;}
            err = stringOPsubstr(s, CLU_1, T_3_1, &T_3_2);
            if (err != ERR_ok) goto ex_0;
            err = _fixup_dir_part(T_3_2, &T_3_3);
            if (err != ERR_ok) goto ex_0;
            dir.num = T_3_3.num;
            }
            }}/* end if */

  LINE(73);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.num = i.num + 1;
         if ((T_2_1.num > 0 && i.num < 0 && 1 < 0) || 
             (T_2_1.num < 0 && i.num > 0 && 1 > 0)) {
            err = ERR_overflow;
            goto ex_0;}
        err = stringOPrest(s, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        s.num = T_2_2.num;
        }
        }}/* end if */

  LINE(75);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    err = _split_name_part(s, &T_1_1, &T_1_2, &T_1_3);
    if (err != ERR_ok) goto ex_0;
    name.num = T_1_1.num;
    suffix.num = T_1_2.num;
    s.num = T_1_3.num;
    }

  LINE(76);
    {
    {
    CLUREF T_1_1;
    RecordAlloc(4, T_1_1);
    T_1_1.vec->data[0]  = dir.num;
    T_1_1.vec->data[1]  = name.num;
    T_1_1.vec->data[3]  = suffix.num;
    T_1_1.vec->data[2]  = s.num;
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE parse ****/

static int file_specOPunparse_own_init = 0;

/**** BEGIN PROCEDURE unparse ****/

errcode file_specOPunparse(x, ret_1)
CLUREF x;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    CLUREF s;
        if (file_specOPunparse_own_init == 0) {
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        file_specOPunparse_own_init = 1;
    }
    enter_proc(82);

  LINE(83);
    {
        {CLUREF T_1_1;
        T_1_1.num = x.vec->data[0];
        s.num = T_1_1.num;
        }
        }

  LINE(84);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    CLUREF T_1_4;
    CLUREF T_1_5;
    err = stringOPempty(s, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    T_1_3.num = T_1_2.num ^ 1;
    T_1_1.num = T_1_3.num;
    if (T_1_3.num) {
        T_1_4.num = ((s.str->size != STR__057.str->size)? false :
            !(bcmp(s.str->data, STR__057.str->data, s.str->size)));
        T_1_5.num = T_1_4.num ^ 1;
        T_1_1.num = T_1_5.num;
    }
    if (T_1_1.num == true) {

  LINE(85);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.ch = '/';
        err = stringOPappend(s, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        s.num = T_2_2.num;
        }
        }
        }/* end if */

  LINE(86);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    T_1_1.num = x.vec->data[1];
    err = stringOPconcat(s, T_1_1, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    s.num = T_1_2.num;
    }

  LINE(87);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    CLUREF T_1_4;
    CLUREF T_1_5;
    CLUREF T_1_6;
    CLUREF T_1_7;
    T_1_2.num = x.vec->data[3];
    err = stringOPempty(T_1_2, &T_1_3);
    if (err != ERR_ok) goto ex_0;
    T_1_4.num = T_1_3.num ^ 1;
    T_1_1.num = T_1_4.num;
    if (!T_1_4.num) {
        T_1_5.num = x.vec->data[2];
        err = stringOPempty(T_1_5, &T_1_6);
        if (err != ERR_ok) goto ex_0;
        T_1_7.num = T_1_6.num ^ 1;
        T_1_1.num = T_1_7.num;
    }
    if (T_1_1.num == true) {

  LINE(88);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        CLUREF T_2_3;
        CLUREF T_2_4;
        T_2_1.ch = '.';
        err = stringOPappend(s, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        T_2_3.num = x.vec->data[3];
        err = stringOPconcat(T_2_2, T_2_3, &T_2_4);
        if (err != ERR_ok) goto ex_0;
        s.num = T_2_4.num;
        }
        }
        }/* end if */

  LINE(89);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    T_1_1.num = x.vec->data[2];
    err = stringOPempty(T_1_1, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    T_1_3.num = T_1_2.num ^ 1;
    if (T_1_3.num == true) {

  LINE(90);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        CLUREF T_2_3;
        CLUREF T_2_4;
        T_2_1.ch = '.';
        err = stringOPappend(s, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        T_2_3.num = x.vec->data[2];
        err = stringOPconcat(T_2_2, T_2_3, &T_2_4);
        if (err != ERR_ok) goto ex_0;
        s.num = T_2_4.num;
        }
        }
        }/* end if */

  LINE(91);
    {
    {
    ret_1->num = s.num;
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

/**** END PROCEDURE unparse ****/


/**** BEGIN PROCEDURE get_dir ****/

errcode file_specOPget_dir(x, ret_1)
CLUREF x;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(94);

  LINE(95);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = x.vec->data[0];
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE get_dir ****/


/**** BEGIN PROCEDURE get_name ****/

errcode file_specOPget_name(x, ret_1)
CLUREF x;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(98);

  LINE(99);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = x.vec->data[1];
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE get_name ****/


/**** BEGIN PROCEDURE get_suffix ****/

errcode file_specOPget_suffix(x, ret_1)
CLUREF x;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(102);

  LINE(103);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = x.vec->data[3];
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE get_suffix ****/


/**** BEGIN PROCEDURE get_other ****/

errcode file_specOPget_other(x, ret_1)
CLUREF x;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(106);

  LINE(107);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = x.vec->data[2];
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE get_other ****/

struct OPS  *record_dir_name_other_suffix_ops;
static int file_specOPequal_own_init = 0;

/**** BEGIN PROCEDURE equal ****/

errcode file_specOPequal(x, y, ret_1)
CLUREF x;
CLUREF y;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_specOPequal_own_init == 0) {
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        file_specOPequal_own_init = 1;
    }
    enter_proc(110);

  LINE(111);
    {
    {
    CLUREF T_1_1;
    generic_CLU_proc.type_owns = 0;
    generic_CLU_proc.op_owns = record_dir_name_other_suffix_ops->entry[0].fcn->op_owns;
    generic_CLU_proc.proc = recordOPsimilar;
    CUR_PROC_VAR.proc = &generic_CLU_proc;
    err = recordOPsimilar(x, y, &T_1_1);
    if (err != ERR_ok) goto ex_0;
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE equal ****/

struct OPS  *record_dir_name_other_suffix_ops;
static int file_specOPsimilar_own_init = 0;

/**** BEGIN PROCEDURE similar ****/

errcode file_specOPsimilar(x, y, ret_1)
CLUREF x;
CLUREF y;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_specOPsimilar_own_init == 0) {
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        file_specOPsimilar_own_init = 1;
    }
    enter_proc(114);

  LINE(115);
    {
    {
    CLUREF T_1_1;
    generic_CLU_proc.type_owns = 0;
    generic_CLU_proc.op_owns = record_dir_name_other_suffix_ops->entry[0].fcn->op_owns;
    generic_CLU_proc.proc = recordOPsimilar;
    CUR_PROC_VAR.proc = &generic_CLU_proc;
    err = recordOPsimilar(x, y, &T_1_1);
    if (err != ERR_ok) goto ex_0;
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE similar ****/


/**** BEGIN PROCEDURE copy ****/

errcode file_specOPcopy(x, ret_1)
CLUREF x;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(118);

  LINE(119);
    {
    {
    ret_1->num = x.num;
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

/**** END PROCEDURE copy ****/

static int file_specOPprint_own_init = 0;

/**** BEGIN PROCEDURE print ****/

errcode file_specOPprint(x, ps)
CLUREF x;
CLUREF ps;
    {
    errcode err;
    errcode ecode2;
        if (file_specOPprint_own_init == 0) {
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        file_specOPprint_own_init = 1;
    }
    enter_proc(122);

  LINE(123);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    T_1_1.num = x.vec->data[0];
    err = pstreamOPtext(ps, T_1_1, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    }

  LINE(124);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    CLUREF T_1_4;
    CLUREF T_1_5;
    CLUREF T_1_6;
    CLUREF T_1_7;
    T_1_2.num = x.vec->data[0];
    err = stringOPempty(T_1_2, &T_1_3);
    if (err != ERR_ok) goto ex_0;
    T_1_4.num = T_1_3.num ^ 1;
    T_1_1.num = T_1_4.num;
    if (T_1_4.num) {
        T_1_5.num = x.vec->data[0];
        T_1_6.num = ((T_1_5.str->size != STR__057.str->size)? false :
            !(bcmp(T_1_5.str->data, STR__057.str->data, T_1_5.str->size)));
        T_1_7.num = T_1_6.num ^ 1;
        T_1_1.num = T_1_7.num;
    }
    if (T_1_1.num == true) {

  LINE(125);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.ch = '/';
        err = pstreamOPtextc(ps, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        }
        }
        }/* end if */

  LINE(126);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    T_1_1.num = x.vec->data[1];
    err = pstreamOPtext(ps, T_1_1, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    }

  LINE(127);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    CLUREF T_1_4;
    CLUREF T_1_5;
    CLUREF T_1_6;
    CLUREF T_1_7;
    T_1_2.num = x.vec->data[3];
    err = stringOPempty(T_1_2, &T_1_3);
    if (err != ERR_ok) goto ex_0;
    T_1_4.num = T_1_3.num ^ 1;
    T_1_1.num = T_1_4.num;
    if (!T_1_4.num) {
        T_1_5.num = x.vec->data[2];
        err = stringOPempty(T_1_5, &T_1_6);
        if (err != ERR_ok) goto ex_0;
        T_1_7.num = T_1_6.num ^ 1;
        T_1_1.num = T_1_7.num;
    }
    if (T_1_1.num == true) {

  LINE(128);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.ch = '.';
        err = pstreamOPtextc(ps, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        }

  LINE(129);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.num = x.vec->data[3];
        err = pstreamOPtext(ps, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        }
        }
        }/* end if */

  LINE(131);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    T_1_1.num = x.vec->data[2];
    err = stringOPempty(T_1_1, &T_1_2);
    if (err != ERR_ok) goto ex_0;
    T_1_3.num = T_1_2.num ^ 1;
    if (T_1_3.num == true) {

  LINE(132);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.ch = '.';
        err = pstreamOPtextc(ps, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        }

  LINE(133);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.num = x.vec->data[2];
        err = pstreamOPtext(ps, T_2_1, &T_2_2);
        if (err != ERR_ok) goto ex_0;
        }
        }
        }/* end if */
    goto end_0;
    ex_0:
        {
            if (err == ERR_failure) {signal(ERR_failure);}
            elist[0] = _pclu_erstr(err);
            {signal(ERR_failure);}
        }
    end_0: {signal(ERR_ok);}
    }

/**** END PROCEDURE print ****/


/**** BEGIN PROCEDURE encode ****/

errcode file_specOPencode(fs, ist)
CLUREF fs;
CLUREF ist;
    {
    errcode err;
    errcode ecode2;
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(137);

  LINE(138);
    {
    CLUREF T_2_1;
    err = file_specOPunparse(fs, &T_2_1);
    if (err != ERR_ok) goto ex_1;
    err = stringOPencode(T_2_1, ist);
    if (err != ERR_ok) goto ex_1;
    }
    goto end_1;
    ex_1:
        if (err == ERR_not_possible) {signal(ERR_not_possible);}
        else {
            goto ex_0;}
    end_1:;
    goto end_0;
    ex_0:
        {
            if (err == ERR_failure) {signal(ERR_failure);}
            elist[0] = _pclu_erstr(err);
            {signal(ERR_failure);}
        }
    end_0: {signal(ERR_ok);}
    }

/**** END PROCEDURE encode ****/

static int file_specOPdecode_own_init = 0;

/**** BEGIN PROCEDURE decode ****/

errcode file_specOPdecode(ist, ret_1)
CLUREF ist;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_specOPdecode_own_init == 0) {
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        file_specOPdecode_own_init = 1;
    }
    enter_proc(142);

  LINE(144);
    {
    {
    CLUREF T_3_1;
    CLUREF T_3_2;
    err = stringOPdecode(ist, &T_3_1);
    if (err != ERR_ok) goto ex_2;
    err = file_specOPparse(T_3_1, &T_3_2);
    if (err != ERR_ok) goto ex_2;
    ret_1->num = T_3_2.num;
    }
    {signal (ERR_ok);}}
    goto end_2;
    ex_2:
        if (err == ERR_end_of_file) {signal(ERR_end_of_file);}
        else if (err == ERR_not_possible) {signal(ERR_not_possible);}
        else {
            goto ex_1;}
    end_2:;
        goto end_1;
        ex_1:
            if ((err == ERR_bad_format)) {

  LINE(146);
                {
                elist[0] = STR_bad_040format;
                {signal (ERR_not_possible);}}
            }
            else {
                goto ex_0;
            }
        end_1:;
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

/**** END PROCEDURE decode ****/

struct OPS  *record_dir_name_other_suffix_ops;
static int file_specOP_gcd_own_init = 0;

/**** BEGIN PROCEDURE _gcd ****/

errcode file_specOP_gcd(x, tab, ret_1)
CLUREF x;
CLUREF tab;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (file_specOP_gcd_own_init == 0) {
        if (file_spec_own_init == 0) {
            err = file_spec_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        file_specOP_gcd_own_init = 1;
    }
    enter_proc(149);

  LINE(150);
    {
    {
    CLUREF T_1_1;
    generic_CLU_proc.type_owns = 0;
    generic_CLU_proc.op_owns = record_dir_name_other_suffix_ops->entry[6].fcn->op_owns;
    generic_CLU_proc.proc = recordOP_gcd;
    CUR_PROC_VAR.proc = &generic_CLU_proc;
    err = recordOP_gcd(x, tab, &T_1_1);
    if (err != ERR_ok) goto ex_0;
    ret_1->num = T_1_1.num;
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

/**** END PROCEDURE _gcd ****/

typedef struct{
    long count;
    OWNPTR type_owns;
    OWNPTR op_owns;
    struct OP_ENTRY entry[14];
} file_spec_OPS;

CLU_proc file_spec_oe__gcd = {{0,0,0,0}, file_specOP_gcd, 0};
CLU_proc file_spec_oe_copy = {{0,0,0,0}, file_specOPcopy, 0};
CLU_proc file_spec_oe_create = {{0,0,0,0}, file_specOPcreate, 0};
CLU_proc file_spec_oe_decode = {{0,0,0,0}, file_specOPdecode, 0};
CLU_proc file_spec_oe_encode = {{0,0,0,0}, file_specOPencode, 0};
CLU_proc file_spec_oe_equal = {{0,0,0,0}, file_specOPequal, 0};
CLU_proc file_spec_oe_get_dir = {{0,0,0,0}, file_specOPget_dir, 0};
CLU_proc file_spec_oe_get_name = {{0,0,0,0}, file_specOPget_name, 0};
CLU_proc file_spec_oe_get_other = {{0,0,0,0}, file_specOPget_other, 0};
CLU_proc file_spec_oe_get_suffix = {{0,0,0,0}, file_specOPget_suffix, 0};
CLU_proc file_spec_oe_parse = {{0,0,0,0}, file_specOPparse, 0};
CLU_proc file_spec_oe_print = {{0,0,0,0}, file_specOPprint, 0};
CLU_proc file_spec_oe_similar = {{0,0,0,0}, file_specOPsimilar, 0};
CLU_proc file_spec_oe_unparse = {{0,0,0,0}, file_specOPunparse, 0};

file_spec_OPS file_spec_ops_actual = {14, (OWNPTR)&file_spec_own_init, (OWNPTR)&file_spec_own_init, {
    {&file_spec_oe__gcd, "_gcd"},
    {&file_spec_oe_copy, "copy"},
    {&file_spec_oe_create, "create"},
    {&file_spec_oe_decode, "decode"},
    {&file_spec_oe_encode, "encode"},
    {&file_spec_oe_equal, "equal"},
    {&file_spec_oe_get_dir, "get_dir"},
    {&file_spec_oe_get_name, "get_name"},
    {&file_spec_oe_get_other, "get_other"},
    {&file_spec_oe_get_suffix, "get_suffix"},
    {&file_spec_oe_parse, "parse"},
    {&file_spec_oe_print, "print"},
    {&file_spec_oe_similar, "similar"},
    {&file_spec_oe_unparse, "unparse"}}};

struct OPS *file_spec_ops = (struct OPS *)&file_spec_ops_actual;

/**** END CLUSTER file_spec ****/