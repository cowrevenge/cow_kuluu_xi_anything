/* f_0x101bb680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bb680(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bb6b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_101bb6b0;
    case 0x101bb6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_101bb6ba;
    case 0x101bb6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb6cd;
    case 0x101bb6d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb6d7;
    case 0x101bb6edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb6ed;
    case 0x101bb6f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb6f4;
    case 0x101bb702u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb702;
    case 0x101bb710u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb710;
    case 0x101bb712u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb712;
    case 0x101bb718u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bb718;
    default: break;
    }
#endif

    COW_AT(101bb680)
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr32(sp0 - 0x58u, 0x93u);
    wr32(sp0 - 0x5cu, 0xbu);
    t1 = rd8(self + 4u);
    wr8(sp0 - 0x4cu, 0x13u);
    wr8(sp0 - 0x4bu, (uint8_t)t1);
    wr8(sp0 - 0x4au, 0u);
    wr8(sp0 - 0x49u, 0u);
    g->eax = (in_eax & 0xffffff00u) | t1;
    g->ecx = self;
    g->esp = sp0 - 0x54u;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0x93u);
    t3 = g->ecx;
    eax = t2;
    ecx = t3;
    edx = sp0 - 0x48u;
L_101bb6b0: ;
    COW_AT(101bb6b0)
    t4 = rd8(eax);
    wr8(edx, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        edx = edx + 1u;
        goto L_101bb6b0;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t4;
    edx = edx + 1u;
    COW_AT(101bb6ba)
    wr32(sp0 - 0x58u, 0x94u);
    wr32(sp0 - 0x5cu, 0xbu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0x94u);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    edx = sp0 - 0x28u;
L_101bb6cd: ;
    COW_AT(101bb6cd)
    t7 = rd8(eax);
    wr8(edx, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        edx = edx + 1u;
        goto L_101bb6cd;
    }
    edx = edx + 1u;
    COW_AT(101bb6d7)
    wr32(sp0 - 0x58u, sp0 - 0x4cu);
    g->esp = sp0 - 0x54u;
    t8 = cow_call_regs(g, COW_IMG(0x101bb430u), sp0 - 0x4cu, self, edx, 0, 1, sp0 - 0x4cu);
    t9 = g->edx;
    if (rd32(self + 0x210u) == 0u)
    {
        eax = t8;
        ecx = rd32(self + 0x210u);
        edx = t9;
    COW_AT(101bb6f4)
        wr32(sp0 - 0x58u, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x4cu;
        t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
        t13 = g->edx;
        if (t12 == 0u)
        {
            edx = t13;
    COW_AT(101bb710)
            eax = 0u;
        }
        else
        {
            eax = t12;
            edx = t13;
    COW_AT(101bb702)
            wr32(sp0 - 0x58u, 0x1200u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x54u;
            t14 = cow_thiscall(g, COW_IMG(0x101bc9e0u), eax, 1, 0x1200u);
            t15 = g->edx;
            eax = t14;
            edx = t15;
        }
    COW_AT(101bb712)
        wr32(self + 0x210u, eax);
    }
    else
    {
        eax = t8;
        ecx = rd32(self + 0x210u);
        edx = t9;
    COW_AT(101bb6ed)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x54u;
        t10 = cow_thiscall(g, COW_IMG(0x101bcb30u), ecx, 0);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    COW_AT(101bb718)
    wr32(sp0 - 0x58u, 0x13u);
    wr32(sp0 - 0x5cu, self + 0x218u);
    wr32(sp0 - 0x60u, sp0 - 0x4cu);
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x101bb5a0u), self, 3, sp0 - 0x4cu, self + 0x218u, 0x13u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    return (rd32(self + 0x218u) & 0xffffff00u) | (int32_t)rd32(self + 0x218u) >= 0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bb680(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bb6b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101bb6bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101bb6cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101bb6d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101bb6edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb6f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x101bb702u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101bb710u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101bb712u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x101bb718u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb680(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101bb680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
