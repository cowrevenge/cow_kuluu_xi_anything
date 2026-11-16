/* f_0x101130e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101130e0(Guest* g)
{
    uint32_t edi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(rd32(self + 0x97cu) - rd32(self + 0x980u)) > 0)
    {
        edi = rd32(self + 0x97cu) - rd32(self + 0x980u);
        goto L_10113102;
    }
    return 2u;
L_10113102: ;
    if (edi > 0x800u)
    {
        edi = 0x800u;
    }
    if ((uint8_t)arg1 != 0u) goto L_1011316b;
    t1 = rd32(self + 0x978u);
    g->ebx = self + 0x8e8u;
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101c4a10u), self + 0x8e8u, 3, t1, 0u, 0u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_1011313e;
    edx = t3;
    g->ebx = in_ebx;
    g->edx = edx;
    return 3u;
L_1011313e: ;
    t4 = rd32(self + 0x980u);
    t5 = rd32(self + 0x978u);
    g->ebx = self + 0x8e8u;
    g->eax = t5;
    g->edx = self + 4u;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x101c46d0u), self + 0x8e8u, 4, t5, self + 4u, edi, t4);
    t7 = g->edx;
    t8 = ((int32_t)t6 >= 0) - 1u & 3u;
    g->ebx = in_ebx;
    g->edx = t7;
    return t8;
L_1011316b: ;
    t9 = rd32(self + 0x978u);
    g->ebx = in_ebx;
    g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
    g->edx = t9;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x101c4a10u), self + 0x8e8u, 3, t9, 0u, 0u);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        edx = t11;
        goto L_10113189;
    }
    edx = t11;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0u;
L_10113189: ;
    t12 = rd32(self + 0x980u);
    wr32(self + 0x804u, edi);
    wr32(self + 0x980u, edi + t12);
    g->ebx = in_ebx;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101130e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101130e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
