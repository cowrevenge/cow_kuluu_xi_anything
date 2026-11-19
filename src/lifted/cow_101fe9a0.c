/* f_0x101fe9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fe9a0(Guest* g)
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fe9deu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe9de;
    case 0x101fe9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe9ec;
    case 0x101fe9f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe9f5;
    case 0x101fe9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe9f7;
    case 0x101fe9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fe9fa;
    case 0x101fea1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fea1e;
    case 0x101fea2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101fea2e;
    default: break;
    }
#endif

    COW_AT(101fe9a0)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x96u);
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x1057847cu));
    g->esp = sp0 - 4u;
    t4 = cow_fastcall(g, COW_IMG(0x10150ce0u), t3, t2, 2, t1, 2u);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x54u);
    t8 = g->edx;
    wr32(arg1 + 0x40u, t7);
    t9 = rd32(self + 0x14u);
    wr8(self + 0x11u, 0xffu);
    if (t9 != 0u)
    {
        eax = t9;
        edx = t8;
    }
    else
    {
        eax = t9;
        edx = t8;
    COW_AT(101fe9de)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, arg1, edx, 1, 1, 0x68u);
        t11 = g->edx;
        if (t10 == 0u)
        {
            edx = t11;
    COW_AT(101fe9f5)
            eax = 0u;
        }
        else
        {
            eax = t10;
            edx = t11;
    COW_AT(101fe9ec)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t12 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t13 = g->edx;
            eax = t12;
            edx = t13;
        }
    COW_AT(101fe9f7)
        wr32(self + 0x14u, eax);
    }
    COW_AT(101fe9fa)
    g->eax = eax;
    g->edx = edx;
    t14 = rd32(self + 0x14u);
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x101c8290u), t14, 1, 0xau);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t17, 1, 1, 0x26u);
    t19 = g->edx;
    g->edx = t19;
    t20 = rd32(self + 0x14u);
    cow_thiscall(g, COW_IMG(0x101c8380u), t20, 1, t18);
    t21 = g->ecx;
    t22 = g->edx;
    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
        edx = t22;
    }
    else
    {
        eax = rd32(self + 0xcu);
        ecx = t21;
        edx = t22;
    COW_AT(101fea1e)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t23 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t24 = g->edx;
        wr32(self + 0xcu, 0u);
        eax = t23;
        edx = t24;
    }
    COW_AT(101fea2e)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fe9a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fe9deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101fe9ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fe9f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fe9f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fe9fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fea1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fea2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe9a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fe9a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
