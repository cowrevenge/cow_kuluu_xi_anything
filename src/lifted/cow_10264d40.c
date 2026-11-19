/* f_0x10264d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10264d40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10264d4cu: eax = g->eax; ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264d4c;
    case 0x10264d58u: eax = g->eax; ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264d58;
    case 0x10264d60u: eax = g->eax; ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264d60;
    case 0x10264d6cu: eax = g->eax; ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264d6c;
    case 0x10264d77u: ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264d77;
    case 0x10264d7cu: ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264d7c;
    case 0x10264d7eu: ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264d7e;
    case 0x10264da1u: eax = g->eax; ebp = g->ebp; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264da1;
    case 0x10264db3u: eax = g->eax; ebp = g->ebp; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264db3;
    case 0x10264dbau: eax = g->eax; ebp = g->ebp; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264dba;
    case 0x10264dccu: eax = g->eax; edx = g->edx; ebp = g->ebp; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264dcc;
    case 0x10264dd6u: eax = g->eax; edx = g->edx; ebp = g->ebp; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264dd6;
    case 0x10264de8u: eax = g->eax; edx = g->edx; ebp = g->ebp; loc_14 = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10264de8;
    default: break;
    }
#endif

    COW_AT(10264d40)
    if (arg2 != 0u) goto L_10264d58;
    COW_AT(10264d4c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0x80004003u;
L_10264d58: ;
    COW_AT(10264d58)
    if (arg3 != 0u) goto L_10264d6c;
    COW_AT(10264d60)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0x80004003u;
L_10264d6c: ;
    COW_AT(10264d6c)
    if (arg1 == 0xcu)
    {
    COW_AT(10264d7c)
        ebp = 0u;
    }
    else
    {
    COW_AT(10264d77)
        ebp = arg1 + 4u;
    }
    COW_AT(10264d7e)
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, ebp);   /* kernel32.dll!EnterCriticalSection */
    wr32(arg3, 0u);
    wr32(arg3 + 4u, 0u);
    wr32(arg3 + 8u, 0u);
    wr32(arg3 + 0xcu, 0u);
    if (rd32(arg2 + 8u) == 1u)
    {
        loc_14 = ebp;
        goto L_10264db3;
    }
    eax = rd32(arg2 + 8u);
    loc_14 = ebp;
    COW_AT(10264da1)
    g->edx = arg3;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t1 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t1;
    return 0x8004020eu;
L_10264db3: ;
    COW_AT(10264db3)
    if (rd32(arg1 + 0x44u) == 0u) goto L_10264dcc;
    eax = rd32(arg1 + 0x44u);
    COW_AT(10264dba)
    g->edx = arg3;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t2 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t2;
    return 0x8004020fu;
L_10264dcc: ;
    COW_AT(10264dcc)
    if (rd32(arg1 + 0x30u) == rd32(arg1 + 0x20u))
    {
        edx = rd32(arg1 + 0x20u);
        goto L_10264de8;
    }
    eax = rd32(arg1 + 0x30u);
    edx = rd32(arg1 + 0x20u);
    COW_AT(10264dd6)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t3 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t3;
    return 0x80040210u;
L_10264de8: ;
    COW_AT(10264de8)
    t4 = rd32(arg2 + 4u);
    wr32(arg1 + 0x34u, t4);
    wr32(arg3 + 4u, t4);
    t5 = rd32(arg2);
    wr32(arg1 + 0x2cu, t5);
    wr32(arg3, t5);
    t6 = rd32(arg2 + 8u);
    wr32(arg1 + 0x38u, t6);
    wr32(arg3 + 8u, t6);
    t7 = rd32(arg2 + 0xcu);
    wr32(arg1 + 0x3cu, t7);
    wr32(arg3 + 0xcu, t7);
    wr32(arg1 + 0x40u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t8 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t8;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10264d40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10264d4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10264d58u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10264d60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10264d6cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264d77u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 0xcu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264d7cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 0xcu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264d7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg1 - 0xcu;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264da1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ebp = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264db3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ebp = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->edx = arg3;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264dbau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ebp = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264dccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10264dd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10264de8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        loc_14 = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ecx = 1u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10264d40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10264d40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
