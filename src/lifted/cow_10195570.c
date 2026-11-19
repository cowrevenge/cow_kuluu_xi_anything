/* f_0x10195570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10195570(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 3344u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101955a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->edi = rd32(sp0 - 0xcf8u); goto E_101955a0;
    case 0x101955abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->edi = rd32(sp0 - 0xcf8u); goto E_101955ab;
    case 0x101955b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_101955b1;
    case 0x101955c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_101955c6;
    case 0x101955ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_101955ce;
    case 0x101955d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_101955d7;
    case 0x101955e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_101955e2;
    case 0x101955e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_101955e8;
    case 0x101955f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_101955f8;
    case 0x10195607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_10195607;
    case 0x1019560cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_1019560c;
    case 0x1019561au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_1019561a;
    case 0x10195623u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0xd00u); in_ebx = rd32(sp0 - 0xcfcu); in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->ebx = rd32(sp0 - 0xcfcu); g->edi = rd32(sp0 - 0xcf8u); g->esi = rd32(sp0 - 0xd00u); goto E_10195623;
    case 0x10195633u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcf8u); in_ebp = rd32(sp0 - 0xcf4u); g->ebp = rd32(sp0 - 0xcf4u); g->edi = rd32(sp0 - 0xcf8u); goto E_10195633;
    default: break;
    }
#endif

    COW_AT(10195570)
    wr32(sp0 - 0xcf4u, in_ebp);
    wr32(sp0 - 0xcf8u, in_edi);
    wr32(sp0 - 0xcfcu, 0u);
    wr32(sp0 - 0xd00u, 0u);
    wr32(sp0 - 0xd04u, 0x33cu);
    wr32(sp0 - 0xd08u, sp0 - 0xcf0u);
    wr32(sp0 - 0xd0cu, COW_IMG(0x10379a00u));
    g->eax = sp0 - 0xcf0u;
    g->esp = sp0 - 0xcf8u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, COW_IMG(0x10379a00u), sp0 - 0xcf0u, 0x33cu, 0u, 0u);
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        goto L_10195633;
    }
    eax = t1;
    COW_AT(101955a0)
    if (rd32(sp0 - 0xcf0u) != 1u) goto L_10195633;
    COW_AT(101955ab)
    wr32(sp0 - 0xcfcu, in_ebx);
    wr32(sp0 - 0xd00u, in_esi);
    ebx = sp0 - 0xcecu;
    edi = 0u;
L_101955b1: ;
    COW_AT(101955b1)
    if (rd32(edi * 0x2cu + rd32(self + 4u) + 0xcu) == 6u)
    {
        eax = edi * 0x2cu + rd32(self + 4u);
        ecx = rd32(edi * 0x2cu + rd32(self + 4u) + 0xcu);
        edx = edi * 0xbu;
        esi = rd32(self + 4u);
    COW_AT(101955c6)
        if (edi != 0xabu)
        {
    COW_AT(1019560c)
            wr32(sp0 - 0xd04u, rd32(ebx));
            wr32(sp0 - 0xd08u, eax);
            g->esp = sp0 - 0xd00u;
            cow_stdcall(g, COW_IMG(0x10196040u), 2, eax, rd32(ebx));
            ebx = ebx + 4u;
        }
        else
        {
    COW_AT(101955ce)
            if (rd32(esi + 0x1d68u) != 0x43u)
            {
    COW_AT(101955e2)
                eax = rd32(esi + 0x1d84u);
            }
            else
            {
    COW_AT(101955d7)
                wr32(sp0 - 0xd04u, edi);
                g->esp = sp0 - 0xd00u;
                t2 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, edi);
                eax = t2;
            }
    COW_AT(101955e8)
            t3 = rd32(esi + 0x1d88u);
            wr32(esi + 0x1d6cu, eax);
            if (t3 != 0u)
            {
                ecx = t3;
    COW_AT(101955f8)
                wr32(sp0 - 0xd04u, eax);
                t4 = rd32(esi + 0x1d68u);
                wr32(sp0 - 0xd08u, t4);
                g->esp = sp0 - 0xd00u;
                cow_fastcall(g, COW_IMG(0x10193bc0u), ecx, eax, 2, t4, eax);
            }
    COW_AT(10195607)
            ebx = ebx + 4u;
        }
    }
    COW_AT(1019561a)
    if ((int32_t)(edi + 1u) < 207)
    {
        edi = edi + 1u;
        goto L_101955b1;
    }
    COW_AT(10195623)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 1u;
L_10195633: ;
    COW_AT(10195633)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10195570(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101955a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf8u;
        g->edi = 0u;
        wr32(sp0 - 0xd08u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x101955abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf8u;
        g->edi = 0u;
        wr32(sp0 - 0xd08u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x101955b1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x101955c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x101955ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x101955d7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x101955e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x101955e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x101955f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x10195607u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x1019560cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x1019561au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x10195623u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0xd00u);
        in_ebx = rd32(sp0 - 0xcfcu);
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xd00u;
        (void)sp0;
        return 1;
    }
    case 0x10195633u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcf8u);
        in_ebp = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf8u;
        wr32(sp0 - 0xd08u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10195570(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10195570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
