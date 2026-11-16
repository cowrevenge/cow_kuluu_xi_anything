/* f_0x10077cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10077cf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_10077d38;
    }
    t1 = rd32(arg1);
    wr32(COW_IMG(0x1047d49cu), t1);
    t2 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x1047d4a0u), t2);
    if (rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u);
        ecx = t1;
        edx = t2;
        goto L_10077d39;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u);
    if (rd16(eax + 0x210u) != 0u)
    {
        ecx = eax + 0x214u;
    }
    else
    {
        ecx = eax + 0x7cu;
    }
    edx = COW_IMG(0x103553e8u);
L_10077d2e: ;
    t3 = rd8(ecx);
    wr8(edx, (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        eax = (eax & 0xffffff00u) | t3;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10077d2e;
    }
    eax = (eax & 0xffffff00u) | t3;
    edx = edx + 1u;
L_10077d38: ;
    g->edx = edx;
    return eax;
L_10077d39: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10077d70u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077cf0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
