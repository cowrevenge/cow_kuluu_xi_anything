/* f_0x10271ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10271ee0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = rd32(COW_IMG(0x1099b0fcu));
        goto L_10271f08;
    }
    eax = rd32(COW_IMG(0x1099b0fcu));
    wr32(COW_IMG(0x1099b0fcu), eax + 1u);
    if (eax + 1u != 1u)
    {
        eax = eax + 1u;
        edx = in_edx;
        goto L_10271f2b;
    }
    eax = eax + 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x1028ec90u), 3, COW_IMG(0x1099b13cu), eax, eax);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_10271f08: ;
    if ((int32_t)eax <= 1)
    {
        edx = in_edx;
    }
    else
    {
        t3 = rd32(COW_IMG(0x1099b0fcu)) - 1u;
        t4 = rd32(COW_IMG(0x1099b0fcu));
        wr32(COW_IMG(0x1099b0fcu), t3);
        if (t4 != 1u)
        {
            eax = t3;
            edx = in_edx;
        }
        else
        {
            eax = t3;
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0;
            t5 = cow_cdecl(g, COW_IMG(0x1028ec90u), 3, COW_IMG(0x1099b13cu), 1u, 0u);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
L_10271f2b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10271ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10271ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
