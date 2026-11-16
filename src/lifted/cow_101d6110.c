/* f_0x101d6110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d6110(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 != 0u) goto L_101d6163;
    if (rd32(COW_IMG(0x106631d4u)) == 0u) goto L_101d613c;
    eax = rd32(COW_IMG(0x106631d4u));
    if (rd16(eax + 0x1cu) != 1u) goto L_101d613c;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ec94u), 1u, 0u);
    return;
L_101d613c: ;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u) goto L_101d6189;
    edx = t2;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036fff0u), 1u, 0u);
    return;
L_101d6163: ;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371648u), 1u, 0u);
    }
L_101d6189: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d6110(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
