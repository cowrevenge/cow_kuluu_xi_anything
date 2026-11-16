/* f_0x101f36d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101f36d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x101f1120u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x100eb4f0u), 1, t2);
    t6 = g->edx;
    if (t5 != 3u)
    {
        eax = t5;
        edx = t6;
        goto L_101f3701;
    }
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, 2u);
    t8 = g->edx;
    if (t7 == 5u)
    {
        eax = t7;
        edx = t8;
        goto L_101f3721;
    }
    eax = t7;
    edx = t8;
    loc_c = 5u;
L_101f3719: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, loc_c, 2u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_101f3721: ;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_101f3734;
    }
    t13 = rd32(self + 8u);
    wr8(t13 + 0x63u, 1u);
    g->edx = edx;
    return t13;
L_101f3701: ;
    if (eax == 0x12u) goto L_101f3721;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, 2u);
    t10 = g->edx;
    if (t9 != 5u)
    {
        eax = t9;
        edx = t10;
        goto L_101f3721;
    }
    eax = t9;
    edx = t10;
    loc_c = 0xbu;
    goto L_101f3719;
L_101f3734: ;
    wr8(rd32(self + 8u) + 0x63u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f36d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f36d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
