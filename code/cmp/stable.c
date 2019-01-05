
/* This file was automatically generated by pclu.*/

#include "pclu_err.h"
#include "pclu_sys.h"


/**** BEGIN CLUSTER stable ****/


typedef struct {
long count;
    char *unparse_name;
} stable_of_value_t_REQS;

stable_of_value_t_REQS stable_of_value_t_reqs_actual = {1,
    "unparse"};

struct REQS * stable_of_value_t_reqs = (struct REQS *)&stable_of_value_t_reqs_actual;

typedef struct {
    long count;
    OWNPTR type_owns;
    OWNPTR op_owns;
    struct OP_ENTRY unparse;
} stable_of_value_t_OPS;
extern errcode arrayOPnew();
extern errcode stableOPfind_index();
extern errcode recordOPget_2();
extern errcode arrayOPfetch();
extern errcode stableOPmatch();
extern errcode stringOPequal();
extern errcode stringOPsize();
extern errcode stringOPsubstr();
extern errcode recordOPget_1();
extern errcode intOPadd();
extern errcode arrayOPaddh();
extern errcode intOPfrom_to_by();
extern errcode arrayOPhigh();
extern errcode arrayOPstore();
extern errcode intOPsub();
extern errcode recordOPset_2();
extern errcode arrayOPlow();
extern errcode intOPdiv();
extern errcode stringOPlt();
extern errcode stringOPgt();
extern errcode intOPequal();
extern errcode intOPfrom_to();
extern errcode arrayOPremh();
extern errcode arrayOPelements();
extern errcode arrayOPempty();
extern errcode stableOPentries();
extern errcode stringOPconcat();
extern errcode stable_IB_1();
extern errcode stable_IB_2();
extern struct REQS *stable_of_value_t_reqs;
extern OWN_req stable_ownreqs;
extern struct OPS *stable_ops;
CLUREF STR_;
CLUREF STR__072_040;
CLUREF STR__012;

OWN_ptr stable_own_init; /* dummy */
typedef struct {
    long stable_own_init;
    long create_own_init;
    long lookup_own_init;
    long completions_own_init;
    long match_own_init;
    long insert_own_init;
    long change_own_init;
    long find_index_own_init;
    long delete_own_init;
    long entries_own_init;
    long empty_own_init;
    long unparse_own_init;
    stable_of_value_t_OPS *value_t_ops;
    struct OPS *stable_of_value_t_table;
    struct OPS *stable_of_value_t_ops;
    OWNPTR stable_of_value_t_owns;
} stable_OWN_DEFN;

OWN_req stable_ownreqs = {sizeof(stable_OWN_DEFN), 12};

errcode stable_own_init_proc()
{
errcode err;
stable_OWN_DEFN *type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;

enter_own_init_proc();
    if (type_own_ptr->stable_own_init == 0) {
    add_parm_info_type(0, type_own_ptr->value_t_ops, stable_of_value_t_reqs);
    find_type_instance(stable_ops, 1, &stable_ownreqs, &(type_own_ptr->stable_of_value_t_ops));
    stringOPcons("", CLU_1, CLU_0, &STR_);
    stringOPcons(": ", CLU_1, CLU_2, &STR__072_040);
    stringOPcons("\n", CLU_1, CLU_1, &STR__012);
    }
    if (type_own_ptr->stable_own_init == 0) {
    type_own_ptr->stable_own_init = 1;
    {signal(ERR_ok);}
    ex_0: pclu_unhandled(err); {signal(ERR_failure);}
}
}


/**** BEGIN PROCEDURE create ****/

