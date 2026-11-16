/* f_0x10292110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10292110(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edx = in_edx;
    esi = arg1;
L_10292115: ;
    g->ecx = esi + 0x24u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1027eb30u), 2, esi + 0x24u, esi + 0xb8u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(esi + 0x6cu) == 0u)
    {
        eax = rd32(esi + 0x6cu);
        edx = t2;
    }
    else
    {
        eax = rd32(esi + 0x6cu);
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10292110u), 1, eax);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd32(esi + 0x70u) != 0u)
    {
        esi = rd32(esi + 0x70u);
        goto L_10292115;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292110(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
