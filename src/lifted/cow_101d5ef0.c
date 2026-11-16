/* f_0x101d5ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d5ef0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10123e80u), 0);
    t1 = g->edx;
    if (arg1 != 0u)
    {
        edx = t1;
        goto L_101d5f2a;
    }
    edx = t1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x101d3e70u), self, 0);
    t3 = g->edx;
    wr16(self + 0x7e6u, (uint16_t)t2);
    if ((uint16_t)t2 != 0u) goto L_101d5f61;
    edx = t3;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ec94u), 1u, 0u);
    return;
L_101d5f2a: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x101d3ef0u), self, 1, arg1);
    t5 = g->edx;
    if (t4 == 0u) goto L_101d5f61;
    eax = t4;
    edx = t5;
    if (rd16(eax + 0xau) == 0xeu) goto L_101d5f52;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ecbcu), 1u, 0u);
    return;
L_101d5f52: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037eca8u), 1u, 0u);
L_101d5f61: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d5ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d5ef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
