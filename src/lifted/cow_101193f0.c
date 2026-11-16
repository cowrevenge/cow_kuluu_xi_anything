/* f_0x101193f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101193f0(Guest* g)
{
    double d15;
    double d20;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(self + 0x30u) == 0u)
    {
        eax = rd32(self + 0x30u);
        ebp = in_ebp;
    }
    else
    {
        eax = rd32(self + 0x30u);
        wr32(sp0 - 0x14u, 0x3f800000u);
        wr32(sp0 - 0x10u, 0x3f800000u);
        if (rd8(sp0 + 0xcu) == 0u)
        {
            ecx = self;
        }
        else
        {
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            wr32(sp0 - 0x24u, sp0 - 0x14u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 - 0x14u, sp0 - 0x10u);
            t1 = g->ecx;
            ecx = t1;
        }
        wr32(sp0 - 0x20u, in_ebp);
        t2 = (uint32_t)(int16_t)rd16(rd32(rd32(self + 0x30u)) + 2u);
        t3 = rd32(rd32(self + 0x30u));
        t4 = rd32(self + 0x30u);
        wr32(sp0 + 0xcu, t2);
        d5 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * cow_bits2f(0x3f800000u));
        fpush(g, d5);
        g->esp = sp0 - 0x20u;
        t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
        wr16(self + 0x1au, (uint16_t)(arg1 + t6));
        t7 = (uint32_t)(int16_t)rd16(rd32(t4) + 4u);
        t8 = rd32(t4);
        wr32(sp0 + 0xcu, t7);
        d9 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * cow_bits2f(0x3f800000u));
        fpush(g, d9);
        t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg1 + t6, g->ecx, g->edx, 1, 0);
        wr16(self + 0x1cu, (uint16_t)(arg2 + t10));
        t11 = (uint32_t)(int16_t)rd16(rd32(t4) + 2u);
        t12 = rd32(COW_IMG(0x106218b4u));
        t13 = rd32(t4);
        t14 = rd32(COW_IMG(0x106218b8u));
        wr32(sp0 + 0xcu, t11);
        wr32(sp0 - 0xcu, t12);
        wr32(sp0 - 8u, t14);
        g->edx = t11;
        d15 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * cow_bits2f(0x3f800000u));
        fpush(g, d15);
        t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
        t17 = g->edx;
        wr16(self + 0x1eu, (uint16_t)t16);
        t18 = (uint32_t)(int16_t)rd16(rd32(t4) + 4u);
        t19 = rd32(t4);
        wr32(sp0 + 0xcu, t18);
        d20 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * cow_bits2f(0x3f800000u));
        fpush(g, d20);
        t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), t19, g->ecx, g->edx, 1, 0);
        wr16(self + 0x20u, (uint16_t)t21);
        if (rd8(rd32(t4) + 0x13u) == 1u)
        {
            ebp = t14;
            edi = t4;
            wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) + (uint16_t)(ebp - 0x200u)));
            wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) + (uint16_t)(ebp - 0x200u)));
        }
        else
        {
            eax = rd8(rd32(t4) + 0x13u) - 1u;
            ebp = t14;
            edi = t4;
            if (eax == 1u)
            {
                t23 = rd32(sp0 - 6u);
                wr16(self + 0x1cu, (uint16_t)(rd16(self + 0x1cu) + (uint16_t)(t23 - 0x1c0u)));
                wr16(self + 0x20u, (uint16_t)(rd16(self + 0x20u) + (uint16_t)(t23 - 0x1c0u)));
            }
            else
            {
                eax = eax - 1u;
                if (eax == 1u)
                {
                    wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) + (uint16_t)(ebp - 0x200u)));
                    t22 = rd32(sp0 - 6u);
                    wr16(self + 0x1eu, (uint16_t)(rd16(self + 0x1eu) + (uint16_t)(ebp - 0x200u)));
                    wr16(self + 0x1cu, (uint16_t)(rd16(self + 0x1cu) + (uint16_t)(t22 - 0x1c0u)));
                    wr16(self + 0x20u, (uint16_t)(rd16(self + 0x20u) + (uint16_t)(t22 - 0x1c0u)));
                }
            }
        }
        wr32(self + 0x28u, 0u);
        if (rd32(edi + 8u) == 0u)
        {
            eax = rd32(edi + 8u);
            ebp = rd32(sp0 - 0x20u);
        }
        else
        {
            eax = rd32(edi + 8u);
            ebp = rd32(sp0 - 0x20u);
            wr32(self + 0x28u, eax);
        }
        wr32(self + 0x2cu, 0u);
        if (rd32(edi + 0xcu) != 0u)
        {
            edi = rd32(edi + 0xcu);
            wr32(self + 0x2cu, edi);
        }
    }
    g->ebp = ebp;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101193f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101193f0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
