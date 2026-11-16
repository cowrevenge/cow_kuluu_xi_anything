/* f_0x1005f990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1005f990(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(self + 0x86u);
    wr32(self, COW_IMG(0x1032ba7cu));
    wr32(self + 0x34u, COW_IMG(0x1032ba60u));
    if ((uint8_t)t1 != 1u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        t3 = g->edx;
        if (t2 == 0u)
        {
            eax = t2;
            edx = t3;
        }
        else
        {
            eax = t2;
            edx = t3;
            if (rd8(self + 0x84u) == 0u)
            {
                g->esp = sp0 - 8u;
                t9 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t10 = rd32(self + 0x80u);
                g->edx = rd32(t9);
                t11 = rd32(t9);
                t12 = cow_thiscall(g, rd32(t11 + 0x30u), t9, 1, t10);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
            else
            {
                g->esp = sp0 - 8u;
                t4 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t5 = rd32(self + 0x80u);
                g->edx = rd32(t4);
                t6 = rd32(t4);
                t7 = cow_thiscall(g, rd32(t6 + 0x60u), t4, 1, t5);
                t8 = g->edx;
                eax = t7;
                edx = t8;
            }
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t15 = g->edx;
    t16 = cow_fastcall(g, COW_IMG(0x100747c0u), self, t15, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (arg1 & 1u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f990(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
