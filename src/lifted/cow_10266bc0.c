/* f_0x10266bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10266bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10266bccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10266bcc;
    case 0x10266bd8u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10266bd8;
    case 0x10266be7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10266be7;
    case 0x10266bf3u: self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10266bf3;
    case 0x10266c00u: self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10266c00;
    case 0x10266c0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c0b;
    case 0x10266c1du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c1d;
    case 0x10266c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c2f;
    case 0x10266c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c41;
    case 0x10266c5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c5a;
    case 0x10266c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c66;
    case 0x10266c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c78;
    case 0x10266c88u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266c88;
    case 0x10266ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266ca8;
    case 0x10266cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10266cb1;
    case 0x10266cc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10266cc0;
    default: break;
    }
#endif

    COW_AT(10266bc0)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (arg5 != 0u) goto L_10266bd8;
    COW_AT(10266bcc)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0x80004003u;
L_10266bd8: ;
    COW_AT(10266bd8)
    wr32(arg5, 0u);
    if (arg3 == 0u) goto L_10266bf3;
    COW_AT(10266be7)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0x8002802bu;
L_10266bf3: ;
    COW_AT(10266bf3)
    if (rd32(arg1) != 0u)
    {
        edx = in_edx;
        loc_4 = in_ebx;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_10266cb1;
    }
    COW_AT(10266c00)
    g->eax = arg3;
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x102659b0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10266c1d;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10266c0b)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t4 | 0x80070000u;
L_10266c1d: ;
    COW_AT(10266c1d)
    wr32(sp0 - 0x14u, COW_IMG(0x1034093cu));
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x10329138u));
    g->esp = sp0 - 0x10u;
    t6 = cow_stdcall(g, t5, 2, esi, COW_IMG(0x1034093cu));   /* kernel32.dll!GetProcAddress */
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edi = t5;
        goto L_10266c41;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10266c2f)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t9 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t9 | 0x80070000u;
L_10266c41: ;
    COW_AT(10266c41)
    wr32(sp0 - 0x14u, sp0 + 0x14u);
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, COW_IMG(0x1033ef08u));
    g->eax = eax;
    g->edx = arg4;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, eax, sp0 + 0x14u, 5, COW_IMG(0x1033ef08u), 1u, 0u, arg4, sp0 + 0x14u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 >= 0) goto L_10266c88;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10266c5a)
    wr32(sp0 - 0x14u, COW_IMG(0x10340930u));
    wr32(sp0 - 0x18u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, edi, ecx, 2, esi, COW_IMG(0x10340930u));
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        edx = t15;
        goto L_10266c78;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(10266c66)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t16 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return t16 | 0x80070000u;
L_10266c78: ;
    COW_AT(10266c78)
    wr32(sp0 - 0x14u, sp0 + 0x14u);
    wr32(sp0 - 0x18u, COW_IMG(0x1034094cu));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, eax, sp0 + 0x14u, 2, COW_IMG(0x1034094cu), sp0 + 0x14u);
    if ((int32_t)t17 < 0)
    {
        eax = t17;
        goto L_10266cc0;
    }
L_10266c88: ;
    COW_AT(10266c88)
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg5);
    g->eax = arg5;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, rd32(rd32(arg5) + 0x18u), arg2, 3, arg5, arg2, arg1);
    t19 = g->ecx;
    wr32(sp0 - 0x14u, arg5);
    g->edx = rd32(arg5);
    t20 = rd32(arg5);
    cow_thiscall(g, rd32(t20 + 8u), t19, 1, arg5);
    t21 = g->edx;
    if ((int32_t)t18 >= 0)
    {
        edx = t21;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_10266cb1;
    }
    esi = t18;
    COW_AT(10266ca8)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return esi;
L_10266cb1: ;
    COW_AT(10266cb1)
    wr32(arg5, rd32(arg1));
    wr32(sp0 - 0x14u, rd32(arg1));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(rd32(arg1)) + 4u), rd32(rd32(arg1)), 1, rd32(arg1));
    eax = 0u;
L_10266cc0: ;
    COW_AT(10266cc0)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10266bc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10266bccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10266bd8u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10266be7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10266bf3u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg3;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10266c00u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg3;
        g->ebx = arg1;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10266c0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10266c1du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10266c2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10266c41u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10266c5au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = arg5;
        wr32(sp0 - 0x14u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10266c66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10266c78u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10266c88u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = arg5;
        wr32(sp0 - 0x14u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10266ca8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10266cb1u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10266cc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10266bc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10266bc0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
