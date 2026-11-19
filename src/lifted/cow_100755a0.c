/* f_0x100755a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100755a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
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
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100755aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100755ae;
    case 0x100755b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100755b4;
    case 0x100755c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100755c6;
    case 0x100755d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100755d9;
    case 0x100755ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100755dd;
    case 0x100755e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100755e4;
    case 0x100755eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100755ee;
    case 0x100755f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100755f7;
    case 0x10075605u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_10075605;
    case 0x10075613u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_10075613;
    case 0x1007561du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_1007561d;
    case 0x1007568cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1007568c;
    default: break;
    }
#endif

    COW_AT(100755a0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(COW_IMG(0x1047d158u)) == 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x1047d158u));
        edx = in_edx;
        goto L_100755ee;
    }
    ecx = rd32(COW_IMG(0x1047d158u));
    COW_AT(100755ae)
    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        goto L_100755c6;
    }
    eax = rd32(self);
    COW_AT(100755b4)
    wr32(sp0 - 0xcu, in_ebx);
    if (rd32(COW_IMG(0x1047d200u)) != rd16(eax + 0x24u))
    {
        edx = rd16(eax + 0x24u);
        goto L_100755d9;
    }
L_100755c6: ;
    COW_AT(100755c6)
    if (rd32(COW_IMG(0x1047d150u)) == rd16(eax + 0x26u))
    {
        loc_4 = self;
        loc_8 = in_esi;
        goto L_1007568c;
    }
    edx = rd16(eax + 0x26u);
    eax = rd32(COW_IMG(0x1047d150u));
L_100755d9: ;
    COW_AT(100755d9)
    if (ecx != 0u)
    {
    COW_AT(100755dd)
        wr32(sp0 - 0xcu, 1u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    COW_AT(100755e4)
    wr32(COW_IMG(0x1047d158u), 0u);
L_100755ee: ;
    COW_AT(100755ee)
    if (rd32(self) == 0u)
    {
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
    COW_AT(100755f7)
        wr32(sp0 - 0xcu, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x10u);
        t6 = g->edx;
        if (t5 == 0u)
        {
    COW_AT(10075613)
            wr32(COW_IMG(0x1047d158u), 0u);
        }
        else
        {
            eax = t5;
            edx = t6;
    COW_AT(10075605)
            g->eax = eax;
            g->esp = sp0 - 8u;
            t7 = cow_thiscall(g, COW_IMG(0x1000cfb0u), eax, 0);
            wr32(COW_IMG(0x1047d158u), t7);
        }
    COW_AT(1007561d)
        t8 = rd16(rd32(self) + 0x24u);
        wr32(COW_IMG(0x1047d200u), t8);
        wr32(sp0 - 0xcu, sp0 - 4u);
        t9 = rd16(rd32(self) + 0x26u);
        wr32(COW_IMG(0x1047d150u), t9);
        wr32(sp0 - 0x10u, t9);
        wr32(sp0 - 0x14u, t8);
        wr32(sp0 - 4u, 0u);
        g->eax = t8;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x1006a150u), rd32(COW_IMG(0x1047bfa8u)), 3, t8, t9, sp0 - 4u);
        t11 = rd32(COW_IMG(0x1047d158u));
        wr32(t11 + 4u, t10);
        t12 = rd32(COW_IMG(0x1047d158u));
        wr32(t12 + 8u, 0u);
        t13 = (t11 & 0xffff0000u) | rd16(COW_IMG(0x1047d150u));
        wr32(sp0 - 0xcu, t13);
        t14 = (t12 & 0xffff0000u) | rd16(COW_IMG(0x1047d200u));
        wr32(sp0 - 0x10u, t14);
        g->eax = 0u;
        t15 = cow_thiscall(g, COW_IMG(0x1000ad70u), rd32(COW_IMG(0x1045666cu)), 2, t14, t13);
        wr32(rd32(COW_IMG(0x1047d158u)) + 0xcu, t15);
        loc_4 = 0u;
        loc_8 = rd32(sp0 - 8u);
    }
L_1007568c: ;
    COW_AT(1007568c)
    g->ebx = in_ebx;
    g->esi = loc_8;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100755a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100755aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100755b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100755c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100755d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100755ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100755e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100755eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100755f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10075605u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10075613u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007561du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007568cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100755a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100755a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
