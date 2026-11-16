/* f_0x1024c9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1024c9b0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        if (rd8(eax + 0x40u) == 0u)
        {
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t4 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
            t5 = g->edx;
            eax = t4;
            edx = t5;
        }
        g->eax = eax;
        g->edx = edx;
        t6 = rd32(COW_IMG(0x10669140u));
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x1024c940u), t6, 0);
        t8 = g->ecx;
        t9 = g->edx;
        if (t7 == rd32(COW_IMG(0x10669138u)))
        {
            eax = t7;
            edx = t9;
            goto L_1024c9ef;
        }
        eax = t7;
        ecx = t8;
        edx = t9;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t10 = cow_thiscall(g, COW_IMG(0x1024c940u), ecx, 0);
        t11 = g->edx;
        if (t10 != rd32(COW_IMG(0x1066913cu)))
        {
            eax = t10;
            edx = t11;
            goto L_1024ca07;
        }
        eax = t10;
        edx = t11;
L_1024c9ef: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t12 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
        t13 = g->edx;
        g->edx = t13;
        t14 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
L_1024ca07: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024c9b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
