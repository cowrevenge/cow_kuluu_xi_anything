/* f_0x1014a8c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014a8c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1014a8e2;
    }
    ecx = t2;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1014a8e2;
    }
    eax = t4;
    edx = t5;
    wr8(self + 0x5eu, 1u);
L_1014a8e5: ;
    wr8(COW_IMG(0x1057844cu), 0u);
    t6 = rd8(self + 0x54u);
    wr16(self + 0x60u, 0u);
    wr16(self + 0x62u, 0u);
    wr8(self + 0x47u, 0u);
    t7 = (eax & 0xffffff00u) | t6;
    g->eax = t7;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x101613d0u), rd32(COW_IMG(0x10621900u)), 1, t7);
    t9 = g->edx;
    t10 = rd32(self + 0x58u);
    t11 = (t9 & 0xffffff00u) | rd8(self + 0x54u);
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1014afa0u), self, 2, t11, t10);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_1014a8e2: ;
    wr8(self + 0x5eu, 0u);
    goto L_1014a8e5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a8c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014a8c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
