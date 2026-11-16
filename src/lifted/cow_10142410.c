/* f_0x10142410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10142410(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_10142425;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
    }
    else
    {
        eax = eax - 1u;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_stdcall(g, COW_IMG(0x10141bf0u), 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
L_10142422: ;
    g->edx = edx;
    return eax;
L_10142425: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 1u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_101424b5;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10142463;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_10142422;
    }
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x101424e0u), rd32(COW_IMG(0x10578280u)), in_edx, 2, rd32(COW_IMG(0x1057828cu)), 7u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037152cu), 1u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10142463: ;
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x101424e0u), rd32(COW_IMG(0x10578280u)), in_edx, 2, rd32(COW_IMG(0x10578288u)), 9u);
    t6 = rd32(rd32(COW_IMG(0x10578294u)) + 8u);
    g->eax = t6;
    t7 = rd32(COW_IMG(0x10578294u));
    t8 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t7, 2, t6, 0u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10143cb0u), rd32(COW_IMG(0x10578294u)), 1, 1u);
    t11 = g->edx;
    t12 = rd32(COW_IMG(0x10578204u));
    t13 = cow_call_regs(g, COW_IMG(0x1013e3b0u), t10, t12, t11, 0, 4, 3u, 1u, 0u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_stdcall(g, COW_IMG(0x10142170u), 0);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_101424b5: ;
    t18 = rd32(COW_IMG(0x10578284u));
    wr32(COW_IMG(0x10371480u), 0xffffffffu);
    wr32(sp0 + 4u, t18);
    t19 = rd32(COW_IMG(0x10578280u));
    wr32(sp0 + 8u, 5u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x101424e0u), eax, t19, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10142410(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
