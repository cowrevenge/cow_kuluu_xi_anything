/* f_0x102023b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102023b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xdu);
    if (rd8(arg1 + 0x30u) >= 0x19u)
    {
        eax = t1;
        ecx = (arg1 & 0xffffff00u) | rd8(arg1 + 0x30u);
        goto L_102023dc;
    }
    eax = t1;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1011fb00u), rd32(rd32(eax) + 0xcu), 2, 0u, 0u);
    return;
L_102023dc: ;
    if ((uint8_t)ecx >= 0x32u) goto L_102023f7;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1011fb00u), rd32(rd32(eax) + 8u), 2, 0u, 0u);
    return;
L_102023f7: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1011fb00u), rd32(rd32(eax) + ((uint8_t)ecx < 0x4bu) * 4u), 2, 0u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102023b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102023b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
