#ifndef SIGNALS_H
#define SIGNALS_H

void init_signals();
void init_signals_postconfig();
void emit_self_restart(const char *reason);
int get_signal_pending();

void sigchld_handler_async();

extern int sigchild_pipe_valid;
extern int sigchild_pipe[2];

#endif
