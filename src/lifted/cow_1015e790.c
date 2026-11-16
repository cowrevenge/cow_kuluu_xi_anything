/* f_0x1015e790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1015e790(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1015e7d4;
    }
    if (rd8(arg1 + 0x6eu) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0x6eu);
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0x6eu);
        wr8(arg1 + 0x6eu, 1u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10118f30u), arg1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(arg1 + 0x10u) != 0xeu) goto L_1015e7bd;
    wr8(arg1 + 0x70u, 1u);
    g->edx = edx;
    return eax;
L_1015e7bd: ;
    wr8(arg1 + 0x72u, 0u);
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1015e6e0u), self, 5, arg1, arg2, 1u, 0u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_1015e7d4: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015e790(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
