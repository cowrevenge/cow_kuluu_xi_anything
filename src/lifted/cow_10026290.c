/* f_0x10026290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10026290(Guest* g)
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

    if (rd32(arg1) == 2u)
    {
        eax = rd32(arg1) - 2u;
        goto L_100262a0;
    }
    eax = rd32(arg1) - 2u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        edx = in_edx;
        goto L_100262ba;
    }
    eax = eax - 3u;
L_100262a0: ;
    if (rd32(COW_IMG(0x10456e90u)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456e90u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t1 = rd32(ecx);
        g->esp = sp0;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x10456e90u), 0u);
        eax = t2;
        edx = t3;
    }
L_100262ba: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10026290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10026290(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
