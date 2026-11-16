/* f_0x10161aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10161aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10161ac0;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10161b07;
    }
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e830u), COW_IMG(0x10621838u), 1, 0u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_10161ac0: ;
    if (rd32(COW_IMG(0x105781d4u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 5u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105781d4u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t3 = rd32(ecx);
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, rd32(t3 + 0x4cu), ecx, 0);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x105781d8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781d8u));
        g->edx = rd32(ecx);
        t6 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t6 + 0x4cu), ecx, 0);
        t7 = g->edx;
        edx = t7;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f96cu), 1u, 0u);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
        t10 = rd32(COW_IMG(0x1057876cu));
        wr8(t10 + 0x54u, 1u);
        g->eax = t10;
        g->esp = sp0 - 4u;
        t11 = cow_fastcall(g, COW_IMG(0x10162f00u), self, edx, 1, 0u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
L_10161b07: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161aa0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
