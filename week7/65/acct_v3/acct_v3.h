#ifndef ACCT_V3_H_CPP_
#define ACCT_V3_H_CPP_

#include "/usr/include/linux/acct.h"
#include <string>

struct ACCT_V3
{
    char   ac_flag;            // Flags
    char   ac_version;         // Always set to ACCT_VERSION
    __u16  ac_tty;             // Control Terminal
    __u32  ac_exitcode;        // Exitcode
    __u32  ac_uid;             // Real User ID
    __u32  ac_gid;             // Real Group ID
    __u32  ac_pid;             // Process ID
    __u32  ac_ppid;            // Parent Process ID
    __u32  ac_btime;           // Process Creation Time
    float  ac_etime;           // Elapsed Time
    comp_t ac_utime;           // User Time
    comp_t ac_stime;           // System Time
    comp_t ac_mem;             // Average Memory Usage
    comp_t ac_io;              // Chars Transferred
    comp_t ac_rw;              // Blocks Read or Written
    comp_t ac_minflt;          // Minor Pagefaults
    comp_t ac_majflt;          // Major Pagefaults
    comp_t ac_swaps;           // Number of Swaps
    char   ac_comm[ACCT_COMM]; // Command Name

    void print() const;
};

#endif