errcode stableOPcreate(ret_1)
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    stable_OWN_DEFN *type_own_ptr;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->create_own_init == 0) {
        type_own_ptr->create_own_init = 1;
    }
    enter_proc(15);

  LINE(16);
    {
    {
    CLUREF T_1_1;
    err = arrayOPnew(&T_1_1);
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

/**** END PROCEDURE create ****/


/**** BEGIN PROCEDURE lookup ****/

errcode stableOPlookup(tbl, name, ret_1)
CLUREF tbl;
CLUREF name;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    stable_OWN_DEFN *type_own_ptr;
    CLUREF index;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->lookup_own_init == 0) {
        add_parm_info_type(0, type_own_ptr->value_t_ops, stable_of_value_t_reqs);
        find_type_instance(stable_ops, 1, &stable_ownreqs, &(type_own_ptr->stable_of_value_t_ops));
        }
        if (type_own_ptr->lookup_own_init == 0) {
        type_own_ptr->lookup_own_init = 1;
    }
    enter_proc(19);

  LINE(21);
    {
        {CLUREF T_2_1;
        generic_CLU_proc.type_owns = type_own_ptr->stable_of_value_t_ops->type_owns;
        generic_CLU_proc.proc = stableOPfind_index;
        CUR_PROC_VAR.proc = &generic_CLU_proc;
        err = stableOPfind_index(tbl, name, CLU_1, &T_2_1);
        if (err != ERR_ok) goto ex_1;
        index.num = T_2_1.num;
        }
        }
    goto end_1;
    ex_1:
        if (err == ERR_not_found) {signal(ERR_not_found);}
        else {
            goto ex_0;}
    end_1:;

  LINE(24);
    {
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    if (index.num < tbl.array->ext_low || index.num > tbl.array->ext_high ) {
        err = ERR_bounds;
        goto ex_0;}
    T_1_1.num = tbl.array->store->data[index.num - tbl.array->ext_low + tbl.array->int_low];
    T_1_2.num = T_1_1.vec->data[1];
    ret_1->num = T_1_2.num;
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

/**** END PROCEDURE lookup ****/

extern errcode stableOPcompletions_IB_1();

/**** BEGIN PROCEDURE completions ****/

errcode stableOPcompletions(tbl, name, ret_1, ret_2)
CLUREF tbl;
CLUREF name;
CLUREF *ret_1;
CLUREF *ret_2;
    {
    struct {
        errcode err;
        errcode ecode2;
        stable_OWN_DEFN *type_own_ptr;
        CLUREF exact;
        CLUREF completion;
        CLUREF key;
        CLUREF val;
        CLUREF tbl;
        CLUREF name;
        } locals;
    locals.tbl = tbl;
    locals.name = name;
    locals.type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (locals.type_own_ptr->completions_own_init == 0) {
        add_parm_info_type(0, locals.type_own_ptr->value_t_ops, stable_of_value_t_reqs);
        find_type_instance(stable_ops, 1, &stable_ownreqs, &(locals.type_own_ptr->stable_of_value_t_ops));
        }
        if (locals.type_own_ptr->completions_own_init == 0) {
        locals.type_own_ptr->completions_own_init = 1;
    }
    enter_proc(27);

  LINE(31);
    {
        {locals.exact.tf = false;
        }
        }

  LINE(32);
    {
        {locals.completion.tf = false;
        }
        }

  LINE(34);
    {
        generic_CLU_proc.type_owns = locals.type_own_ptr->stable_of_value_t_ops->type_owns;
        generic_CLU_proc.proc = stableOPmatch;
        CUR_PROC_VAR.proc = &generic_CLU_proc;
        locals.err = stableOPmatch(locals.tbl, locals.name, stableOPcompletions_IB_1, &locals, &locals.ecode2);
        if (locals.err == ERR_iterbodyreturn) {
        ret_1->num = elist[0].num;
        ret_2->num = elist[1].num;
        signal(ERR_ok);}
        if (locals.err == ERR_iterbodysignal) {signal(locals.ecode2);}
        if (locals.err == ERR_break) locals.err = ERR_ok;
        if (locals.err == ERR_iterbodyexit) locals.err = locals.ecode2;
        if (locals.err != ERR_ok) goto ex_0;
        }

  LINE(42);
    {
    {
    ret_1->num = locals.exact.num;
    }
    {
    ret_2->num = locals.completion.num;
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

/**** END PROCEDURE completions ****/


/**** BEGIN ITERATOR BODIES for completions ****/

errcode stableOPcompletions_IB_1(iv_1, iv_2, locals, iecode)
errcode *iecode;
CLUREF iv_1;
CLUREF iv_2;
struct {
    errcode err;
    errcode ecode2;
stable_OWN_DEFN *type_own_ptr;
    CLUREF exact;
    CLUREF completion;
    CLUREF key;
    CLUREF val;
    CLUREF tbl;
    CLUREF name;
    } *locals;
{
    locals->key.num = iv_1.num;
    locals->val.num = iv_2.num;
    enter_iter_body_proc(35);

  FB_LINE(35);
    {
    CLUREF T_1_1;
    T_1_1.num = ((locals->key.str->size != locals->name.str->size)? false :
        !(bcmp(locals->key.str->data, locals->name.str->data, locals->key.str->size)));
    if (T_1_1.num == true) {

  FB_LINE(36);
        {
        locals->exact.tf = true;
        }
        }
    else {

  FB_LINE(38);
        {
        locals->completion.tf = true;
        }
        }}/* end if */
    {signal(ERR_ok);}
    ex_0:
        {
            *iecode = locals->err;
            {signal(ERR_iterbodyexit);}}
    end_0: {signal(ERR_ok);}
    }/* end stableOPcompletions_IB_1 */

/**** END ITERATOR BODIES for completions ****/


/**** BEGIN ITERATOR match ****/

errcode stableOPmatch(tbl, ms, proc, user_locals, iecode)
CLUREF tbl;
CLUREF ms;
errcode (*proc)();
char **user_locals;
errcode *iecode;
    {
    errcode ecode;
    errcode err;
    errcode ecode2;
    bool body_ctrl_req;
    stable_OWN_DEFN *type_own_ptr;
    CLUREF len;
    CLUREF i;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->match_own_init == 0) {
        add_parm_info_type(0, type_own_ptr->value_t_ops, stable_of_value_t_reqs);
        find_type_instance(stable_ops, 1, &stable_ownreqs, &(type_own_ptr->stable_of_value_t_ops));
        }
        if (type_own_ptr->match_own_init == 0) {
        type_own_ptr->match_own_init = 1;
    }
    enter_proc(45);

  LINE(46);
    {
        {CLUREF T_1_1;
        err = stringOPsize(ms, &T_1_1);
        if (err != ERR_ok) goto ex_0;
        len.num = T_1_1.num;
        }
        }

  LINE(47);
    {
        {CLUREF T_1_1;
        generic_CLU_proc.type_owns = type_own_ptr->stable_of_value_t_ops->type_owns;
        generic_CLU_proc.proc = stableOPfind_index;
        CUR_PROC_VAR.proc = &generic_CLU_proc;
        err = stableOPfind_index(tbl, ms, CLU_0, &T_1_1);
        if (err != ERR_ok) goto ex_0;
        i.num = T_1_1.num;
        }
        }

  LINE(48);
    for (;;) {
        CLUREF T_2_1;
        CLUREF T_2_2;
        CLUREF T_2_3;
        CLUREF T_2_4;
        if (i.num < tbl.array->ext_low || i.num > tbl.array->ext_high ) {
            err = ERR_bounds;
            goto ex_1;}
        T_2_1.num = tbl.array->store->data[i.num - tbl.array->ext_low + tbl.array->int_low];
        T_2_2.num = T_2_1.vec->data[0];
        err = stringOPsubstr(T_2_2, CLU_1, len, &T_2_3);
        if (err != ERR_ok) goto ex_1;
        T_2_4.num = ((T_2_3.str->size != ms.str->size)? false :
            !(bcmp(T_2_3.str->data, ms.str->data, T_2_3.str->size)));
        if (T_2_4.num != true) { break; }

  LINE(49);
        {
        CLUREF T_3_1;
        CLUREF T_3_2;
        CLUREF T_3_3;
        CLUREF T_3_4;
        if (i.num < tbl.array->ext_low || i.num > tbl.array->ext_high ) {
            err = ERR_bounds;
            goto ex_1;}
        T_3_1.num = tbl.array->store->data[i.num - tbl.array->ext_low + tbl.array->int_low];
        T_3_2.num = T_3_1.vec->data[0];
        if (i.num < tbl.array->ext_low || i.num > tbl.array->ext_high ) {
            err = ERR_bounds;
            goto ex_1;}
        T_3_3.num = tbl.array->store->data[i.num - tbl.array->ext_low + tbl.array->int_low];
        T_3_4.num = T_3_3.vec->data[1];
        err = proc(T_3_2, T_3_4, user_locals, iecode);
        if (err != ERR_ok) {
        if (err == ERR_break) {signal(ERR_break);}
        if (err == ERR_iterbodyreturn) {signal(ERR_iterbodyreturn);}
        if (err == ERR_iterbodyexit) {signal(ERR_iterbodyexit);}
        if (err == ERR_iterbodysignal) {signal(ERR_iterbodysignal);}
        {signal(err);
            }}
        }

  LINE(50);
        {
        CLUREF T_3_1;
        T_3_1.num = i.num + 1;
         if ((T_3_1.num > 0 && i.num < 0 && 1 < 0) || 
             (T_3_1.num < 0 && i.num > 0 && 1 > 0)) {
            err = ERR_overflow;
            goto ex_1;}
        i.num = T_3_1.num;
        }
        }
        end_while_1:;
        goto end_1;
        ex_1:
            if ((err == ERR_bounds)) {
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
    end_0: {signal(ERR_ok);}
    }

/**** END ITERATOR match ****/


/**** BEGIN PROCEDURE insert ****/

errcode stableOPinsert(tbl, name, val)
CLUREF tbl;
CLUREF name;
CLUREF val;
    {
    errcode err;
    errcode ecode2;
    stable_OWN_DEFN *type_own_ptr;
    CLUREF i;
    CLUREF j;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->insert_own_init == 0) {
        add_parm_info_type(0, type_own_ptr->value_t_ops, stable_of_value_t_reqs);
        find_type_instance(stable_ops, 1, &stable_ownreqs, &(type_own_ptr->stable_of_value_t_ops));
        }
        if (type_own_ptr->insert_own_init == 0) {
        type_own_ptr->insert_own_init = 1;
    }
    enter_proc(54);

  LINE(56);
    {
        {CLUREF T_1_1;
        generic_CLU_proc.type_owns = type_own_ptr->stable_of_value_t_ops->type_owns;
        generic_CLU_proc.proc = stableOPfind_index;
        CUR_PROC_VAR.proc = &generic_CLU_proc;
        err = stableOPfind_index(tbl, name, CLU_0, &T_1_1);
        if (err != ERR_ok) goto ex_0;
        i.num = T_1_1.num;
        }
        }

  LINE(58);
    {
    CLUREF T_2_1;
    CLUREF T_2_2;
    CLUREF T_2_3;
    if (i.num < tbl.array->ext_low || i.num > tbl.array->ext_high ) {
        err = ERR_bounds;
        goto ex_1;}
    T_2_1.num = tbl.array->store->data[i.num - tbl.array->ext_low + tbl.array->int_low];
    T_2_2.num = T_2_1.vec->data[0];
    T_2_3.num = ((T_2_2.str->size != name.str->size)? false :
        !(bcmp(T_2_2.str->data, name.str->data, T_2_2.str->size)));
    if (T_2_3.num == true) {

  LINE(59);
        {
        {signal (ERR_duplicate);}}
        }
    else {

  LINE(62);
        {
        CLUREF T_3_1;
        RecordAlloc(2, T_3_1);
        T_3_1.vec->data[0]  = name.num;
        T_3_1.vec->data[1]  = val.num;
        {
        if ((tbl.array->int_low + tbl.array->ext_size + 1) < tbl.array->int_size) {
            tbl.array->store->data[tbl.array->int_low + tbl.array->ext_size] = T_3_1.num;
            tbl.array->ext_size++; tbl.array->ext_high++;}
        else {
            err = arrayOPaddh(tbl, T_3_1);
            if (err != ERR_ok) goto ex_1;}
        }
        }

  LINE(64);
        {
        CLUREF T_3_1;
        CLUREF T_3_2;
        CLUREF T_3_3;
        CLUREF T_3_4;
        CLUREF T_3_5;
            T_3_1.num = tbl.array->ext_high;
            T_3_2.num = i.num + 1;
             if ((T_3_2.num > 0 && i.num < 0 && 1 < 0) || 
                 (T_3_2.num < 0 && i.num > 0 && 1 > 0)) {
                err = ERR_overflow;
                goto ex_1;}
            T_3_4.num = T_3_2.num;
            T_3_5.num = -1;
            for (T_3_3.num = T_3_1.num; ((T_3_5.num == 0) || ((T_3_5.num > 0)? (T_3_3.num <= T_3_4.num) : (T_3_3.num >= T_3_4.num))); T_3_3.num += T_3_5.num) {
                j.num = T_3_3.num;

  LINE(65);
                {
                CLUREF T_4_1;
                CLUREF T_4_2;
                T_4_1.num = j.num - 1;
                 if ((T_4_1.num >= 0 && j.num < 0 && (-1) < 0) || 
                     (T_4_1.num <= 0 && j.num > 0 && (-1) > 0)) {
                    err = ERR_overflow;
                    goto ex_1;}
                if (T_4_1.num < tbl.array->ext_low || T_4_1.num > tbl.array->ext_high ) {
                    err = ERR_bounds;
                    goto ex_1;}
                T_4_2.num = tbl.array->store->data[T_4_1.num - tbl.array->ext_low + tbl.array->int_low];
                {
                if (j.num < tbl.array->ext_low || j.num > tbl.array->ext_high) {
                    err = ERR_bounds;
                    goto ex_1;}
                tbl.array->store->data[j.num + tbl.array->int_low - tbl.array->ext_low] = T_4_2.num;
                }
                }
            }
        }
        end_inline_for_1:;

  LINE(69);
        {
        CLUREF T_3_1;
        RecordAlloc(2, T_3_1);
        T_3_1.vec->data[0]  = name.num;
        T_3_1.vec->data[1]  = val.num;
        {
        if (i.num < tbl.array->ext_low || i.num > tbl.array->ext_high) {
            err = ERR_bounds;
            goto ex_1;}
        tbl.array->store->data[i.num + tbl.array->int_low - tbl.array->ext_low] = T_3_1.num;
        }
        }
        }}/* end if */
        goto end_1;
        ex_1:
            if ((err == ERR_bounds)) {

  LINE(71);
                {
                CLUREF T_2_1;
                RecordAlloc(2, T_2_1);
                T_2_1.vec->data[0]  = name.num;
                T_2_1.vec->data[1]  = val.num;
                {
                if ((tbl.array->int_low + tbl.array->ext_size + 1) < tbl.array->int_size) {
                    tbl.array->store->data[tbl.array->int_low + tbl.array->ext_size] = T_2_1.num;
                    tbl.array->ext_size++; tbl.array->ext_high++;}
                else {
                    err = arrayOPaddh(tbl, T_2_1);
                    if (err != ERR_ok) goto ex_0;}
                }
                }
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
    end_0: {signal(ERR_ok);}
    }

/**** END PROCEDURE insert ****/


/**** BEGIN PROCEDURE change ****/

errcode stableOPchange(tbl, name, new_val)
CLUREF tbl;
CLUREF name;
CLUREF new_val;
    {
    errcode err;
    errcode ecode2;
    stable_OWN_DEFN *type_own_ptr;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->change_own_init == 0) {
        add_parm_info_type(0, type_own_ptr->value_t_ops, stable_of_value_t_reqs);
        find_type_instance(stable_ops, 1, &stable_ownreqs, &(type_own_ptr->stable_of_value_t_ops));
        }
        if (type_own_ptr->change_own_init == 0) {
        type_own_ptr->change_own_init = 1;
    }
    enter_proc(76);

  LINE(78);
    {
    CLUREF T_2_1;
    CLUREF T_2_2;
    generic_CLU_proc.type_owns = type_own_ptr->stable_of_value_t_ops->type_owns;
    generic_CLU_proc.proc = stableOPfind_index;
    CUR_PROC_VAR.proc = &generic_CLU_proc;
    err = stableOPfind_index(tbl, name, CLU_1, &T_2_1);
    if (err != ERR_ok) goto ex_1;
    if (T_2_1.num < tbl.array->ext_low || T_2_1.num > tbl.array->ext_high ) {
        err = ERR_bounds;
        goto ex_1;}
    T_2_2.num = tbl.array->store->data[T_2_1.num - tbl.array->ext_low + tbl.array->int_low];
    T_2_2.vec->data[1]  = new_val.num;
    }
    goto end_1;
    ex_1:
        if (err == ERR_not_found) {signal(ERR_not_found);}
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

/**** END PROCEDURE change ****/


/**** BEGIN PROCEDURE find_index ****/

errcode stableOPfind_index(tbl, look_for, exact, ret_1)
CLUREF tbl;
CLUREF look_for;
CLUREF exact;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    stable_OWN_DEFN *type_own_ptr;
    CLUREF low;
    CLUREF high;
    CLUREF guess;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->find_index_own_init == 0) {
        type_own_ptr->find_index_own_init = 1;
    }
    enter_proc(82);

  LINE(86);
    {
        {CLUREF T_1_1;
        CLUREF T_1_2;
        T_1_1.num = tbl.array->ext_low;
        T_1_2.num = T_1_1.num - 1;
         if ((T_1_2.num >= 0 && T_1_1.num < 0 && (-1) < 0) || 
             (T_1_2.num <= 0 && T_1_1.num > 0 && (-1) > 0)) {
            err = ERR_overflow;
            goto ex_0;}
        low.num = T_1_2.num;
        }
        }

  LINE(87);
    {
        {CLUREF T_1_1;
        CLUREF T_1_2;
        T_1_1.num = tbl.array->ext_high;
        T_1_2.num = T_1_1.num + 1;
         if ((T_1_2.num > 0 && T_1_1.num < 0 && 1 < 0) || 
             (T_1_2.num < 0 && T_1_1.num > 0 && 1 > 0)) {
            err = ERR_overflow;
            goto ex_0;}
        high.num = T_1_2.num;
        }
        }

  LINE(89);
    for (;;) {
        if (true != true) { break; }

  LINE(93);
        {
            {CLUREF T_2_1;
            CLUREF T_2_2;
            T_2_1.num = low.num + high.num;
             if ((T_2_1.num > 0 && low.num < 0 && high.num < 0) || 
                 (T_2_1.num < 0 && low.num > 0 && high.num > 0)) {
                err = ERR_overflow;
                goto ex_0;}
            err = intOPdiv(T_2_1, CLU_2, &T_2_2);
            if (err != ERR_ok) goto ex_0;
            guess.num = T_2_2.num;
            }
            }

  LINE(95);
        {
        CLUREF T_3_1;
        CLUREF T_3_2;
        CLUREF T_3_3;
        if (guess.num < tbl.array->ext_low || guess.num > tbl.array->ext_high ) {
            err = ERR_bounds;
            goto ex_1;}
        T_3_1.num = tbl.array->store->data[guess.num - tbl.array->ext_low + tbl.array->int_low];
        T_3_2.num = T_3_1.vec->data[0];
        err = stringOPlt(T_3_2, look_for, &T_3_3);
        if (err != ERR_ok) goto ex_1;
        if (T_3_3.num == true) {

  LINE(96);
            {
            low.num = guess.num;
            }
            }
        else {
        CLUREF T_3_4;
        CLUREF T_3_5;
        CLUREF T_3_6;
        if (guess.num < tbl.array->ext_low || guess.num > tbl.array->ext_high ) {
            err = ERR_bounds;
            goto ex_1;}
        T_3_4.num = tbl.array->store->data[guess.num - tbl.array->ext_low + tbl.array->int_low];
        T_3_5.num = T_3_4.vec->data[0];
        err = stringOPgt(T_3_5, look_for, &T_3_6);
        if (err != ERR_ok) goto ex_1;
        if (T_3_6.num == true) {

  LINE(98);
            {
            high.num = guess.num;
            }
            }
        else {

  LINE(100);
            {
            {
            ret_1->num = guess.num;
            }
            {signal (ERR_ok);}}
            }}}/* end if */
            goto end_1;
            ex_1:
                if ((err == ERR_bounds)) {

  LINE(102);
                    {
                    if (exact.num == true) {

  LINE(103);
                        {
                        {signal (ERR_not_found);}}
                        }
                    else {

  LINE(105);
                        {
                        {
                        ret_1->num = high.num;
                        }
                        {signal (ERR_ok);}}
                        }}/* end if */
                }
                else {
                    goto ex_0;
                }
            end_1:;

  LINE(110);
        {
        CLUREF T_2_1;
        CLUREF T_2_2;
        T_2_1.num = low.num + 1;
         if ((T_2_1.num > 0 && low.num < 0 && 1 < 0) || 
             (T_2_1.num < 0 && low.num > 0 && 1 > 0)) {
            err = ERR_overflow;
            goto ex_0;}
        T_2_2.num = (T_2_1.num == high.num)? true : false;
        if (T_2_2.num == true) {

  LINE(111);
            {
            if (exact.num == true) {

  LINE(112);
                {
                {signal (ERR_not_found);}}
                }
            else {

  LINE(114);
                {
                {
                ret_1->num = high.num;
                }
                {signal (ERR_ok);}}
                }}/* end if */
            }
            }/* end if */
        }
        end_while_1:;
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

/**** END PROCEDURE find_index ****/


/**** BEGIN PROCEDURE delete ****/

errcode stableOPdelete(tbl, name)
CLUREF tbl;
CLUREF name;
    {
    errcode err;
    errcode ecode2;
    stable_OWN_DEFN *type_own_ptr;
    CLUREF index;
    CLUREF i;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->delete_own_init == 0) {
        add_parm_info_type(0, type_own_ptr->value_t_ops, stable_of_value_t_reqs);
        find_type_instance(stable_ops, 1, &stable_ownreqs, &(type_own_ptr->stable_of_value_t_ops));
        }
        if (type_own_ptr->delete_own_init == 0) {
        type_own_ptr->delete_own_init = 1;
    }
    enter_proc(123);

  LINE(124);
    {
        {CLUREF T_2_1;
        generic_CLU_proc.type_owns = type_own_ptr->stable_of_value_t_ops->type_owns;
        generic_CLU_proc.proc = stableOPfind_index;
        CUR_PROC_VAR.proc = &generic_CLU_proc;
        err = stableOPfind_index(tbl, name, CLU_1, &T_2_1);
        if (err != ERR_ok) goto ex_1;
        index.num = T_2_1.num;
        }
        }
    goto end_1;
    ex_1:
        if (err == ERR_not_found) {signal(ERR_not_found);}
        else {
            goto ex_0;}
    end_1:;

  LINE(127);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    CLUREF T_1_4;
        T_1_1.num = tbl.array->ext_high;
        T_1_2.num = T_1_1.num - 1;
         if ((T_1_2.num >= 0 && T_1_1.num < 0 && (-1) < 0) || 
             (T_1_2.num <= 0 && T_1_1.num > 0 && (-1) > 0)) {
            err = ERR_overflow;
            goto ex_0;}
        T_1_4.num = T_1_2.num;
        for (T_1_3.num = index.num; T_1_3.num <= T_1_4.num; T_1_3.num++) {
            i.num = T_1_3.num;

  LINE(128);
            {
            CLUREF T_2_1;
            CLUREF T_2_2;
            T_2_1.num = i.num + 1;
             if ((T_2_1.num > 0 && i.num < 0 && 1 < 0) || 
                 (T_2_1.num < 0 && i.num > 0 && 1 > 0)) {
                err = ERR_overflow;
                goto ex_0;}
            if (T_2_1.num < tbl.array->ext_low || T_2_1.num > tbl.array->ext_high ) {
                err = ERR_bounds;
                goto ex_0;}
            T_2_2.num = tbl.array->store->data[T_2_1.num - tbl.array->ext_low + tbl.array->int_low];
            {
            if (i.num < tbl.array->ext_low || i.num > tbl.array->ext_high) {
                err = ERR_bounds;
                goto ex_0;}
            tbl.array->store->data[i.num + tbl.array->int_low - tbl.array->ext_low] = T_2_2.num;
            }
            }
        }
    }
    end_inline_for_1:;

  LINE(130);
    {
    CLUREF T_1_1;
    err = arrayOPremh(tbl, &T_1_1);
    if (err != ERR_ok) goto ex_0;
    }
    goto end_0;
    ex_0:
        {
            if (err == ERR_failure) {signal(ERR_failure);}
            elist[0] = _pclu_erstr(err);
            {signal(ERR_failure);}
        }
    end_0: {signal(ERR_ok);}
    }

/**** END PROCEDURE delete ****/


/**** BEGIN ITERATOR entries ****/

errcode stableOPentries(tbl, proc, user_locals, iecode)
CLUREF tbl;
errcode (*proc)();
char **user_locals;
errcode *iecode;
    {
    errcode ecode;
    errcode err;
    errcode ecode2;
    bool body_ctrl_req;
    stable_OWN_DEFN *type_own_ptr;
    CLUREF el;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->entries_own_init == 0) {
        type_own_ptr->entries_own_init = 1;
    }
    enter_proc(134);

  LINE(135);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
        T_1_2.num = tbl.array->ext_high; 
        T_1_3 = tbl;
        for (T_1_1.num = tbl.array->ext_low; T_1_1.num <= T_1_2.num; T_1_1.num++) {
            if (T_1_1.num > T_1_3.array->ext_high || T_1_1.num < T_1_3.array->ext_low) {
                err = ERR_failure;
                elist[0].str = array_bounds_exception_STRING;
                goto ex_0;}
            el.num = T_1_3.array->store->data[T_1_1.num - T_1_3.array->ext_low + T_1_3.array->int_low];

  LINE(136);
            {
            CLUREF T_2_1;
            CLUREF T_2_2;
            T_2_1.num = el.vec->data[0];
            T_2_2.num = el.vec->data[1];
            err = proc(T_2_1, T_2_2, user_locals, iecode);
            if (err != ERR_ok) {
            if (err == ERR_break) {signal(ERR_break);}
            if (err == ERR_iterbodyreturn) {signal(ERR_iterbodyreturn);}
            if (err == ERR_iterbodyexit) {signal(ERR_iterbodyexit);}
            if (err == ERR_iterbodysignal) {signal(ERR_iterbodysignal);}
            {signal(err);
                }}
            }
        }
    }
    end_inline_for_1:;
    goto end_0;
    ex_0:
        {
            if (err == ERR_failure) {signal(ERR_failure);}
            elist[0] = _pclu_erstr(err);
            {signal(ERR_failure);}
        }
    end_0: {signal(ERR_ok);}
    }

