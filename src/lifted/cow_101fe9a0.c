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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

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
        g->eax = eax;
        g->esp = sp0 - 4u;
        t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, arg1, edx, 1, 1, 0x68u);
        t11 = g->edx;
        if (t10 == 0u)
        {
            edx = t11;
            eax = 0u;
        }
        else
        {
            eax = t10;
            edx = t11;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t12 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t13 = g->edx;
            eax = t12;
            edx = t13;
        }
        wr32(self + 0x14u, eax);
    }
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
        g->eax = eax;
        g->esp = sp0 - 4u;
        t23 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t24 = g->edx;
        wr32(self + 0xcu, 0u);
        eax = t23;
        edx = t24;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fe9a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
