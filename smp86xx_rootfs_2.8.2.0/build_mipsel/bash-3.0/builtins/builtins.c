/* builtins.c -- the built in shell commands. */

/* This file is manufactured by ./mkbuiltins, and should not be
   edited by hand.  See the source to mkbuiltins for details. */

/* Copyright (C) 1987-2002 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   Bash is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash; see the file COPYING.  If not, write to the Free
   Software Foundation, 59 Temple Place, Suite 330, Boston, MA 02111 USA. */

/* The list of shell builtins.  Each element is name, function, flags,
   long-doc, short-doc.  The long-doc field contains a pointer to an array
   of help lines.  The function takes a WORD_LIST *; the first word in the
   list is the first arg to the command.  The list has already had word
   expansion performed.

   Functions which need to look at only the simple commands (e.g.
   the enable_builtin ()), should ignore entries where
   (array[i].function == (sh_builtin_func_t *)NULL).  Such entries are for
   the list of shell reserved control structures, like `if' and `while'.
   The end of the list is denoted with a NULL name field. */

#include "../builtins.h"
#include "builtext.h"
#include "bashintl.h"

struct builtin static_shell_builtins[] = {
#if defined (ALIAS)
  { "alias", alias_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | ASSIGNMENT_BUILTIN, alias_doc,
     "alias [-p] [name[=value] ... ]", (char *)NULL },
#endif /* ALIAS */
#if defined (ALIAS)
  { "unalias", unalias_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, unalias_doc,
     "unalias [-a] name [name ...]", (char *)NULL },
#endif /* ALIAS */
#if defined (READLINE)
  { "bind", bind_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, bind_doc,
     "bind [-lpvsPVS] [-m keymap] [-f filename] [-q name] [-u name] [-r keyseq] [-x keyseq:shell-command] [keyseq:readline-function or readline-command]", (char *)NULL },
#endif /* READLINE */
  { "break", break_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, break_doc,
     "break [n]", (char *)NULL },
  { "continue", continue_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, continue_doc,
     "continue [n]", (char *)NULL },
  { "builtin", builtin_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, builtin_doc,
     "builtin [shell-builtin [arg ...]]", (char *)NULL },
#if defined (DEBUGGER)
  { "caller", caller_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, caller_doc,
     "caller [EXPR]", (char *)NULL },
#endif /* DEBUGGER */
  { "cd", cd_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, cd_doc,
     "cd [-L|-P] [dir]", (char *)NULL },
  { "pwd", pwd_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, pwd_doc,
     "pwd [-PL]", (char *)NULL },
  { ":", colon_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, colon_doc,
     ":", (char *)NULL },
  { "true", colon_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, true_doc,
     "true", (char *)NULL },
  { "false", false_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, false_doc,
     "false", (char *)NULL },
  { "command", command_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, command_doc,
     "command [-pVv] command [arg ...]", (char *)NULL },
  { "declare", declare_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | ASSIGNMENT_BUILTIN, declare_doc,
     "declare [-afFirtx] [-p] [name[=value] ...]", (char *)NULL },
  { "typeset", declare_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | ASSIGNMENT_BUILTIN, typeset_doc,
     "typeset [-afFirtx] [-p] name[=value] ...", (char *)NULL },
  { "local", local_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | ASSIGNMENT_BUILTIN, local_doc,
     "local name[=value] ...", (char *)NULL },
#if defined (V9_ECHO)
  { "echo", echo_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, echo_doc,
     "echo [-neE] [arg ...]", (char *)NULL },
#endif /* V9_ECHO */
#if !defined (V9_ECHO)
  { "echo", echo_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, echo_doc,
     "echo [-n] [arg ...]", (char *)NULL },
#endif /* !V9_ECHO */
  { "enable", enable_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, enable_doc,
     "enable [-pnds] [-a] [-f filename] [name ...]", (char *)NULL },
  { "eval", eval_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, eval_doc,
     "eval [arg ...]", (char *)NULL },
  { "getopts", getopts_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, getopts_doc,
     "getopts optstring name [arg]", (char *)NULL },
  { "exec", exec_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, exec_doc,
     "exec [-cl] [-a name] file [redirection ...]", (char *)NULL },
  { "exit", exit_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, exit_doc,
     "exit [n]", (char *)NULL },
  { "logout", logout_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, logout_doc,
     "logout", (char *)NULL },
#if defined (HISTORY)
  { "fc", fc_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, fc_doc,
     "fc [-e ename] [-nlr] [first] [last] or fc -s [pat=rep] [cmd]", (char *)NULL },
#endif /* HISTORY */
#if defined (JOB_CONTROL)
  { "fg", fg_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, fg_doc,
     "fg [job_spec]", (char *)NULL },
#endif /* JOB_CONTROL */
#if defined (JOB_CONTROL)
  { "bg", bg_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, bg_doc,
     "bg [job_spec]", (char *)NULL },
#endif /* JOB_CONTROL */
  { "hash", hash_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, hash_doc,
     "hash [-lr] [-p pathname] [-dt] [name ...]", (char *)NULL },
#if defined (HELP_BUILTIN)
  { "help", help_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, help_doc,
     "help [-s] [pattern ...]", (char *)NULL },
#endif /* HELP_BUILTIN */
#if defined (HISTORY)
  { "history", history_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, history_doc,
     "history [-c] [-d offset] [n] or history -awrn [filename] or history -ps arg [arg...]", (char *)NULL },
#endif /* HISTORY */
#if defined (JOB_CONTROL)
  { "jobs", jobs_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, jobs_doc,
     "jobs [-lnprs] [jobspec ...] or jobs -x command [args]", (char *)NULL },
#endif /* JOB_CONTROL */
#if defined (JOB_CONTROL)
  { "disown", disown_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, disown_doc,
     "disown [-h] [-ar] [jobspec ...]", (char *)NULL },
#endif /* JOB_CONTROL */
  { "kill", kill_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, kill_doc,
     "kill [-s sigspec | -n signum | -sigspec] [pid | job]... or kill -l [sigspec]", (char *)NULL },
  { "let", let_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, let_doc,
     "let arg [arg ...]", (char *)NULL },
  { "read", read_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, read_doc,
     "read [-ers] [-u fd] [-t timeout] [-p prompt] [-a array] [-n nchars] [-d delim] [name ...]", (char *)NULL },
  { "return", return_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, return_doc,
     "return [n]", (char *)NULL },
  { "set", set_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, set_doc,
     "set [--abefhkmnptuvxBCHP] [-o option] [arg ...]", (char *)NULL },
  { "unset", unset_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, unset_doc,
     "unset [-f] [-v] [name ...]", (char *)NULL },
  { "export", export_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN | ASSIGNMENT_BUILTIN, export_doc,
     "export [-nf] [name[=value] ...] or export -p", (char *)NULL },
  { "readonly", readonly_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN | ASSIGNMENT_BUILTIN, readonly_doc,
     "readonly [-af] [name[=value] ...] or readonly -p", (char *)NULL },
  { "shift", shift_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, shift_doc,
     "shift [n]", (char *)NULL },
  { "source", source_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, source_doc,
     "source filename [arguments]", (char *)NULL },
  { ".", source_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, dot_doc,
     ". filename [arguments]", (char *)NULL },
#if defined (JOB_CONTROL)
  { "suspend", suspend_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, suspend_doc,
     "suspend [-f]", (char *)NULL },
#endif /* JOB_CONTROL */
  { "test", test_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, test_doc,
     "test [expr]", (char *)NULL },
  { "[", test_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, test_bracket_doc,
     "[ arg... ]", (char *)NULL },
  { "times", times_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, times_doc,
     "times", (char *)NULL },
  { "trap", trap_builtin, BUILTIN_ENABLED | STATIC_BUILTIN | SPECIAL_BUILTIN, trap_doc,
     "trap [-lp] [arg signal_spec ...]", (char *)NULL },
  { "type", type_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, type_doc,
     "type [-afptP] name [name ...]", (char *)NULL },
#if !defined (_MINIX)
  { "ulimit", ulimit_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, ulimit_doc,
     "ulimit [-SHacdflmnpstuv] [limit]", (char *)NULL },
#endif /* !_MINIX */
  { "umask", umask_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, umask_doc,
     "umask [-p] [-S] [mode]", (char *)NULL },
#if defined (JOB_CONTROL)
  { "wait", wait_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, wait_doc,
     "wait [n]", (char *)NULL },
#endif /* JOB_CONTROL */
#if !defined (JOB_CONTROL)
  { "wait", wait_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, wait_doc,
     "wait [n]", (char *)NULL },
#endif /* !JOB_CONTROL */
  { "for", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, for_doc,
     "for NAME [in WORDS ... ;] do COMMANDS; done", (char *)NULL },
  { "for ((", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, arith_for_doc,
     "for (( exp1; exp2; exp3 )); do COMMANDS; done", (char *)NULL },
  { "select", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, select_doc,
     "select NAME [in WORDS ... ;] do COMMANDS; done", (char *)NULL },
  { "time", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, time_doc,
     "time [-p] PIPELINE", (char *)NULL },
  { "case", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, case_doc,
     "case WORD in [PATTERN [| PATTERN]...) COMMANDS ;;]... esac", (char *)NULL },
  { "if", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, if_doc,
     "if COMMANDS; then COMMANDS; [ elif COMMANDS; then COMMANDS; ]... [ else COMMANDS; ] fi", (char *)NULL },
  { "while", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, while_doc,
     "while COMMANDS; do COMMANDS; done", (char *)NULL },
  { "until", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, until_doc,
     "until COMMANDS; do COMMANDS; done", (char *)NULL },
  { "function", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, function_doc,
     "function NAME { COMMANDS ; } or NAME () { COMMANDS ; }", (char *)NULL },
  { "{ ... }", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, grouping_braces_doc,
     "{ COMMANDS ; }", (char *)NULL },
  { "%", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, fg_percent_doc,
     "%[DIGITS | WORD] [&]", (char *)NULL },
  { "(( ... ))", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, arith_doc,
     "(( expression ))", (char *)NULL },
  { "[[ ... ]]", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, conditional_doc,
     "[[ expression ]]", (char *)NULL },
  { "variables", (sh_builtin_func_t *)0x0, BUILTIN_ENABLED | STATIC_BUILTIN, variable_help_doc,
     "variables - Some variable names and meanings", (char *)NULL },
#if defined (PUSHD_AND_POPD)
  { "pushd", pushd_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, pushd_doc,
     "pushd [dir | +N | -N] [-n]", (char *)NULL },
#endif /* PUSHD_AND_POPD */
#if defined (PUSHD_AND_POPD)
  { "popd", popd_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, popd_doc,
     "popd [+N | -N] [-n]", (char *)NULL },
#endif /* PUSHD_AND_POPD */
#if defined (PUSHD_AND_POPD)
  { "dirs", dirs_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, dirs_doc,
     "dirs [-clpv] [+N] [-N]", (char *)NULL },
#endif /* PUSHD_AND_POPD */
  { "shopt", shopt_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, shopt_doc,
     "shopt [-pqsu] [-o long-option] optname [optname...]", (char *)NULL },
  { "printf", printf_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, printf_doc,
     "printf format [arguments]", (char *)NULL },
#if defined (PROGRAMMABLE_COMPLETION)
  { "complete", complete_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, complete_doc,
     "complete [-abcdefgjksuv] [-pr] [-o option] [-A action] [-G globpat] [-W wordlist] [-P prefix] [-S suffix] [-X filterpat] [-F function] [-C command] [name ...]", (char *)NULL },
#endif /* PROGRAMMABLE_COMPLETION */
#if defined (PROGRAMMABLE_COMPLETION)
  { "compgen", compgen_builtin, BUILTIN_ENABLED | STATIC_BUILTIN, compgen_doc,
     "compgen [-abcdefgjksuv] [-o option] [-A action] [-G globpat] [-W wordlist] [-P prefix] [-S suffix] [-X filterpat] [-F function] [-C command] [word]", (char *)NULL },
#endif /* PROGRAMMABLE_COMPLETION */
  { (char *)0x0, (sh_builtin_func_t *)0x0, 0, (char **)0x0, (char *)0x0 }
};