/**** END ITERATOR entries ****/


/**** BEGIN PROCEDURE empty ****/

errcode stableOPempty(tbl, ret_1)
CLUREF tbl;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
    stable_OWN_DEFN *type_own_ptr;
    type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (type_own_ptr->empty_own_init == 0) {
        type_own_ptr->empty_own_init = 1;
    }
    enter_proc(142);

  LINE(143);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = (tbl.array->ext_size == 0)? true : false;
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

/**** END PROCEDURE empty ****/

extern errcode stableOPunparse_IB_1();

/**** BEGIN PROCEDURE unparse ****/

errcode stableOPunparse(tbl, ret_1)
CLUREF tbl;
CLUREF *ret_1;
    {
    struct {
        errcode err;
        errcode ecode2;
        stable_OWN_DEFN *type_own_ptr;
        CLUREF string_to_return;
        CLUREF key;
        CLUREF value;
        CLUREF tbl;
        } locals;
    locals.tbl = tbl;
    locals.type_own_ptr = (stable_OWN_DEFN *) CUR_PROC_VAR.proc->type_owns;
        if (locals.type_own_ptr->unparse_own_init == 0) {
        add_parm_info_type(0, locals.type_own_ptr->value_t_ops, stable_of_value_t_reqs);
        find_type_instance(stable_ops, 1, &stable_ownreqs, &(locals.type_own_ptr->stable_of_value_t_ops));
        stringOPcons("", CLU_1, CLU_0, &STR_);
        stringOPcons(": ", CLU_1, CLU_2, &STR__072_040);
        stringOPcons("\n", CLU_1, CLU_1, &STR__012);
        }
        if (locals.type_own_ptr->unparse_own_init == 0) {
        locals.type_own_ptr->unparse_own_init = 1;
    }
    enter_proc(146);

  LINE(149);
    {
        {locals.string_to_return = STR_;
        }
        }

  LINE(152);
    {
        generic_CLU_proc.type_owns = locals.type_own_ptr->stable_of_value_t_ops->type_owns;
        generic_CLU_proc.proc = stableOPentries;
        CUR_PROC_VAR.proc = &generic_CLU_proc;
        locals.err = stableOPentries(locals.tbl, stableOPunparse_IB_1, &locals, &locals.ecode2);
        if (locals.err == ERR_iterbodyreturn) {
        ret_1->num = elist[0].num;
        signal(ERR_ok);}
        if (locals.err == ERR_iterbodysignal) {signal(locals.ecode2);}
        if (locals.err == ERR_break) locals.err = ERR_ok;
        if (locals.err == ERR_iterbodyexit) locals.err = locals.ecode2;
        if (locals.err != ERR_ok) goto ex_0;
        }

  LINE(159);
    {
    {
    ret_1->num = locals.string_to_return.num;
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

/**** END PROCEDURE unparse ****/


/**** BEGIN ITERATOR BODIES for unparse ****/

errcode stableOPunparse_IB_1(iv_1, iv_2, locals, iecode)
errcode *iecode;
CLUREF iv_1;
CLUREF iv_2;
struct {
    errcode err;
    errcode ecode2;
stable_OWN_DEFN *type_own_ptr;
    CLUREF string_to_return;
    CLUREF key;
    CLUREF value;
    CLUREF tbl;
    } *locals;
{
    locals->key.num = iv_1.num;
    locals->value.num = iv_2.num;
    enter_iter_body_proc(153);

  FB_LINE(153);
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    CLUREF T_1_3;
    CLUREF T_1_4;
    CLUREF T_1_5;
    CLUREF T_1_6;
    locals->err = stringOPconcat(locals->string_to_return, locals->key, &T_1_1);
    if (locals->err != ERR_ok) goto ex_0;
    locals->err = stringOPconcat(T_1_1, STR__072_040, &T_1_2);
    if (locals->err != ERR_ok) goto ex_0;
    T_1_4.proc = locals->type_own_ptr->value_t_ops->unparse.fcn;
    CUR_PROC_VAR = T_1_4;
    locals->err = T_1_4.proc->proc(locals->value, &T_1_3);
    if (locals->err != ERR_ok) goto ex_0;
    locals->err = stringOPconcat(T_1_2, T_1_3, &T_1_5);
    if (locals->err != ERR_ok) goto ex_0;
    locals->err = stringOPconcat(T_1_5, STR__012, &T_1_6);
    if (locals->err != ERR_ok) goto ex_0;
    locals->string_to_return.num = T_1_6.num;
    }
    {signal(ERR_ok);}
    ex_0:
        {
            *iecode = locals->err;
            {signal(ERR_iterbodyexit);}}
    end_0: {signal(ERR_ok);}
    }/* end stableOPunparse_IB_1 */

/**** END ITERATOR BODIES for unparse ****/

typedef struct{
    long count;
    OWNPTR type_owns;
    OWNPTR op_owns;
    struct OP_ENTRY entry[10];
} stable_OPS;

CLU_proc stable_oe_change = {{0,0,0,0}, stableOPchange, 0};
CLU_proc stable_oe_completions = {{0,0,0,0}, stableOPcompletions, 0};
CLU_proc stable_oe_create = {{0,0,0,0}, stableOPcreate, 0};
CLU_proc stable_oe_delete = {{0,0,0,0}, stableOPdelete, 0};
CLU_proc stable_oe_empty = {{0,0,0,0}, stableOPempty, 0};
CLU_proc stable_oe_entries = {{0,0,0,0}, stableOPentries, 0};
CLU_proc stable_oe_insert = {{0,0,0,0}, stableOPinsert, 0};
CLU_proc stable_oe_lookup = {{0,0,0,0}, stableOPlookup, 0};
CLU_proc stable_oe_match = {{0,0,0,0}, stableOPmatch, 0};
CLU_proc stable_oe_unparse = {{0,0,0,0}, stableOPunparse, 0};

stable_OPS stable_ops_actual = {10, (OWNPTR)&stable_own_init, (OWNPTR)&stable_own_init, {
    {&stable_oe_change, "change"},
    {&stable_oe_completions, "completions"},
    {&stable_oe_create, "create"},
    {&stable_oe_delete, "delete"},
    {&stable_oe_empty, "empty"},
    {&stable_oe_entries, "entries"},
    {&stable_oe_insert, "insert"},
    {&stable_oe_lookup, "lookup"},
    {&stable_oe_match, "match"},
    {&stable_oe_unparse, "unparse"}}};

struct OPS *stable_ops = (struct OPS *)&stable_ops_actual;

/**** END CLUSTER stable ****/