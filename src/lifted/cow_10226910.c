/* f_0x10226910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10226910(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x84u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x80u;
    t1 = cow_fastcall(g, COW_IMG(0x102265a0u), self, in_edx, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        wr32(sp0 - 0x84u, eax);
        wr32(sp0 - 0x88u, COW_IMG(0x10386268u));
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        g->ecx = sp0 - 0x80u;
        g->esp = sp0 - 0x78u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x10386268u), eax, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu));
        t3 = g->ecx;
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        g->esp = sp0 - 0x8cu;
        cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10226910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10226910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
