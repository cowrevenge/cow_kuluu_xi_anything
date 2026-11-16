/* f_0x1020a360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020a360(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100a34c0u), 0);
    t2 = g->edx;
    if (rd32(self + 0x60u) == t1)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        wr32(self + 0x60u, eax);
        wr8(self + 0x51u, 1u);
    }
    if (rd8(self + 0x51u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x51u);
        goto L_1020a3b4;
    }
    if ((uint32_t)(int8_t)rd8(self + 0x50u) - 1u > 6u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x50u) - 1u;
        goto L_1020a3b4;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x50u) - 1u;
    t3 = rd32(COW_IMG(0x1020a3b8u) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x1020a38cu: goto L_1020a38c;
    case 0x1020a397u: goto L_1020a397;
    case 0x1020a3a2u: goto L_1020a3a2;
    case 0x1020a3adu: goto L_1020a3ad;
    default: rt_fatal(g, COW_IMG(0x1020a385u), "switch");
    }
    return 0;
L_1020a38c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x10209c40u), self, 0);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_1020a397: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10209f80u), self, 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1020a3a2: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10209dd0u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1020a3ad: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1020a100u), self, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_1020a3b4: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020a360(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
