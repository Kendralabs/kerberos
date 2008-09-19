/*
 * $Header$
 *
 * Copyright 2008 Massachusetts Institute of Technology.
 * All Rights Reserved.
 *
 * Export of this software from the United States of America may
 * require a specific license from the United States Government.
 * It is the responsibility of any person or organization contemplating
 * export to obtain such a license before exporting.
 *
 * WITHIN THAT CONSTRAINT, permission to use, copy, modify, and
 * distribute this software and its documentation for any purpose and
 * without fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright notice and
 * this permission notice appear in supporting documentation, and that
 * the name of M.I.T. not be used in advertising or publicity pertaining
 * to distribution of the software without specific, written prior
 * permission.  Furthermore if you modify this software you must label
 * your software as modified software and not distribute it in such a
 * fashion that it might be confused with the original M.I.T. software.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is" without express
 * or implied warranty.
 */

#include "kim_private.h"



/* ------------------------------------------------------------------------ */

kim_error kim_ui_cli_init (kim_ui_cli_context *out_context)
{
    return KIM_NO_ERROR;
}

/* ------------------------------------------------------------------------ */

kim_error kim_ui_cli_select_identity (kim_ui_cli_context   in_context,
                                      kim_selection_hints  in_hints,
                                      kim_identity        *out_identity)
{
    kim_error err = KIM_NO_ERROR;
    
    if (!err && !in_context  ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !in_hints    ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !out_identity) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    
    if (!err) {
    }
    
    return check_error (err);
}

/* ------------------------------------------------------------------------ */

kim_error kim_ui_cli_auth_prompt (kim_ui_cli_context   in_context,
                                  kim_identity         in_identity,
                                  kim_prompt_type      in_type,
                                  kim_string           in_title,
                                  kim_string           in_message,
                                  kim_string           in_description,
                                  char               **out_reply)
{
    kim_error err = KIM_NO_ERROR;
    
    if (!err && !in_context ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !in_identity) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !out_reply  ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    /* in_title, in_message or in_description may be NULL */
    
    if (!err) {
    }
    
    return check_error (err);
}

/* ------------------------------------------------------------------------ */

kim_error kim_ui_cli_change_password (kim_ui_cli_context   in_context,
                                      kim_identity         in_identity,
                                      kim_boolean          in_old_password_expired,
                                      char               **out_old_password,
                                      char               **out_new_password,
                                      char               **out_verify_password)
{
    kim_error err = KIM_NO_ERROR;
    
    if (!err && !in_context         ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !in_identity        ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !out_old_password   ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !out_new_password   ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !out_verify_password) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    
    if (!err) {
    }
    
    return check_error (err);
}

/* ------------------------------------------------------------------------ */

kim_error kim_ui_cli_display_error (kim_ui_cli_context in_context,
                                    kim_identity       in_identity,
                                    kim_error          in_error,
                                    kim_string         in_error_message,
                                    kim_string         in_error_description)
{
    kim_error err = KIM_NO_ERROR;
    
    if (!err && !in_context          ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !in_error_message    ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !in_error_description) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    
    if (!err) {
    }
    
    return check_error (err);
}

/* ------------------------------------------------------------------------ */

void kim_ui_cli_free_string (kim_ui_cli_context  in_context,
                             char               *io_string)
{
    kim_error err = KIM_NO_ERROR;
    
    if (!err && !in_context) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    if (!err && !io_string ) { err = check_error (KIM_NULL_PARAMETER_ERR); }
    
    if (!err) {
        kim_string_free ((kim_string *) io_string);
    }
}

/* ------------------------------------------------------------------------ */

kim_error kim_ui_cli_fini (kim_ui_cli_context *io_context)
{
    return KIM_NO_ERROR;
}