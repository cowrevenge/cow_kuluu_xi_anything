/* f_0x1007cf80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_1007cf80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10578198u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1007cfa3;
    }
    ecx = rd32(COW_IMG(0x10578198u));
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x1012f1a0u), in_eax, ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1007cfa3;
    }
    edx = t2;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x54u);
    return (t3 & 0xffffff00u) | 1u;
L_1007cfa3: ;
    if (rd32(COW_IMG(0x10578450u)) == 0u) goto L_1007cfc6;
    ecx = rd32(COW_IMG(0x10578450u));
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x1014cff0u), ecx, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        goto L_1007cfc6;
    }
    edx = t5;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x55u);
    return (t6 & 0xffffff00u) | 1u;
L_1007cfc6: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007cf80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007cf80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
