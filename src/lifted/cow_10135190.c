/* f_0x10135190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10135190(Guest* g)
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

    if (rd32(rd32(COW_IMG(0x105781bcu)) + 0x1cu) != 1u)
    {
        eax = rd32(COW_IMG(0x105781bcu));
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10134f00u), 2, 0xffffu, 2u);
        t13 = rd32(sp0 + 8u);
        g->edx = t13;
        t14 = rd32(COW_IMG(0x105781bcu));
        t15 = cow_thiscall(g, COW_IMG(0x10135f00u), t14, 2, t13, 1u);
        t16 = g->ecx;
        t17 = g->edx;
        if ((uint8_t)t15 != 0u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            g->edx = edx;
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
            t19 = g->edx;
            edx = t19;
        }
        else
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            g->edx = edx;
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
            t18 = g->edx;
            edx = t18;
        }
    }
    else
    {
        t1 = rd32(self);
        t2 = rd32(sp0 + 8u);
        wr8(self + 4u, 1u);
        t3 = rd8(t2 + 2u);
        wr32(self + 8u, t2);
        wr8(self + 5u, (uint8_t)t3);
        g->eax = t1;
        g->edx = (in_edx & 0xffffff00u) | t3;
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
        t5 = g->edx;
        g->edx = t5;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, rd16(t2));
        t7 = g->edx;
        g->edx = t7;
        t8 = rd32(COW_IMG(0x105781bcu));
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x101316a0u), t8, 3, t2, t6, t4);
        t10 = g->ecx;
        t11 = g->edx;
        g->edx = t11;
        cow_thiscall(g, COW_IMG(0x10037b90u), t10, 0);
        t12 = g->edx;
        edx = t12;
    }
    t20 = rd32(COW_IMG(0x105781bcu));
    wr32(sp0 + 8u, 0u);
    t21 = rd32(t20 + 8u);
    wr32(sp0 + 4u, t21);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1015db80u), t20, COW_IMG(0x10621838u), edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10135190(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
