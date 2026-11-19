/* f_0x102f4a63 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f4a63(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f4a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4a73;
    case 0x102f4a7au: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4a7a;
    case 0x102f4a7fu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4a7f;
    case 0x102f4a92u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4a92;
    case 0x102f4aa3u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4aa3;
    case 0x102f4ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4ac4;
    case 0x102f4aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4ace;
    case 0x102f4ad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4ad4;
    case 0x102f4af2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4af2;
    case 0x102f4b07u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4b07;
    case 0x102f4b16u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4b16;
    case 0x102f4b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4b18;
    case 0x102f4b1au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_102f4b1a;
    default: break;
    }
#endif

    COW_AT(102f4a63)
    if (rd32(self + 0x10u) == 0u)
    {
    COW_AT(102f4a7a)
        if (rd32(self + 0x50u) == 0u)
        {
    COW_AT(102f4a92)
            loc_10 = 0u;
            loc_c = 1u;
            loc_18 = 8u;
        }
        else
        {
    COW_AT(102f4a7f)
            loc_10 = 0x200u;
            loc_c = 0u;
            loc_18 = 1u;
        }
    COW_AT(102f4aa3)
        t1 = rd32(self + 4u);
        g->eax = self + 0x58u;
        g->ecx = 0u;
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        t2 = cow_stdcall(g, COW_IMG(0x102d2f60u), 7, t1, self + 0x58u, self + 0x5cu, 0u, loc_10, self + 0x54u, loc_c);
        t3 = g->ecx;
        t4 = g->edx;
        if ((int32_t)t2 < 0)
        {
            eax = t2;
        }
        else
        {
            ecx = t3;
            edx = t4;
    COW_AT(102f4ac4)
            if (loc_18 == 0u) goto L_102f4b16;
    COW_AT(102f4ace)
            eax = self + 0x10u;
            loc_14 = 0u;
            loc_8 = self + 0x10u;
L_102f4ad4: ;
    COW_AT(102f4ad4)
            t5 = rd32(self + 0x54u);
            t6 = rd32(self + 0x5cu);
            t7 = rd32(self + 0x58u);
            t8 = rd32(self + 4u);
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t9 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t8, t7, t6, 1u, loc_10, t5, loc_c, loc_8);
            if ((int32_t)t9 < 0)
            {
                eax = t9;
                goto L_102f4b18;
            }
    COW_AT(102f4af2)
            g->eax = rd32(loc_8);
            g->edx = rd32(rd32(loc_8));
            t10 = rd32(loc_8);
            t11 = rd32(rd32(loc_8));
            g->esp = sp0 - 0x24u;
            t12 = cow_thiscall(g, rd32(t11 + 0x3cu), loc_8 + 0x20u, 3, t10, 0u, loc_8 + 0x20u);
            t13 = g->ecx;
            t14 = g->edx;
            if ((int32_t)t12 < 0)
            {
                eax = t12;
                goto L_102f4b18;
            }
            ecx = t13;
            edx = t14;
    COW_AT(102f4b07)
            if (loc_14 + 1u < loc_18)
            {
                eax = loc_14 + 1u;
                loc_14 = loc_14 + 1u;
                loc_8 = loc_8 + 4u;
                goto L_102f4ad4;
            }
L_102f4b16: ;
    COW_AT(102f4b16)
            eax = 0u;
        }
L_102f4b18: ;
    COW_AT(102f4b18)
    }
    else
    {
    COW_AT(102f4a73)
        eax = 0u;
    }
    COW_AT(102f4b1a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f4a63(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f4a73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4a7au:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4a7fu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4a92u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4aa3u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4ac4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->ebx = self + 0x5cu;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102f4aceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        g->ebx = self + 0x5cu;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102f4ad4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebx = self + 0x5cu;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102f4af2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebx = self + 0x5cu;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102f4b07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebx = self + 0x5cu;
        g->ebp = sp0 - 4u;
        g->edi = self + 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102f4b16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4b18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f4b1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f4a63(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102f4a63(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
