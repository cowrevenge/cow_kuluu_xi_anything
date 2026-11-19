/* f_0x10040e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10040e70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10040e84u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x2cu); goto E_10040e84;
    case 0x10040ecbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040ecb;
    case 0x10040ed4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040ed4;
    case 0x10040edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040ede;
    case 0x10040ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040ee2;
    case 0x10040ee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040ee4;
    case 0x10040ef1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10040ef1;
    case 0x10040fa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10040fa7;
    default: break;
    }
#endif

    COW_AT(10040e70)
    wr32(sp0 - 0x2cu, in_ebx);
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        loc_2c = in_ebx;
    }
    else
    {
    COW_AT(10040e84)
        wr32(sp0 - 0x30u, in_ebp);
        wr32(sp0 - 0x34u, in_esi);
        wr32(sp0 - 0x38u, in_edi);
        t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t2 = rd32(COW_IMG(0x1047cf7cu));
        t3 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t2 + 0xa90u, t1);
        wr32(sp0 - 0x3cu, t3);
        esi = self + 0x60u;
        edi = t3;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->eax = t2;
        g->edx = in_edx;
        g->esp = sp0 - 0x38u;
        t4 = cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t3);
        t5 = g->edx;
        g->ebx = self;
        g->edx = t5;
        t6 = cow_stdcall(g, COW_IMG(0x10054d70u), 0);
        t7 = g->edx;
        if (rd8(self + 0x179u) == 0u)
        {
            edx = t7;
            ebp = t3;
    COW_AT(10040ed4)
            if (rd32(self + 0x104u) == 0u)
            {
    COW_AT(10040ee2)
                eax = 0u;
            }
            else
            {
                eax = rd32(self + 0x104u);
    COW_AT(10040ede)
                eax = rd32(eax);
            }
    COW_AT(10040ee4)
            wr32(sp0 - 0x3cu, self);
            wr32(sp0 - 0x40u, COW_IMG(0x1047bc0cu));
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_call_regs(g, COW_IMG(0x10040220u), eax, eax, g->edx, 0, 2, COW_IMG(0x1047bc0cu), self);
            t9 = g->edx;
            edx = t9;
        }
        else
        {
            eax = (t6 & 0xffffff00u) | rd8(self + 0x179u);
            edx = t7;
            ebp = t3;
    COW_AT(10040ecb)
            g->esp = sp0 - 0x38u;
            cow_fastcall(g, COW_IMG(0x10040c20u), self, edx, 0);
            t8 = g->edx;
            edx = t8;
        }
    COW_AT(10040ef1)
        wr32(sp0 - 0x3cu, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->esp = sp0 - 0x38u;
        t10 = cow_thiscall(g, COW_IMG(0x10044c40u), self, 1, sp0 - 0xcu);
        wr32(sp0 - 0x3cu, 0xffffu);
        wr32(sp0 - 0x18u, rd32(t10));
        t11 = rd32(t10 + 4u);
        wr32(sp0 - 0x14u, t11);
        t12 = rd32(t10 + 8u);
        wr32(sp0 - 0x10u, t12);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        g->esi = esi;
        g->eax = t12;
        g->edx = t11;
        t13 = cow_thiscall(g, COW_IMG(0x100472f0u), self, 1, 0xffffu);
        t14 = g->edx;
        g->edx = t14;
        t15 = cow_thiscall(g, COW_IMG(0x1006a450u), rd32(COW_IMG(0x1047bfa8u)), 0);
        t16 = g->edx;
        g->edx = t16;
        t17 = cow_thiscall(g, COW_IMG(0x1006a4f0u), rd32(COW_IMG(0x1047bfa8u)), 0);
        t18 = g->edx;
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, 0u);
        t19 = cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), t18, 2, 0u, 0u);
        g->edx = rd32(self);
        t20 = rd32(self);
        t21 = cow_thiscall(g, rd32(t20 + 0x3cu), self, 0);
        t22 = g->edx;
        wr32(sp0 - 0x3cu, t21);
        g->edx = t22;
        cow_call_regs(g, COW_IMG(0x100467e0u), t21, self, g->edx, 0, 1, t21);
        t23 = g->edx;
        wr32(sp0 - 0x3cu, sp0 - 0x24u);
        wr32(sp0 - 0x40u, sp0 - 0x18u);
        g->eax = sp0 - 0x24u;
        t24 = cow_stdcall(g, COW_IMG(0x10054f80u), 2, sp0 - 0x18u, sp0 - 0x24u);
        g->edx = rd32(self);
        t25 = rd32(self);
        t26 = cow_thiscall(g, rd32(t25 + 0x3cu), self, 0);
        t27 = g->edx;
        wr32(sp0 - 0x3cu, t26);
        g->esi = esi;
        g->edx = t27;
        cow_thiscall(g, COW_IMG(0x100472f0u), self, 1, t26);
        t28 = g->edx;
        t29 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t30 = rd32(COW_IMG(0x1047cf7cu));
        t31 = rd32(sp0 - 0x34u);
        t32 = rd32(sp0 - 0x38u);
        wr32(t30 + 0xa90u, t29);
        wr32(t29 * 4u + t30 + 0xa10u, ebp);
        eax = t30;
        edx = t28;
        ebp = rd32(sp0 - 0x30u);
        esi = t31;
        edi = t32;
        loc_2c = rd32(sp0 - 0x2cu);
    }
    COW_AT(10040fa7)
    g->ebx = loc_2c;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10040e70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10040e84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10040ecbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10040ed4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10040edeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10040ee2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10040ee4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10040ef1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10040fa7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10040e70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10040e70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
