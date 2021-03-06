
/* This file was automatically generated by pclu.*/

#include "pclu_err.h"
#include "pclu_sys.h"


/**** BEGIN CLUSTER idn ****/

extern errcode oneofOPmake_1();
extern errcode recordOPget_2();
extern errcode recordOPset_1();
extern errcode recordOPget_1();
extern errcode recordOPget_3();
extern errcode recordOPset_3();
extern errcode recordOPequal();
extern errcode recordOP_gcd();
extern struct REQS *sequence_of_t_reqs;
extern struct OPS *expr_ops;
extern OWN_req sequence_ownreqs;
extern struct OPS *sequence_ops;
struct OPS *sequence_of_expr_table;
struct OPS *sequence_of_expr_ops;
struct OPS *sequence_of_expr_ops;
OWNPTR sequence_of_expr_owns;
extern struct OPS *string_ops;
extern struct OPS *sequence_of_expr_ops;
extern struct OPS *typespec_ops;
struct OPS  *record_name_parms_type__ops;
extern struct OPS *record_name_parms_type__ops;
struct OPS *sequence_of_record_name_parms_type__table;
struct OPS *sequence_of_record_name_parms_type__ops;
struct OPS *sequence_of_record_name_parms_type__ops;
OWNPTR sequence_of_record_name_parms_type__owns;
extern struct OPS *sequence_of_record_name_parms_type__ops;
extern struct OPS *idn_ops;
struct OPS  *record_opers_parm_ops;
extern struct OPS *du_ops;
extern struct OPS *record_opers_parm_ops;
extern struct OPS *null_ops;
struct OPS  *oneof_expr_gen_opgen_ownvar_tconst_tparm_typeset_unknown_var_vparm_ops;
extern struct OPS *int_ops;
struct OPS  *oneof_ref_val_ops;
struct OPS  *struct_disp_reg_ops;
extern struct OPS *oneof_ref_val_ops;
extern struct OPS *struct_disp_reg_ops;
struct OPS  *oneof_a_cown_cparm_disp_index_ivar_pcown_prown_reg_rown_rparm_tos_var_ops;
extern struct OPS *oneof_expr_gen_opgen_ownvar_tconst_tparm_typeset_unknown_var_vparm_ops;
extern struct OPS *oneof_a_cown_cparm_disp_index_ivar_pcown_prown_reg_rown_rparm_tos_var_ops;
struct OPS  *record_kind_str_val_ops;
static int idn_own_init = 0;
OWN_req idn_ownreqs = {0,0};
errcode idn_own_init_proc()
{
    errcode err;
    enter_own_init_proc();
        if (idn_own_init == 0) {
        add_parm_info_type(0, expr_ops, sequence_of_t_reqs);
        find_type_instance(sequence_ops, 1, &sequence_ownreqs, &(sequence_of_expr_ops));
        add_selector_info("name", 0, string_ops); 
        add_selector_info("parms", 1, sequence_of_expr_ops); 
        add_selector_info("type_", 2, typespec_ops); 
        find_selector_ops("record", 3, &(record_name_parms_type__ops));
        add_parm_info_type(0, record_name_parms_type__ops, sequence_of_t_reqs);
        find_type_instance(sequence_ops, 1, &sequence_ownreqs, &(sequence_of_record_name_parms_type__ops));
        add_selector_info("opers", 0, sequence_of_record_name_parms_type__ops); 
        add_selector_info("parm", 1, idn_ops); 
        find_selector_ops("record", 2, &(record_opers_parm_ops));
        add_selector_info("expr", 0, expr_ops); 
        add_selector_info("gen", 1, du_ops); 
        add_selector_info("opgen", 2, string_ops); 
        add_selector_info("ownvar", 3, typespec_ops); 
        add_selector_info("tconst", 4, sequence_of_record_name_parms_type__ops); 
        add_selector_info("tparm", 5, sequence_of_record_name_parms_type__ops); 
        add_selector_info("typeset", 6, record_opers_parm_ops); 
        add_selector_info("unknown", 7, null_ops); 
        add_selector_info("var", 8, typespec_ops); 
        add_selector_info("vparm", 9, typespec_ops); 
        find_selector_ops("oneof", 10, &(oneof_expr_gen_opgen_ownvar_tconst_tparm_typeset_unknown_var_vparm_ops));
        add_selector_info("ref", 0, int_ops); 
        add_selector_info("val", 1, int_ops); 
        find_selector_ops("oneof", 2, &(oneof_ref_val_ops));
        add_selector_info("disp", 0, int_ops); 
        add_selector_info("reg", 1, int_ops); 
        find_selector_ops("struct", 2, &(struct_disp_reg_ops));
        add_selector_info("a", 0, null_ops); 
        add_selector_info("cown", 1, oneof_ref_val_ops); 
        add_selector_info("cparm", 2, oneof_ref_val_ops); 
        add_selector_info("disp", 3, struct_disp_reg_ops); 
        add_selector_info("index", 4, struct_disp_reg_ops); 
        add_selector_info("ivar", 5, int_ops); 
        add_selector_info("pcown", 6, oneof_ref_val_ops); 
        add_selector_info("prown", 7, oneof_ref_val_ops); 
        add_selector_info("reg", 8, int_ops); 
        add_selector_info("rown", 9, oneof_ref_val_ops); 
        add_selector_info("rparm", 10, oneof_ref_val_ops); 
        add_selector_info("tos", 11, null_ops); 
        add_selector_info("var", 12, int_ops); 
        find_selector_ops("oneof", 13, &(oneof_a_cown_cparm_disp_index_ivar_pcown_prown_reg_rown_rparm_tos_var_ops));
        add_selector_info("kind", 0, oneof_expr_gen_opgen_ownvar_tconst_tparm_typeset_unknown_var_vparm_ops); 
        add_selector_info("str", 1, string_ops); 
        add_selector_info("val", 2, oneof_a_cown_cparm_disp_index_ivar_pcown_prown_reg_rown_rparm_tos_var_ops); 
        find_selector_ops("record", 3, &(record_kind_str_val_ops));
        idn_own_init = 1;
        {signal(ERR_ok);}
    ex_0: pclu_unhandled(err); {signal(ERR_failure);}
        }
    }


