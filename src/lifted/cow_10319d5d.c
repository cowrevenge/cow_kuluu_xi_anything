/* f_0x10319d5d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10319d5d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10319d6du: in_eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_10319d6d;
    case 0x10319d72u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_10319d72;
    case 0x10319d79u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_10319d79;
    case 0x10319d8au: eax = g->eax; edx = g->edx; edi = g->edi; goto E_10319d8a;
    case 0x10319d97u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_10319d97;
    case 0x10319d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10319d9e;
    case 0x10319db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319db2;
    case 0x10319db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319db8;
    case 0x10319dbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319dbf;
    case 0x10319dccu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319dcc;
    case 0x10319dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319dd0;
    case 0x10319dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319dd5;
    case 0x10319ddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319ddc;
    case 0x10319de9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319de9;
    case 0x10319dedu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319ded;
    case 0x10319df1u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_10319df1;
    case 0x10319dfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10319dfe;
    default: break;
    }
#endif

    COW_AT(10319d5d)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_edi);
    if (arg2 == 0u) goto L_10319df1;
    COW_AT(10319d6d)
    if (rd8(arg2) == 0u) goto L_10319df1;
    COW_AT(10319d72)
    if (arg1 != 0u)
    {
        ecx = self;
        edx = in_edx;
        edi = arg1;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_edi;
        goto L_10319d9e;
    }
    COW_AT(10319d79)
    wr32(sp0 - 0x10u, 0x104u);
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, self, in_edx, 1, 3, 0x104u, in_edi, in_ebx);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        edi = t1;
        goto L_10319d97;
    }
    eax = t1;
    edx = t2;
    COW_AT(10319d8a)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x10319c89u), 0x104u, edx, 0);
    t4 = g->edx;
    wr32(t3, 0xcu);
    edx = t4;
L_10319de9: ;
    COW_AT(10319de9)
    eax = 0u;
L_10319dfe: ;
    COW_AT(10319dfe)
    g->ebx = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10319d97: ;
    COW_AT(10319d97)
    wr32(sp0 + 0xcu, 0x104u);
    ecx = 0x104u;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_10319d9e: ;
    COW_AT(10319d9e)
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, edi);
    t5 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t5);
    wr32(sp0 - 0x1cu, arg2);
    g->eax = sp0 + 8u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_stdcall(g, rd32(COW_IMG(0x103290d4u)), 4, arg2, t5, edi, sp0 + 8u);   /* kernel32.dll!GetFullPathNameA */
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 < rd32(sp0 + 0xcu))
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10319dcc;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10319db2)
    if (arg1 == 0u)
    {
    COW_AT(10319db8)
        wr32(sp0 - 0x10u, edi);
        g->ebx = arg2;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t9 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t10 = g->edx;
        eax = t9;
        ecx = rd32(sp0 - 0x10u);
        edx = t10;
    }
    COW_AT(10319dbf)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t11 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
    t12 = g->edx;
    wr32(t11, 0x22u);
    edx = t12;
    goto L_10319de9;
L_10319dcc: ;
    COW_AT(10319dcc)
    if (eax != 0u) goto L_10319ded;
    COW_AT(10319dd0)
    if (arg1 == eax)
    {
    COW_AT(10319dd5)
        wr32(sp0 - 0x10u, edi);
        g->ebx = arg2;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t13 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t14 = g->edx;
        eax = t13;
        ecx = rd32(sp0 - 0x10u);
        edx = t14;
    }
    COW_AT(10319ddc)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x10u, t15);
    cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, t16, t17, 1, 1, t15);
    t18 = g->edx;
    edx = t18;
    goto L_10319de9;
L_10319ded: ;
    COW_AT(10319ded)
    eax = edi;
    goto L_10319dfe;
L_10319df1: ;
    COW_AT(10319df1)
    t19 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x10u, t19);
    wr32(sp0 - 0x14u, arg1);
    g->ebx = arg2;
    g->eax = in_eax;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x10323cb9u), g->eax, self, in_edx, 1, 2, arg1, t19);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    goto L_10319dfe;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10319d5d(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10319d6du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d72u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d79u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d8au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ecx = 0x104u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d97u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ecx = 0x104u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319d9eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319db2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10319db8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10319dbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319dccu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10319dd0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10319dd5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10319ddcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319de9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319dedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10319df1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10319dfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10319d5d(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10319d5d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
