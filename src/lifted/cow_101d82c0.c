/* f_0x101d82c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d82c0(Guest* g)
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x38u);
        if (rd8(self + 0x898u) == 1u)
        {
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t1 = cow_thiscall(g, COW_IMG(0x1020a420u), self, 0);
            t2 = g->edx;
            if (t1 == 0u)
            {
                edx = t2;
            }
            else
            {
                eax = t1;
                edx = t2;
                wr16(self + 0x8a0u, rd16(eax + 4u));
            }
            g->edx = edx;
            g->esp = sp0 - 4u;
            t3 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
            t4 = g->edx;
            wr16(self + 0x89eu, (uint16_t)t3);
            eax = t3;
            edx = t4;
        }
    }
    t5 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = edx;
    t6 = rd32(COW_IMG(0x10578204u));
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1013bf40u), t6, 0);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee3cu));
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee8cu));
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee78u));
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee64u));
    t18 = g->edx;
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ee50u));
    t19 = g->ecx;
    t20 = g->edx;
    if (rd32(self + 0x8bcu) == 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = rd32(self + 0x8bcu);
        ecx = t19;
        edx = t20;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(self + 0x8bcu, 0u);
        ecx = t21;
        edx = t22;
    }
    if (rd32(self + 0x8b8u) == 0u)
    {
        eax = rd32(self + 0x8b8u);
    }
    else
    {
        eax = rd32(self + 0x8b8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t23 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t24 = g->edx;
        wr32(self + 0x8b8u, 0u);
        eax = t23;
        edx = t24;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    t26 = g->edx;
    g->edx = t26;
    return t25;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d82c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d82c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