/**** BEGIN PROCEDURE create ****/

errcode idnOPcreate(s, k, ret_1)
CLUREF s;
CLUREF k;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(21);

  LINE(22);
    {
    {
    CLUREF T_1_1;
    CLUREF T_1_2;
    RecordAlloc(3, T_1_1);
    T_1_1.vec->data[1]  = s.num;
    CellAlloc(1, nil, T_1_2);
    T_1_1.vec->data[2]  = T_1_2.num;
    T_1_1.vec->data[0]  = k.num;
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


/**** BEGIN PROCEDURE get_str ****/

errcode idnOPget_str(i, ret_1)
CLUREF i;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(27);

  LINE(28);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = i.vec->data[1];
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

/**** END PROCEDURE get_str ****/


/**** BEGIN PROCEDURE set_kind ****/

errcode idnOPset_kind(i, k)
CLUREF i;
CLUREF k;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(31);

  LINE(32);
    {
    i.vec->data[0]  = k.num;
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

/**** END PROCEDURE set_kind ****/


/**** BEGIN PROCEDURE get_kind ****/

errcode idnOPget_kind(i, ret_1)
CLUREF i;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(35);

  LINE(36);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = i.vec->data[0];
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

/**** END PROCEDURE get_kind ****/


/**** BEGIN PROCEDURE get_val ****/

errcode idnOPget_val(i, ret_1)
CLUREF i;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(39);

  LINE(40);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = i.vec->data[2];
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

/**** END PROCEDURE get_val ****/


/**** BEGIN PROCEDURE set_val ****/

errcode idnOPset_val(i, val)
CLUREF i;
CLUREF val;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(43);

  LINE(44);
    {
    i.vec->data[2]  = val.num;
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

/**** END PROCEDURE set_val ****/


/**** BEGIN PROCEDURE copy ****/

errcode idnOPcopy(i, ret_1)
CLUREF i;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(47);

  LINE(48);
    {
    {
    ret_1->num = i.num;
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


/**** BEGIN PROCEDURE equal ****/

errcode idnOPequal(i1, i2, ret_1)
CLUREF i1;
CLUREF i2;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(51);

  LINE(52);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = (i1.num == i2.num)? true : false;
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


/**** BEGIN PROCEDURE similar ****/

errcode idnOPsimilar(i1, i2, ret_1)
CLUREF i1;
CLUREF i2;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
    enter_proc(55);

  LINE(56);
    {
    {
    CLUREF T_1_1;
    T_1_1.num = (i1.num == i2.num)? true : false;
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

struct OPS *sequence_of_expr_table;
struct OPS *sequence_of_expr_ops;
struct OPS *sequence_of_expr_ops;
OWNPTR sequence_of_expr_owns;
struct OPS  *record_name_parms_type__ops;
struct OPS *sequence_of_record_name_parms_type__table;
struct OPS *sequence_of_record_name_parms_type__ops;
struct OPS *sequence_of_record_name_parms_type__ops;
OWNPTR sequence_of_record_name_parms_type__owns;
struct OPS  *record_opers_parm_ops;
struct OPS  *oneof_expr_gen_opgen_ownvar_tconst_tparm_typeset_unknown_var_vparm_ops;
struct OPS  *oneof_ref_val_ops;
struct OPS  *struct_disp_reg_ops;
struct OPS  *oneof_a_cown_cparm_disp_index_ivar_pcown_prown_reg_rown_rparm_tos_var_ops;
struct OPS  *record_kind_str_val_ops;
static int idnOP_gcd_own_init = 0;

/**** BEGIN PROCEDURE _gcd ****/

errcode idnOP_gcd(i, tab, ret_1)
CLUREF i;
CLUREF tab;
CLUREF *ret_1;
    {
    errcode err;
    errcode ecode2;
        if (idnOP_gcd_own_init == 0) {
        if (idn_own_init == 0) {
            err = idn_own_init_proc();
            if (err != ERR_ok) goto ex_0;
            }
        idnOP_gcd_own_init = 1;
    }
    enter_proc(59);

  LINE(60);
    {
    {
    CLUREF T_1_1;
    generic_CLU_proc.type_owns = 0;
    generic_CLU_proc.op_owns = record_kind_str_val_ops->entry[6].fcn->op_owns;
    generic_CLU_proc.proc = recordOP_gcd;
    CUR_PROC_VAR.proc = &generic_CLU_proc;
    err = recordOP_gcd(i, tab, &T_1_1);
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
    struct OP_ENTRY entry[10];
} idn_OPS;

CLU_proc idn_oe__gcd = {{0,0,0,0}, idnOP_gcd, 0};
CLU_proc idn_oe_copy = {{0,0,0,0}, idnOPcopy, 0};
CLU_proc idn_oe_create = {{0,0,0,0}, idnOPcreate, 0};
CLU_proc idn_oe_equal = {{0,0,0,0}, idnOPequal, 0};
CLU_proc idn_oe_get_kind = {{0,0,0,0}, idnOPget_kind, 0};
CLU_proc idn_oe_get_str = {{0,0,0,0}, idnOPget_str, 0};
CLU_proc idn_oe_get_val = {{0,0,0,0}, idnOPget_val, 0};
CLU_proc idn_oe_set_kind = {{0,0,0,0}, idnOPset_kind, 0};
CLU_proc idn_oe_set_val = {{0,0,0,0}, idnOPset_val, 0};
CLU_proc idn_oe_similar = {{0,0,0,0}, idnOPsimilar, 0};

idn_OPS idn_ops_actual = {10, (OWNPTR)&idn_own_init, (OWNPTR)&idn_own_init, {
    {&idn_oe__gcd, "_gcd"},
    {&idn_oe_copy, "copy"},
    {&idn_oe_create, "create"},
    {&idn_oe_equal, "equal"},
    {&idn_oe_get_kind, "get_kind"},
    {&idn_oe_get_str, "get_str"},
    {&idn_oe_get_val, "get_val"},
    {&idn_oe_set_kind, "set_kind"},
    {&idn_oe_set_val, "set_val"},
    {&idn_oe_similar, "similar"}}};

struct OPS *idn_ops = (struct OPS *)&idn_ops_actual;

/**** END CLUSTER idn ****/
