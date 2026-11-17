/* f_0x10018140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10018140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1040u);

    wr32(sp0 - 0x404u, arg1);
    wr32(sp0 - 0x408u, 1u);
    wr32(sp0 - 0x40cu, 7u);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x404u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x408u, t1);
    wr32(sp0 - 0x40cu, sp0 - 0x400u);
    g->edx = t2;
    g->esp = sp0 - 0x3f8u;
    t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, t1, arg1, rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t4 = g->edx;
    if (rd32(COW_IMG(0x10668ff8u)) == 0u)
    {
        edx = t4;
    }
    else
    {
        eax = t3;
        ecx = rd32(COW_IMG(0x10668ff8u));
        wr32(sp0 - 0x404u, sp0 - 0x400u);
        g->edx = sp0 - 0x400u;
        g->esp = sp0 - 0x400u;
        cow_thiscall(g, COW_IMG(0x1023c160u), ecx, 1, sp0 - 0x400u);
        t5 = g->edx;
        edx = t5;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10018140(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
