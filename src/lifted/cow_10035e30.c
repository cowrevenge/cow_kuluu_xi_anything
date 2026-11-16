/* f_0x10035e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10035e30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x1046391cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1046391cu));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x48u, 4u);
        t2 = g->edx;
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x100748f0u), t1, t2, 0);
        t3 = g->edx;
        wr8(COW_IMG(0x1047d13cu), 1u);
        if (t1 != 0u)
        {
            edx = t3;
            esi = t1;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t4 = cow_call_regs(g, COW_IMG(0x10035a00u), arg2, esi, g->edx, 0, 3, arg1, arg2, 8u);
            t5 = g->edx;
            if (t4 != 0u)
            {
                eax = t4;
                edx = t5;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x100749b0u), eax, 1, 5u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10035e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10035e30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
