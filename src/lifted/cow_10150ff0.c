/* f_0x10150ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10150ff0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10151015;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10151037;
    }
    t1 = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578484u));
    t2 = rd32(COW_IMG(0x10578484u));
    g->esp = sp0;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_10151015: ;
    t5 = rd32(arg4 + 4u);
    g->eax = arg4;
    g->edx = t5;
    t6 = rd32(COW_IMG(0x10578200u));
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x1013a870u), t6, 5, 1u, t5, COW_IMG(0x10150fb0u), arg4, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10037b90u), t8, 0);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_10151037: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150ff0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