struct builtin *shell_builtins = static_shell_builtins;
struct builtin *current_builtin;

int num_shell_builtins =
	sizeof (static_shell_builtins) / sizeof (struct builtin) - 1;
#if defined (ALIAS)
char * const alias_doc[] = {
#if defined (HELP_BUILTIN)
  N_("`alias' with no arguments or with the -p option prints the list"),
  N_("of aliases in the form alias NAME=VALUE on standard output."),
  N_("Otherwise, an alias is defined for each NAME whose VALUE is given."),
  N_("A trailing space in VALUE causes the next word to be checked for"),
  N_("alias substitution when the alias is expanded.  Alias returns"),
  N_("true unless a NAME is given for which no alias has been defined."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* ALIAS */
#if defined (ALIAS)
char * const unalias_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Remove NAMEs from the list of defined aliases.  If the -a option is given,"),
  N_("then remove all alias definitions."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* ALIAS */
#if defined (READLINE)
char * const bind_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Bind a key sequence to a Readline function or a macro, or set"),
  N_("a Readline variable.  The non-option argument syntax is equivalent"),
  N_("to that found in ~/.inputrc, but must be passed as a single argument:"),
  N_("bind '\"\\C-x\\C-r\": re-read-init-file'."),
  N_("bind accepts the following options:"),
  N_("  -m  keymap         Use `keymap' as the keymap for the duration of this"),
  N_("                     command.  Acceptable keymap names are emacs,"),
  N_("                     emacs-standard, emacs-meta, emacs-ctlx, vi, vi-move,"),
  N_("                     vi-command, and vi-insert."),
  N_("  -l                 List names of functions."),
  N_("  -P                 List function names and bindings."),
  N_("  -p                 List functions and bindings in a form that can be"),
  N_("                     reused as input."),
  N_("  -r  keyseq         Remove the binding for KEYSEQ."),
  N_("  -x  keyseq:shell-command	Cause SHELL-COMMAND to be executed when"),
  N_("				KEYSEQ is entered."),
  N_("  -f  filename       Read key bindings from FILENAME."),
  N_("  -q  function-name  Query about which keys invoke the named function."),
  N_("  -u  function-name  Unbind all keys which are bound to the named function."),
  N_("  -V                 List variable names and values"),
  N_("  -v                 List variable names and values in a form that can"),
  N_("                     be reused as input."),
  N_("  -S                 List key sequences that invoke macros and their values"),
  N_("  -s                 List key sequences that invoke macros and their values"),
  N_("                     in a form that can be reused as input."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* READLINE */
char * const break_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Exit from within a FOR, WHILE or UNTIL loop.  If N is specified,"),
  N_("break N levels."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const continue_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Resume the next iteration of the enclosing FOR, WHILE or UNTIL loop."),
  N_("If N is specified, resume at the N-th enclosing loop."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const builtin_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Run a shell builtin.  This is useful when you wish to rename a"),
  N_("shell builtin to be a function, but need the functionality of the"),
  N_("builtin within the function itself."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (DEBUGGER)
char * const caller_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Returns the context of the current subroutine call."),
  N_(""),
  N_("Without EXPR, returns returns \"$line $filename\".  With EXPR,"),
  N_("returns \"$line $subroutine $filename\"; this extra information"),
  N_("can be used used to provide a stack trace."),
  N_(""),
  N_("The value of EXPR indicates how many call frames to go back before the"),
  N_("current one; the top frame is frame 0."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* DEBUGGER */
char * const cd_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Change the current directory to DIR.  The variable $HOME is the"),
  N_("default DIR.  The variable CDPATH defines the search path for"),
  N_("the directory containing DIR.  Alternative directory names in CDPATH"),
  N_("are separated by a colon (:).  A null directory name is the same as"),
  N_("the current directory, i.e. `.'.  If DIR begins with a slash (/),"),
  N_("then CDPATH is not used.  If the directory is not found, and the"),
  N_("shell option `cdable_vars' is set, then try the word as a variable"),
  N_("name.  If that variable has a value, then cd to the value of that"),
  N_("variable.  The -P option says to use the physical directory structure"),
  N_("instead of following symbolic links; the -L option forces symbolic links"),
  N_("to be followed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const pwd_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Print the current working directory.  With the -P option, pwd prints"),
  N_("the physical directory, without any symbolic links; the -L option"),
  N_("makes pwd follow symbolic links."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const colon_doc[] = {
#if defined (HELP_BUILTIN)
  N_("No effect; the command does nothing.  A zero exit code is returned."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const true_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Return a successful result."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const false_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Return an unsuccessful result."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const command_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Runs COMMAND with ARGS ignoring shell functions.  If you have a shell"),
  N_("function called `ls', and you wish to call the command `ls', you can"),
  N_("say \"command ls\".  If the -p option is given, a default value is used"),
  N_("for PATH that is guaranteed to find all of the standard utilities.  If"),
  N_("the -V or -v option is given, a string is printed describing COMMAND."),
  N_("The -V option produces a more verbose description."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const declare_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Declare variables and/or give them attributes.  If no NAMEs are"),
  N_("given, then display the values of variables instead.  The -p option"),
  N_("will display the attributes and values of each NAME."),
  N_(""),
  N_("The flags are:"),
  N_(""),
  N_("  -a	to make NAMEs arrays (if supported)"),
  N_("  -f	to select from among function names only"),
  N_("  -F	to display function names (and line number and source file name if"),
  N_("	debugging) without definitions"),
  N_("  -i	to make NAMEs have the `integer' attribute"),
  N_("  -r	to make NAMEs readonly"),
  N_("  -t	to make NAMEs have the `trace' attribute"),
  N_("  -x	to make NAMEs export"),
  N_(""),
  N_("Variables with the integer attribute have arithmetic evaluation (see"),
  N_("`let') done when the variable is assigned to."),
  N_(""),
  N_("When displaying values of variables, -f displays a function's name"),
  N_("and definition.  The -F option restricts the display to function"),
  N_("name only."),
  N_(""),
  N_("Using `+' instead of `-' turns off the given attribute instead.  When"),
  N_("used in a function, makes NAMEs local, as with the `local' command."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const typeset_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Obsolete.  See `declare'."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const local_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Create a local variable called NAME, and give it VALUE.  LOCAL"),
  N_("can only be used within a function; it makes the variable NAME"),
  N_("have a visible scope restricted to that function and its children."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (V9_ECHO)
char * const echo_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Output the ARGs.  If -n is specified, the trailing newline is"),
  N_("suppressed.  If the -e option is given, interpretation of the"),
  N_("following backslash-escaped characters is turned on:"),
  N_("	\\a	alert (bell)"),
  N_("	\\b	backspace"),
  N_("	\\c	suppress trailing newline"),
  N_("	\\E	escape character"),
  N_("	\\f	form feed"),
  N_("	\\n	new line"),
  N_("	\\r	carriage return"),
  N_("	\\t	horizontal tab"),
  N_("	\\v	vertical tab"),
  N_("	\\\\	backslash"),
  N_("	\\num	the character whose ASCII code is NUM (octal)."),
  N_(""),
  N_("You can explicitly turn off the interpretation of the above characters"),
  N_("with the -E option."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* V9_ECHO */
#if !defined (V9_ECHO)
char * const echo_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Output the ARGs.  If -n is specified, the trailing newline is suppressed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* !V9_ECHO */
char * const enable_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Enable and disable builtin shell commands.  This allows"),
  N_("you to use a disk command which has the same name as a shell"),
  N_("builtin without specifying a full pathname.  If -n is used, the"),
  N_("NAMEs become disabled; otherwise NAMEs are enabled.  For example,"),
  N_("to use the `test' found in $PATH instead of the shell builtin"),
  N_("version, type `enable -n test'.  On systems supporting dynamic"),
  N_("loading, the -f option may be used to load new builtins from the"),
  N_("shared object FILENAME.  The -d option will delete a builtin"),
  N_("previously loaded with -f.  If no non-option names are given, or"),
  N_("the -p option is supplied, a list of builtins is printed.  The"),
  N_("-a option means to print every builtin with an indication of whether"),
  N_("or not it is enabled.  The -s option restricts the output to the POSIX.2"),
  N_("`special' builtins.  The -n option displays a list of all disabled builtins."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const eval_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Read ARGs as input to the shell and execute the resulting command(s)."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const getopts_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Getopts is used by shell procedures to parse positional parameters."),
  N_(""),
  N_("OPTSTRING contains the option letters to be recognized; if a letter"),
  N_("is followed by a colon, the option is expected to have an argument,"),
  N_("which should be separated from it by white space."),
  N_(""),
  N_("Each time it is invoked, getopts will place the next option in the"),
  N_("shell variable $name, initializing name if it does not exist, and"),
  N_("the index of the next argument to be processed into the shell"),
  N_("variable OPTIND.  OPTIND is initialized to 1 each time the shell or"),
  N_("a shell script is invoked.  When an option requires an argument,"),
  N_("getopts places that argument into the shell variable OPTARG."),
  N_(""),
  N_("getopts reports errors in one of two ways.  If the first character"),
  N_("of OPTSTRING is a colon, getopts uses silent error reporting.  In"),
  N_("this mode, no error messages are printed.  If an invalid option is"),
  N_("seen, getopts places the option character found into OPTARG.  If a"),
  N_("required argument is not found, getopts places a ':' into NAME and"),
  N_("sets OPTARG to the option character found.  If getopts is not in"),
  N_("silent mode, and an invalid option is seen, getopts places '?' into"),
  N_("NAME and unsets OPTARG.  If a required argument is not found, a '?'"),
  N_("is placed in NAME, OPTARG is unset, and a diagnostic message is"),
  N_("printed."),
  N_(""),
  N_("If the shell variable OPTERR has the value 0, getopts disables the"),
  N_("printing of error messages, even if the first character of"),
  N_("OPTSTRING is not a colon.  OPTERR has the value 1 by default."),
  N_(""),
  N_("Getopts normally parses the positional parameters ($0 - $9), but if"),
  N_("more arguments are given, they are parsed instead."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const exec_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Exec FILE, replacing this shell with the specified program."),
  N_("If FILE is not specified, the redirections take effect in this"),
  N_("shell.  If the first argument is `-l', then place a dash in the"),
  N_("zeroth arg passed to FILE, as login does.  If the `-c' option"),
  N_("is supplied, FILE is executed with a null environment.  The `-a'"),
  N_("option means to make set argv[0] of the executed process to NAME."),
  N_("If the file cannot be executed and the shell is not interactive,"),
  N_("then the shell exits, unless the shell option `execfail' is set."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const exit_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Exit the shell with a status of N.  If N is omitted, the exit status"),
  N_("is that of the last command executed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const logout_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Logout of a login shell."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (HISTORY)
char * const fc_doc[] = {
#if defined (HELP_BUILTIN)
  N_("fc is used to list or edit and re-execute commands from the history list."),
  N_("FIRST and LAST can be numbers specifying the range, or FIRST can be a"),
  N_("string, which means the most recent command beginning with that"),
  N_("string."),
  N_(""),
  N_("   -e ENAME selects which editor to use.  Default is FCEDIT, then EDITOR,"),
  N_("      then vi."),
  N_(""),
  N_("   -l means list lines instead of editing."),
  N_("   -n means no line numbers listed."),
  N_("   -r means reverse the order of the lines (making it newest listed first)."),
  N_(""),
  N_("With the `fc -s [pat=rep ...] [command]' format, the command is"),
  N_("re-executed after the substitution OLD=NEW is performed."),
  N_(""),
  N_("A useful alias to use with this is r='fc -s', so that typing `r cc'"),
  N_("runs the last command beginning with `cc' and typing `r' re-executes"),
  N_("the last command."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* HISTORY */
#if defined (JOB_CONTROL)
char * const fg_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Place JOB_SPEC in the foreground, and make it the current job.  If"),
  N_("JOB_SPEC is not present, the shell's notion of the current job is"),
  N_("used."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* JOB_CONTROL */
#if defined (JOB_CONTROL)
char * const bg_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Place JOB_SPEC in the background, as if it had been started with"),
  N_("`&'.  If JOB_SPEC is not present, the shell's notion of the current"),
  N_("job is used."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* JOB_CONTROL */
char * const hash_doc[] = {
#if defined (HELP_BUILTIN)
  N_("For each NAME, the full pathname of the command is determined and"),
  N_("remembered.  If the -p option is supplied, PATHNAME is used as the"),
  N_("full pathname of NAME, and no path search is performed.  The -r"),
  N_("option causes the shell to forget all remembered locations.  The -d"),
  N_("option causes the shell to forget the remembered location of each NAME."),
  N_("If the -t option is supplied the full pathname to which each NAME"),
  N_("corresponds is printed.  If multiple NAME arguments are supplied with"),
  N_("-t, the NAME is printed before the hashed full pathname.  The -l option"),
  N_("causes output to be displayed in a format that may be reused as input."),
  N_("If no arguments are given, information about remembered commands is displayed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (HELP_BUILTIN)
char * const help_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Display helpful information about builtin commands.  If PATTERN is"),
  N_("specified, gives detailed help on all commands matching PATTERN,"),
  N_("otherwise a list of the builtins is printed.  The -s option"),
  N_("restricts the output for each builtin command matching PATTERN to"),
  N_("a short usage synopsis."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* HELP_BUILTIN */
#if defined (HISTORY)
char * const history_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Display the history list with line numbers.  Lines listed with"),
  N_("with a `*' have been modified.  Argument of N says to list only"),
  N_("the last N lines.  The `-c' option causes the history list to be"),
  N_("cleared by deleting all of the entries.  The `-d' option deletes"),
  N_("the history entry at offset OFFSET.  The `-w' option writes out the"),
  N_("current history to the history file;  `-r' means to read the file and"),
  N_("append the contents to the history list instead.  `-a' means"),
  N_("to append history lines from this session to the history file."),
  N_("Argument `-n' means to read all history lines not already read"),
  N_("from the history file and append them to the history list."),
  N_(""),
  N_("If FILENAME is given, then that is used as the history file else"),
  N_("if $HISTFILE has a value, that is used, else ~/.bash_history."),
  N_("If the -s option is supplied, the non-option ARGs are appended to"),
  N_("the history list as a single entry.  The -p option means to perform"),
  N_("history expansion on each ARG and display the result, without storing"),
  N_("anything in the history list."),
  N_(""),
  N_("If the $HISTTIMEFORMAT variable is set and not null, its value is used"),
  N_("as a format string for strftime(3) to print the time stamp associated"),
  N_("with each displayed history entry.  No time stamps are printed otherwise."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* HISTORY */
#if defined (JOB_CONTROL)
char * const jobs_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Lists the active jobs.  The -l option lists process id's in addition"),
  N_("to the normal information; the -p option lists process id's only."),
  N_("If -n is given, only processes that have changed status since the last"),
  N_("notification are printed.  JOBSPEC restricts output to that job.  The"),
  N_("-r and -s options restrict output to running and stopped jobs only,"),
  N_("respectively.  Without options, the status of all active jobs is"),
  N_("printed.  If -x is given, COMMAND is run after all job specifications"),
  N_("that appear in ARGS have been replaced with the process ID of that job's"),
  N_("process group leader."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* JOB_CONTROL */
#if defined (JOB_CONTROL)
char * const disown_doc[] = {
#if defined (HELP_BUILTIN)
  N_("By default, removes each JOBSPEC argument from the table of active jobs."),
  N_("If the -h option is given, the job is not removed from the table, but is"),
  N_("marked so that SIGHUP is not sent to the job if the shell receives a"),
  N_("SIGHUP.  The -a option, when JOBSPEC is not supplied, means to remove all"),
  N_("jobs from the job table; the -r option means to remove only running jobs."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* JOB_CONTROL */
char * const kill_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Send the processes named by PID (or JOB) the signal SIGSPEC.  If"),
  N_("SIGSPEC is not present, then SIGTERM is assumed.  An argument of `-l'"),
  N_("lists the signal names; if arguments follow `-l' they are assumed to"),
  N_("be signal numbers for which names should be listed.  Kill is a shell"),
  N_("builtin for two reasons: it allows job IDs to be used instead of"),
  N_("process IDs, and, if you have reached the limit on processes that"),
  N_("you can create, you don't have to start a process to kill another one."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const let_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Each ARG is an arithmetic expression to be evaluated.  Evaluation"),
  N_("is done in fixed-width integers with no check for overflow, though"),
  N_("division by 0 is trapped and flagged as an error.  The following"),
  N_("list of operators is grouped into levels of equal-precedence operators."),
  N_("The levels are listed in order of decreasing precedence."),
  N_(""),
  N_("	id++, id--	variable post-increment, post-decrement"),
  N_("	++id, --id	variable pre-increment, pre-decrement"),
  N_("	-, +		unary minus, plus"),
  N_("	!, ~		logical and bitwise negation"),
  N_("	**		exponentiation"),
  N_("	*, /, %		multiplication, division, remainder"),
  N_("	+, -		addition, subtraction"),
  N_("	<<, >>		left and right bitwise shifts"),
  N_("	<=, >=, <, >	comparison"),
  N_("	==, !=		equality, inequality"),
  N_("	&		bitwise AND"),
  N_("	^		bitwise XOR"),
  N_("	|		bitwise OR"),
  N_("	&&		logical AND"),
  N_("	||		logical OR"),
  N_("	expr ? expr : expr"),
  N_("			conditional operator"),
  N_("	=, *=, /=, %=,"),
  N_("	+=, -=, <<=, >>=,"),
  N_("	&=, ^=, |=	assignment"),
  N_(""),
  N_("Shell variables are allowed as operands.  The name of the variable"),
  N_("is replaced by its value (coerced to a fixed-width integer) within"),
  N_("an expression.  The variable need not have its integer attribute"),
  N_("turned on to be used in an expression."),
  N_(""),
  N_("Operators are evaluated in order of precedence.  Sub-expressions in"),
  N_("parentheses are evaluated first and may override the precedence"),
  N_("rules above."),
  N_(""),
  N_("If the last ARG evaluates to 0, let returns 1; 0 is returned"),
  N_("otherwise."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const read_doc[] = {
#if defined (HELP_BUILTIN)
  N_("One line is read from the standard input, or from file descriptor FD if the"),
  N_("-u option is supplied, and the first word is assigned to the first NAME,"),
  N_("the second word to the second NAME, and so on, with leftover words assigned"),
  N_("to the last NAME.  Only the characters found in $IFS are recognized as word"),
  N_("delimiters.  If no NAMEs are supplied, the line read is stored in the REPLY"),
  N_("variable.  If the -r option is given, this signifies `raw' input, and"),
  N_("backslash escaping is disabled.  The -d option causes read to continue"),
  N_("until the first character of DELIM is read, rather than newline.  If the -p"),
  N_("option is supplied, the string PROMPT is output without a trailing newline"),
  N_("before attempting to read.  If -a is supplied, the words read are assigned"),
  N_("to sequential indices of ARRAY, starting at zero.  If -e is supplied and"),
  N_("the shell is interactive, readline is used to obtain the line.  If -n is"),
  N_("supplied with a non-zero NCHARS argument, read returns after NCHARS"),
  N_("characters have been read.  The -s option causes input coming from a"),
  N_("terminal to not be echoed."),
  N_(""),
  N_("The -t option causes read to time out and return failure if a complete line"),
  N_("of input is not read within TIMEOUT seconds.  If the TMOUT variable is set,"),
  N_("its value is the default timeout.  The return code is zero, unless end-of-file"),
  N_("is encountered, read times out, or an invalid file descriptor is supplied as"),
  N_("the argument to -u."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const return_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Causes a function to exit with the return value specified by N.  If N"),
  N_("is omitted, the return status is that of the last command."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const set_doc[] = {
#if defined (HELP_BUILTIN)
  N_("    -a  Mark variables which are modified or created for export."),
  N_("    -b  Notify of job termination immediately."),
  N_("    -e  Exit immediately if a command exits with a non-zero status."),
  N_("    -f  Disable file name generation (globbing)."),
  N_("    -h  Remember the location of commands as they are looked up."),
  N_("    -k  All assignment arguments are placed in the environment for a"),
  N_("        command, not just those that precede the command name."),
  N_("    -m  Job control is enabled."),
  N_("    -n  Read commands but do not execute them."),
  N_("    -o option-name"),
  N_("        Set the variable corresponding to option-name:"),
  N_("            allexport    same as -a"),
  N_("            braceexpand  same as -B"),
#if defined (READLINE)
  N_("            emacs        use an emacs-style line editing interface"),
#endif /* READLINE */
  N_("            errexit      same as -e"),
  N_("            errtrace     same as -E"),
  N_("            functrace    same as -T"),
  N_("            hashall      same as -h"),
#if defined (BANG_HISTORY)
  N_("            histexpand   same as -H"),
#endif /* BANG_HISTORY */
#if defined (HISTORY)
  N_("            history      enable command history"),
#endif
  N_("            ignoreeof    the shell will not exit upon reading EOF"),
  N_("            interactive-comments"),
  N_("                         allow comments to appear in interactive commands"),
  N_("            keyword      same as -k"),
  N_("            monitor      same as -m"),
  N_("            noclobber    same as -C"),
  N_("            noexec       same as -n"),
  N_("            noglob       same as -f"),
  N_("            nolog        currently accepted but ignored"),
  N_("            notify       same as -b"),
  N_("            nounset      same as -u"),
  N_("            onecmd       same as -t"),
  N_("            physical     same as -P"),
  N_("            pipefail     the return value of a pipeline is the status of"),
  N_("                         the last command to exit with a non-zero status,"),
  N_("                         or zero if no command exited with a non-zero status"),
  N_("            posix        change the behavior of bash where the default"),
  N_("                         operation differs from the 1003.2 standard to"),
  N_("                         match the standard"),
  N_("            privileged   same as -p"),
  N_("            verbose      same as -v"),
#if defined (READLINE)
  N_("            vi           use a vi-style line editing interface"),
#endif /* READLINE */
  N_("            xtrace       same as -x"),
  N_("    -p  Turned on whenever the real and effective user ids do not match."),
  N_("        Disables processing of the $ENV file and importing of shell"),
  N_("        functions.  Turning this option off causes the effective uid and"),
  N_("        gid to be set to the real uid and gid."),
  N_("    -t  Exit after reading and executing one command."),
  N_("    -u  Treat unset variables as an error when substituting."),
  N_("    -v  Print shell input lines as they are read."),
  N_("    -x  Print commands and their arguments as they are executed."),
#if defined (BRACE_EXPANSION)
  N_("    -B  the shell will perform brace expansion"),
#endif /* BRACE_EXPANSION */
  N_("    -C  If set, disallow existing regular files to be overwritten"),
  N_("        by redirection of output."),
  N_("    -E  If set, the ERR trap is inherited by shell functions."),
#if defined (BANG_HISTORY)
  N_("    -H  Enable ! style history substitution.  This flag is on"),
  N_("        by default."),
#endif /* BANG_HISTORY */
  N_("    -P  If set, do not follow symbolic links when executing commands"),
  N_("        such as cd which change the current directory."),
  N_("    -T  If set, the DEBUG trap is inherited by shell functions."),
  N_(""),
  N_("Using + rather than - causes these flags to be turned off.  The"),
  N_("flags can also be used upon invocation of the shell.  The current"),
  N_("set of flags may be found in $-.  The remaining n ARGs are positional"),
  N_("parameters and are assigned, in order, to $1, $2, .. $n.  If no"),
  N_("ARGs are given, all shell variables are printed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const unset_doc[] = {
#if defined (HELP_BUILTIN)
  N_("For each NAME, remove the corresponding variable or function.  Given"),
  N_("the `-v', unset will only act on variables.  Given the `-f' flag,"),
  N_("unset will only act on functions.  With neither flag, unset first"),
  N_("tries to unset a variable, and if that fails, then tries to unset a"),
  N_("function.  Some variables cannot be unset; also see readonly."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const export_doc[] = {
#if defined (HELP_BUILTIN)
  N_("NAMEs are marked for automatic export to the environment of"),
  N_("subsequently executed commands.  If the -f option is given,"),
  N_("the NAMEs refer to functions.  If no NAMEs are given, or if `-p'"),
  N_("is given, a list of all names that are exported in this shell is"),
  N_("printed.  An argument of `-n' says to remove the export property"),
  N_("from subsequent NAMEs.  An argument of `--' disables further option"),
  N_("processing."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const readonly_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The given NAMEs are marked readonly and the values of these NAMEs may"),
  N_("not be changed by subsequent assignment.  If the -f option is given,"),
  N_("then functions corresponding to the NAMEs are so marked.  If no"),
  N_("arguments are given, or if `-p' is given, a list of all readonly names"),
  N_("is printed.  The `-a' option means to treat each NAME as"),
  N_("an array variable.  An argument of `--' disables further option"),
  N_("processing."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const shift_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The positional parameters from $N+1 ... are renamed to $1 ...  If N is"),
  N_("not given, it is assumed to be 1."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const source_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Read and execute commands from FILENAME and return.  The pathnames"),
  N_("in $PATH are used to find the directory containing FILENAME.  If any"),
  N_("ARGUMENTS are supplied, they become the positional parameters when"),
  N_("FILENAME is executed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const dot_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Read and execute commands from FILENAME and return.  The pathnames"),
  N_("in $PATH are used to find the directory containing FILENAME.  If any"),
  N_("ARGUMENTS are supplied, they become the positional parameters when"),
  N_("FILENAME is executed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (JOB_CONTROL)
char * const suspend_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Suspend the execution of this shell until it receives a SIGCONT"),
  N_("signal.  The `-f' if specified says not to complain about this"),
  N_("being a login shell if it is; just suspend anyway."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* JOB_CONTROL */
char * const test_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Exits with a status of 0 (true) or 1 (false) depending on"),
  N_("the evaluation of EXPR.  Expressions may be unary or binary.  Unary"),
  N_("expressions are often used to examine the status of a file.  There"),
  N_("are string operators as well, and numeric comparison operators."),
  N_(""),
  N_("File operators:"),
  N_(""),
  N_("    -a FILE        True if file exists."),
  N_("    -b FILE        True if file is block special."),
  N_("    -c FILE        True if file is character special."),
  N_("    -d FILE        True if file is a directory."),
  N_("    -e FILE        True if file exists."),
  N_("    -f FILE        True if file exists and is a regular file."),
  N_("    -g FILE        True if file is set-group-id."),
  N_("    -h FILE        True if file is a symbolic link."),
  N_("    -L FILE        True if file is a symbolic link."),
  N_("    -k FILE        True if file has its `sticky' bit set."),
  N_("    -p FILE        True if file is a named pipe."),
  N_("    -r FILE        True if file is readable by you."),
  N_("    -s FILE        True if file exists and is not empty."),
  N_("    -S FILE        True if file is a socket."),
  N_("    -t FD          True if FD is opened on a terminal."),
  N_("    -u FILE        True if the file is set-user-id."),
  N_("    -w FILE        True if the file is writable by you."),
  N_("    -x FILE        True if the file is executable by you."),
  N_("    -O FILE        True if the file is effectively owned by you."),
  N_("    -G FILE        True if the file is effectively owned by your group."),
  N_("    -N FILE        True if the file has been modified since it was last read."),
  N_(""),
  N_("  FILE1 -nt FILE2  True if file1 is newer than file2 (according to"),
  N_("                   modification date)."),
  N_(""),
  N_("  FILE1 -ot FILE2  True if file1 is older than file2."),
  N_(""),
  N_("  FILE1 -ef FILE2  True if file1 is a hard link to file2."),
  N_(""),
  N_("String operators:"),
  N_(""),
  N_("    -z STRING      True if string is empty."),
  N_(""),
  N_("    -n STRING"),
  N_("    STRING         True if string is not empty."),
  N_(""),
  N_("    STRING1 = STRING2"),
  N_("                   True if the strings are equal."),
  N_("    STRING1 != STRING2"),
  N_("                   True if the strings are not equal."),
  N_("    STRING1 < STRING2"),
  N_("                   True if STRING1 sorts before STRING2 lexicographically."),
  N_("    STRING1 > STRING2"),
  N_("                   True if STRING1 sorts after STRING2 lexicographically."),
  N_(""),
  N_("Other operators:"),
  N_(""),
  N_("    -o OPTION      True if the shell option OPTION is enabled."),
  N_("    ! EXPR         True if expr is false."),
  N_("    EXPR1 -a EXPR2 True if both expr1 AND expr2 are true."),
  N_("    EXPR1 -o EXPR2 True if either expr1 OR expr2 is true."),
  N_(""),
  N_("    arg1 OP arg2   Arithmetic tests.  OP is one of -eq, -ne,"),
  N_("                   -lt, -le, -gt, or -ge."),
  N_(""),
  N_("Arithmetic binary operators return true if ARG1 is equal, not-equal,"),
  N_("less-than, less-than-or-equal, greater-than, or greater-than-or-equal"),
  N_("than ARG2."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const test_bracket_doc[] = {
#if defined (HELP_BUILTIN)
  N_("This is a synonym for the \"test\" builtin, but the last"),
  N_("argument must be a literal `]', to match the opening `['."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const times_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Print the accumulated user and system times for processes run from"),
  N_("the shell."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const trap_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The command ARG is to be read and executed when the shell receives"),
  N_("signal(s) SIGNAL_SPEC.  If ARG is absent (and a single SIGNAL_SPEC"),
  N_("is supplied) or `-', each specified signal is reset to its original"),
  N_("value.  If ARG is the null string each SIGNAL_SPEC is ignored by the"),
  N_("shell and by the commands it invokes.  If a SIGNAL_SPEC is EXIT (0)"),
  N_("the command ARG is executed on exit from the shell.  If a SIGNAL_SPEC"),
  N_("is DEBUG, ARG is executed after every simple command.  If the`-p' option"),
  N_("is supplied then the trap commands associated with each SIGNAL_SPEC are"),
  N_("displayed.  If no arguments are supplied or if only `-p' is given, trap"),
  N_("prints the list of commands associated with each signal.  Each SIGNAL_SPEC"),
  N_("is either a signal name in <signal.h> or a signal number.  Signal names"),
  N_("are case insensitive and the SIG prefix is optional.  `trap -l' prints"),
  N_("a list of signal names and their corresponding numbers.  Note that a"),
  N_("signal can be sent to the shell with \"kill -signal $$\"."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const type_doc[] = {
#if defined (HELP_BUILTIN)
  N_("For each NAME, indicate how it would be interpreted if used as a"),
  N_("command name."),
  N_(""),
  N_("If the -t option is used, `type' outputs a single word which is one of"),
  N_("`alias', `keyword', `function', `builtin', `file' or `', if NAME is an"),
  N_("alias, shell reserved word, shell function, shell builtin, disk file,"),
  N_("or unfound, respectively."),
  N_(""),
  N_("If the -p flag is used, `type' either returns the name of the disk"),
  N_("file that would be executed, or nothing if `type -t NAME' would not"),
  N_("return `file'."),
  N_(""),
  N_("If the -a flag is used, `type' displays all of the places that contain"),
  N_("an executable named `file'.  This includes aliases, builtins, and"),
  N_("functions, if and only if the -p flag is not also used."),
  N_(""),
  N_("The -f flag suppresses shell function lookup."),
  N_(""),
  N_("The -P flag forces a PATH search for each NAME, even if it is an alias,"),
  N_("builtin, or function, and returns the name of the disk file that would"),
  N_("be executed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if !defined (_MINIX)
char * const ulimit_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Ulimit provides control over the resources available to processes"),
  N_("started by the shell, on systems that allow such control.  If an"),
  N_("option is given, it is interpreted as follows:"),
  N_(""),
  N_("    -S	use the `soft' resource limit"),
  N_("    -H	use the `hard' resource limit"),
  N_("    -a	all current limits are reported"),
  N_("    -c	the maximum size of core files created"),
  N_("    -d	the maximum size of a process's data segment"),
  N_("    -f	the maximum size of files created by the shell"),
  N_("    -l	the maximum size a process may lock into memory"),
  N_("    -m	the maximum resident set size"),
  N_("    -n	the maximum number of open file descriptors"),
  N_("    -p	the pipe buffer size"),
  N_("    -s	the maximum stack size"),
  N_("    -t	the maximum amount of cpu time in seconds"),
  N_("    -u	the maximum number of user processes"),
  N_("    -v	the size of virtual memory"),
  N_(""),
  N_("If LIMIT is given, it is the new value of the specified resource;"),
  N_("the special LIMIT values `soft', `hard', and `unlimited' stand for"),
  N_("the current soft limit, the current hard limit, and no limit, respectively."),
  N_("Otherwise, the current value of the specified resource is printed."),
  N_("If no option is given, then -f is assumed.  Values are in 1024-byte"),
  N_("increments, except for -t, which is in seconds, -p, which is in"),
  N_("increments of 512 bytes, and -u, which is an unscaled number of"),
  N_("processes."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* !_MINIX */
char * const umask_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The user file-creation mask is set to MODE.  If MODE is omitted, or if"),
  N_("`-S' is supplied, the current value of the mask is printed.  The `-S'"),
  N_("option makes the output symbolic; otherwise an octal number is output."),
  N_("If `-p' is supplied, and MODE is omitted, the output is in a form"),
  N_("that may be used as input.  If MODE begins with a digit, it is"),
  N_("interpreted as an octal number, otherwise it is a symbolic mode string"),
  N_("like that accepted by chmod(1)."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (JOB_CONTROL)
char * const wait_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Wait for the specified process and report its termination status.  If"),
  N_("N is not given, all currently active child processes are waited for,"),
  N_("and the return code is zero.  N may be a process ID or a job"),
  N_("specification; if a job spec is given, all processes in the job's"),
  N_("pipeline are waited for."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* JOB_CONTROL */
#if !defined (JOB_CONTROL)
char * const wait_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Wait for the specified process and report its termination status.  If"),
  N_("N is not given, all currently active child processes are waited for,"),
  N_("and the return code is zero.  N is a process ID; if it is not given,"),
  N_("all child processes of the shell are waited for."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* !JOB_CONTROL */
char * const for_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The `for' loop executes a sequence of commands for each member in a"),
  N_("list of items.  If `in WORDS ...;' is not present, then `in \"$@\"' is"),
  N_("assumed.  For each element in WORDS, NAME is set to that element, and"),
  N_("the COMMANDS are executed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const arith_for_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Equivalent to"),
  N_("	(( EXP1 ))"),
  N_("	while (( EXP2 )); do"),
  N_("		COMMANDS"),
  N_("		(( EXP3 ))"),
  N_("	done"),
  N_("EXP1, EXP2, and EXP3 are arithmetic expressions.  If any expression is"),
  N_("omitted, it behaves as if it evaluates to 1."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const select_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The WORDS are expanded, generating a list of words.  The"),
  N_("set of expanded words is printed on the standard error, each"),
  N_("preceded by a number.  If `in WORDS' is not present, `in \"$@\"'"),
  N_("is assumed.  The PS3 prompt is then displayed and a line read"),
  N_("from the standard input.  If the line consists of the number"),
  N_("corresponding to one of the displayed words, then NAME is set"),
  N_("to that word.  If the line is empty, WORDS and the prompt are"),
  N_("redisplayed.  If EOF is read, the command completes.  Any other"),
  N_("value read causes NAME to be set to null.  The line read is saved"),
  N_("in the variable REPLY.  COMMANDS are executed after each selection"),
  N_("until a break command is executed."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const time_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Execute PIPELINE and print a summary of the real time, user CPU time,"),
  N_("and system CPU time spent executing PIPELINE when it terminates."),
  N_("The return status is the return status of PIPELINE.  The `-p' option"),
  N_("prints the timing summary in a slightly different format.  This uses"),
  N_("the value of the TIMEFORMAT variable as the output format."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const case_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Selectively execute COMMANDS based upon WORD matching PATTERN.  The"),
  N_("`|' is used to separate multiple patterns."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const if_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The if COMMANDS are executed.  If the exit status is zero, then the then"),
  N_("COMMANDS are executed.  Otherwise, each of the elif COMMANDS are executed"),
  N_("in turn, and if the exit status is zero, the corresponding then COMMANDS"),
  N_("are executed and the if command completes.  Otherwise, the else COMMANDS"),
  N_("are executed, if present.  The exit status is the exit status of the last"),
  N_("command executed, or zero if no condition tested true."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const while_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Expand and execute COMMANDS as long as the final command in the"),
  N_("`while' COMMANDS has an exit status of zero."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const until_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Expand and execute COMMANDS as long as the final command in the"),
  N_("`until' COMMANDS has an exit status which is not zero."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const function_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Create a simple command invoked by NAME which runs COMMANDS."),
  N_("Arguments on the command line along with NAME are passed to the"),
  N_("function as $0 .. $n."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const grouping_braces_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Run a set of commands in a group.  This is one way to redirect an"),
  N_("entire set of commands."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const fg_percent_doc[] = {
#if defined (HELP_BUILTIN)
  N_("This is similar to the `fg' command.  Resume a stopped or background"),
  N_("job.  If you specifiy DIGITS, then that job is used.  If you specify"),
  N_("WORD, then the job whose name begins with WORD is used.  Following the"),
  N_("job specification with a `&' places the job in the background."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const arith_doc[] = {
#if defined (HELP_BUILTIN)
  N_("The EXPRESSION is evaluated according to the rules for arithmetic"),
  N_("evaluation.  Equivalent to \"let EXPRESSION\"."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const conditional_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Returns a status of 0 or 1 depending on the evaluation of the conditional"),
  N_("expression EXPRESSION.  Expressions are composed of the same primaries used"),
  N_("by the `test' builtin, and may be combined using the following operators"),
  N_(""),
  N_("	( EXPRESSION )	Returns the value of EXPRESSION"),
  N_("	! EXPRESSION	True if EXPRESSION is false; else false"),
  N_("	EXPR1 && EXPR2	True if both EXPR1 and EXPR2 are true; else false"),
  N_("	EXPR1 || EXPR2	True if either EXPR1 or EXPR2 is true; else false"),
  N_(""),
  N_("When the `==' and `!=' operators are used, the string to the right of the"),
  N_("operator is used as a pattern and pattern matching is performed.  The"),
  N_("&& and || operators do not evaluate EXPR2 if EXPR1 is sufficient to"),
  N_("determine the expression's value."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const variable_help_doc[] = {
#if defined (HELP_BUILTIN)
  N_("BASH_VERSION    Version information for this Bash."),
  N_("CDPATH          A colon separated list of directories to search"),
  N_("		when the argument to `cd' is not found in the current"),
  N_("		directory."),
  N_("GLOBIGNORE	A colon-separated list of patterns describing filenames to"),
  N_("		be ignored by pathname expansion."),
#if defined (HISTORY)
  N_("HISTFILE        The name of the file where your command history is stored."),
  N_("HISTFILESIZE    The maximum number of lines this file can contain."),
  N_("HISTSIZE        The maximum number of history lines that a running"),
  N_("		shell can access."),
#endif /* HISTORY */
  N_("HOME            The complete pathname to your login directory."),
  N_("HOSTNAME	The name of the current host."),
  N_("HOSTTYPE        The type of CPU this version of Bash is running under."),
  N_("IGNOREEOF       Controls the action of the shell on receipt of an EOF"),
  N_("		character as the sole input.  If set, then the value"),
  N_("		of it is the number of EOF characters that can be seen"),
  N_("		in a row on an empty line before the shell will exit"),
  N_("		(default 10).  When unset, EOF signifies the end of input."),
  N_("MACHTYPE	A string describing the current system Bash is running on."),
  N_("MAILCHECK	How often, in seconds, Bash checks for new mail."),
  N_("MAILPATH	A colon-separated list of filenames which Bash checks"),
  N_("		for new mail."),
  N_("OSTYPE		The version of Unix this version of Bash is running on."),
  N_("PATH            A colon-separated list of directories to search when"),
  N_("		looking for commands."),
  N_("PROMPT_COMMAND  A command to be executed before the printing of each"),
  N_("		primary prompt."),
  N_("PS1             The primary prompt string."),
  N_("PS2             The secondary prompt string."),
  N_("PWD		The full pathname of the current directory."),
  N_("SHELLOPTS	A colon-separated list of enabled shell options."),
  N_("TERM            The name of the current terminal type."),
  N_("TIMEFORMAT	The output format for timing statistics displayed by the"),
  N_("		`time' reserved word."),
  N_("auto_resume     Non-null means a command word appearing on a line by"),
  N_("		itself is first looked for in the list of currently"),
  N_("		stopped jobs.  If found there, that job is foregrounded."),
  N_("		A value of `exact' means that the command word must"),
  N_("		exactly match a command in the list of stopped jobs.  A"),
  N_("		value of `substring' means that the command word must"),
  N_("		match a substring of the job.  Any other value means that"),
  N_("		the command must be a prefix of a stopped job."),
#if defined (HISTORY)
#  if defined (BANG_HISTORY)
  N_("histchars       Characters controlling history expansion and quick"),
  N_("		substitution.  The first character is the history"),
  N_("		substitution character, usually `!'.  The second is"),
  N_("		the `quick substitution' character, usually `^'.  The"),
  N_("		third is the `history comment' character, usually `#'."),
#  endif /* BANG_HISTORY */
  N_("HISTIGNORE	A colon-separated list of patterns used to decide which"),
  N_("		commands should be saved on the history list."),
#endif /* HISTORY */
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (PUSHD_AND_POPD)
char * const pushd_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Adds a directory to the top of the directory stack, or rotates"),
  N_("the stack, making the new top of the stack the current working"),
  N_("directory.  With no arguments, exchanges the top two directories."),
  N_(""),
  N_("+N	Rotates the stack so that the Nth directory (counting"),
  N_("	from the left of the list shown by `dirs', starting with"),
  N_("	zero) is at the top."),
  N_(""),
  N_("-N	Rotates the stack so that the Nth directory (counting"),
  N_("	from the right of the list shown by `dirs', starting with"),
  N_("	zero) is at the top."),
  N_(""),
  N_("-n	suppress the normal change of directory when adding directories"),
  N_("	to the stack, so only the stack is manipulated."),
  N_(""),
  N_("dir	adds DIR to the directory stack at the top, making it the"),
  N_("	new current working directory."),
  N_(""),
  N_("You can see the directory stack with the `dirs' command."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* PUSHD_AND_POPD */
#if defined (PUSHD_AND_POPD)
char * const popd_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Removes entries from the directory stack.  With no arguments,"),
  N_("removes the top directory from the stack, and cd's to the new"),
  N_("top directory."),
  N_(""),
  N_("+N	removes the Nth entry counting from the left of the list"),
  N_("	shown by `dirs', starting with zero.  For example: `popd +0'"),
  N_("	removes the first directory, `popd +1' the second."),
  N_(""),
  N_("-N	removes the Nth entry counting from the right of the list"),
  N_("	shown by `dirs', starting with zero.  For example: `popd -0'"),
  N_("	removes the last directory, `popd -1' the next to last."),
  N_(""),
  N_("-n	suppress the normal change of directory when removing directories"),
  N_("	from the stack, so only the stack is manipulated."),
  N_(""),
  N_("You can see the directory stack with the `dirs' command."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* PUSHD_AND_POPD */
#if defined (PUSHD_AND_POPD)
char * const dirs_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Display the list of currently remembered directories.  Directories"),
  N_("find their way onto the list with the `pushd' command; you can get"),
  N_("back up through the list with the `popd' command."),
  N_(""),
  N_("The -l flag specifies that `dirs' should not print shorthand versions"),
  N_("of directories which are relative to your home directory.  This means"),
  N_("that `~/bin' might be displayed as `/homes/bfox/bin'.  The -v flag"),
  N_("causes `dirs' to print the directory stack with one entry per line,"),
  N_("prepending the directory name with its position in the stack.  The -p"),
  N_("flag does the same thing, but the stack position is not prepended."),
  N_("The -c flag clears the directory stack by deleting all of the elements."),
  N_(""),
  N_("+N	displays the Nth entry counting from the left of the list shown by"),
  N_("	dirs when invoked without options, starting with zero."),
  N_(""),
  N_("-N	displays the Nth entry counting from the right of the list shown by"),
  N_("	dirs when invoked without options, starting with zero."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* PUSHD_AND_POPD */
char * const shopt_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Toggle the values of variables controlling optional behavior."),
  N_("The -s flag means to enable (set) each OPTNAME; the -u flag"),
  N_("unsets each OPTNAME.  The -q flag suppresses output; the exit"),
  N_("status indicates whether each OPTNAME is set or unset.  The -o"),
  N_("option restricts the OPTNAMEs to those defined for use with"),
  N_("`set -o'.  With no options, or with the -p option, a list of all"),
  N_("settable options is displayed, with an indication of whether or"),
  N_("not each is set."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
char * const printf_doc[] = {
#if defined (HELP_BUILTIN)
  N_("printf formats and prints ARGUMENTS under control of the FORMAT. FORMAT"),
  N_("is a character string which contains three types of objects: plain"),
  N_("characters, which are simply copied to standard output, character escape"),
  N_("sequences which are converted and copied to the standard output, and"),
  N_("format specifications, each of which causes printing of the next successive"),
  N_("argument.  In addition to the standard printf(1) formats, %b means to"),
  N_("expand backslash escape sequences in the corresponding argument, and %q"),
  N_("means to quote the argument in a way that can be reused as shell input."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#if defined (PROGRAMMABLE_COMPLETION)
char * const complete_doc[] = {
#if defined (HELP_BUILTIN)
  N_("For each NAME, specify how arguments are to be completed."),
  N_("If the -p option is supplied, or if no options are supplied, existing"),
  N_("completion specifications are printed in a way that allows them to be"),
  N_("reused as input.  The -r option removes a completion specification for"),
  N_("each NAME, or, if no NAMEs are supplied, all completion specifications."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* PROGRAMMABLE_COMPLETION */
#if defined (PROGRAMMABLE_COMPLETION)
char * const compgen_doc[] = {
#if defined (HELP_BUILTIN)
  N_("Display the possible completions depending on the options.  Intended"),
  N_("to be used from within a shell function generating possible completions."),
  N_("If the optional WORD argument is supplied, matches against WORD are"),
  N_("generated."),
#endif /* HELP_BUILTIN */
  (char *)NULL
};
#endif /* PROGRAMMABLE_COMPLETION */
