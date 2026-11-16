/* f_0x10036c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10036c10(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 0u) goto L_10036c3f;
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        eax = arg2;
        edx = in_edx;
        goto L_10036c5c;
    }
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10038470u), 3, arg1, arg3, arg2);
    t2 = g->edx;
    wr8(COW_IMG(0x10463909u), 1u);
    g->edx = t2;
    return t1;
L_10036c3f: ;
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        eax = (arg2 & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
        edx = in_edx;
    }
    else
    {
        g->eax = arg1;
        g->edx = arg3;
        g->esp = sp0;
        t3 = cow_cdecl(g, COW_IMG(0x10038470u), 3, arg1, arg3, 0u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_10036c5c: ;
    wr8(COW_IMG(0x10463909u), 1u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10036c10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
