/* f_0x1013f1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1013f1c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013f204u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1013f204;
    case 0x1013f22fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_1013f22f;
    case 0x1013f236u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_1013f236;
    case 0x1013f254u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_1013f254;
    case 0x1013f260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1013f260;
    case 0x1013f26cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f26c;
    case 0x1013f271u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f271;
    case 0x1013f277u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f277;
    case 0x1013f27au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f27a;
    case 0x1013f290u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f290;
    case 0x1013f2a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f2a9;
    case 0x1013f2b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f2b1;
    case 0x1013f2d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1013f2d8;
    default: break;
    }
#endif

    COW_AT(1013f1c0)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr16(sp0 - 0xcu, 0u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr32(sp0 - 0x1cu, 0u);
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_20 = in_ebx;
        loc_24 = in_ebp;
        loc_28 = in_esi;
        loc_2c = in_edi;
    }
    else
    {
        ecx = t1;
    COW_AT(1013f204)
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x1011a710u), ecx, 1, sp0 - 0xcu);
        t2 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
        wr32(sp0 - 0x18u, t2);
        if (rd32(COW_IMG(0x106643acu)) == 0u)
        {
            eax = rd32(COW_IMG(0x106643acu));
            edx = rd32(sp0 - 0xau);
            ebx = 0u;
            ebp = rd32(sp0 - 8u) - rd32(sp0 - 0xcu);
            loc_18 = t2;
            loc_1c = 0u;
        }
        else
        {
            eax = rd32(COW_IMG(0x106643acu));
            edx = rd32(sp0 - 0xau);
            ebp = rd32(sp0 - 8u) - rd32(sp0 - 0xcu);
            loc_18 = t2;
    COW_AT(1013f22f)
            if (rd32(eax + 8u) == 0u)
            {
                eax = rd32(eax + 8u);
                ebx = 0u;
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                eax = rd32(eax + 8u);
    COW_AT(1013f236)
                wr32(sp0 - 0x30u, sp0 - 0x14u);
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t3 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, eax, g->edx, 0, 1, sp0 - 0x14u);
                t4 = g->edx;
                t5 = rd16(sp0 - 0x12u);
                wr16(sp0 - 0x14u, (uint16_t)(rd16(sp0 - 0x14u) + 0xffe0u));
                if ((int16_t)t5 > (int16_t)rd16(sp0 - 6u))
                {
                    eax = t3;
                    edx = (t4 & 0xffff0000u) | t5;
                    ebx = 0u;
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                }
                else
                {
                    eax = t3;
                    edx = (t4 & 0xffff0000u) | t5;
    COW_AT(1013f254)
                    if ((int16_t)rd16(sp0 - 0x14u) > (int16_t)rd16(sp0 - 8u))
                    {
                        eax = (eax & 0xffff0000u) | rd16(sp0 - 0x14u);
                        ebx = 0u;
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_1c = rd32(sp0 - 0x1cu);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | rd16(sp0 - 0x14u);
    COW_AT(1013f260)
                        wr32(sp0 - 0x1cu, 1u);
                        ebx = 1u;
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_1c = 1u;
                    }
                }
            }
        }
    COW_AT(1013f26c)
        if (rd32(self + 0x14u) == ebx)
        {
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
    COW_AT(1013f271)
            if (ebx == 0u)
            {
                eax = ebx;
    COW_AT(1013f290)
                wr32(sp0 - 0x30u, sp0 - 0xcu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t8 = cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 0xcu);
                t9 = g->edx;
                eax = t8;
                edx = t9;
                ebx = (uint32_t)(int16_t)rd16(sp0 - 0xau);
                esi = (uint32_t)(int16_t)rd16(sp0 - 0xcu);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                eax = ebx;
    COW_AT(1013f277)
                if (eax != 1u)
                {
                    eax = eax - 1u;
    COW_AT(1013f2a9)
                    ebx = rd32(sp0 - 0x10u);
                    esi = rd32(sp0 - 0x14u);
                }
                else
                {
    COW_AT(1013f27a)
                    t6 = rd32(sp0 - 0x14u);
                    t7 = rd16(sp0 - 0xau);
                    wr16(sp0 - 0xcu, (uint16_t)(t6 - ebp));
                    eax = t6 - ebp;
                    ebx = (uint32_t)(int16_t)t7;
                    esi = (uint32_t)(int16_t)(t6 - ebp) - 1u;
                }
            }
    COW_AT(1013f2b1)
            wr32(sp0 - 0x30u, ebx);
            wr32(sp0 - 0x34u, esi);
            g->esp = sp0 - 0x2cu;
            t10 = cow_call_regs(g, COW_IMG(0x10119110u), eax, rd32(self + 8u), g->edx, 0, 2, esi, ebx);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 1u);
            t11 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x3cu, t11);
            wr32(sp0 - 0x40u, ebp);
            wr32(sp0 - 0x44u, ebx);
            wr32(sp0 - 0x48u, esi);
            g->edx = t11;
            cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, esi, ebx, ebp, t11, 1u, 1u, 0u);
            t12 = g->edx;
            t13 = rd32(sp0 - 0x1cu);
            wr32(self + 0x14u, t13);
            eax = t13;
            edx = t12;
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
    }
    COW_AT(1013f2d8)
    g->ebx = loc_20;
    g->esi = loc_28;
    g->edi = loc_2c;
    g->ebp = loc_24;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013f1c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013f204u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->esi = 0u;
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1013f22fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->esi = 0u;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1013f236u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->esi = 0u;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1013f254u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        g->esi = 0u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1013f260u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x2cu;
        g->esi = 0u;
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1013f26cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1013f271u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1013f277u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1013f27au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1013f290u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1013f2a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1013f2b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1013f2d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f1c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1013f1c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
