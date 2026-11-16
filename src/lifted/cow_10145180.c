/* f_0x10145180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10145180(Guest* g)
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

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_101451a5;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101cc0a0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101451a7;
    }
    edx = t3;
    t4 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t4, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_101451a5: ;
    g->edx = edx;
    return eax;
L_101451a7: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10097b40u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 4u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 5u);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
    t14 = g->edx;
    g->edx = t14;
    t15 = rd32(self + 8u);
    t16 = cow_thiscall(g, COW_IMG(0x10118b60u), t15, 2, 5u, 7u);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2bu);
    t20 = g->edx;
    g->edx = t20;
    t21 = rd32(self + 8u);
    t22 = cow_thiscall(g, COW_IMG(0x1011adb0u), t21, 2, 3u, t19);
    t23 = g->ecx;
    t24 = g->edx;
    g->esp = sp0;
    g->edx = t24;
    return cow_tailcall(g, COW_IMG(0x101cc1c0u), t22, t23, t24);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145180(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
