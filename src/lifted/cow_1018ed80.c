/* f_0x1018ed80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1018ed80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1018e4d0u), rd32(self + 4u), 1, arg1);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        t3 = rd32(self + 4u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x1018e8d0u), rd32(self + 0xcu), 1, t3);
        if (rd8(rd32(self + 0xcu) + 0x60u) == 0u)
        {
            edi = t4;
            goto L_1018ede3;
        }
        edx = rd32(self + 0xcu);
        edi = t4;
        if ((int32_t)rd32(self + 0x10u) >= (int32_t)edi) goto L_1018ede3;
        if (rd32(self + 0x18u) == 0u)
        {
            eax = rd32(self + 0x18u);
        }
        else
        {
            eax = rd32(self + 0x18u);
            t5 = rd32(self + 0x1cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t6 = cow_thiscall_cdecl(g, eax, t5, 3, 0u, self, t5);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
        t8 = rd32(self + 0xcu);
        wr32(self + 0x10u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_thiscall(g, COW_IMG(0x1018e7f0u), t8, 1, 0u);
        t10 = g->ecx;
        t11 = g->edx;
        if ((uint8_t)t9 != 0u)
        {
            eax = t9;
        }
        else
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t12 = cow_thiscall(g, COW_IMG(0x1018e800u), ecx, 1, 0u);
            eax = t12;
        }
L_1018edf4: ;
        t15 = rd32(self + 8u) - edi;
        t16 = rd32(self + 4u);
        wr32(self + 8u, t15);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t17 = cow_thiscall(g, COW_IMG(0x1018e1a0u), t16, 0);
        g->edx = arg1;
        cow_thiscall(g, COW_IMG(0x1018e4d0u), rd32(self + 4u), 1, arg1);
        t18 = g->edx;
        edx = t18;
    }
    t19 = rd32(self + 8u) + 1u;
    wr32(self + 8u, t19);
    g->edx = edx;
    return;
L_1018ede3: ;
    t13 = rd32(self + 0x10u) - edi;
    t14 = rd32(self + 0x10u);
    wr32(self + 0x10u, t13);
    if ((int32_t)(t14 - edi) >= 0)
    {
        eax = t13;
    }
    else
    {
        eax = t13;
        wr32(self + 0x10u, 0u);
    }
    goto L_1018edf4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018ed80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018ed80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
