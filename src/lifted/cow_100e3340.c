/* f_0x100e3340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100e3340(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    if (arg1 != 0u)
    {
        wr32(arg1, 0u);
    }
    wr32(arg2, 0u);
    if (rd32(COW_IMG(0x10662dccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662dccu));
        wr32(sp0 - 0x9cu, 0u);
        wr32(sp0 - 0xa0u, 0u);
        wr32(sp0 - 0xa4u, 0x90u);
        wr32(sp0 - 0xa8u, sp0 - 0x90u);
        wr32(sp0 - 0xacu, COW_IMG(0x10361d88u));
        g->eax = sp0 - 0x90u;
        g->esp = sp0 - 0x98u;
        t1 = cow_thiscall(g, COW_IMG(0x101c4790u), ecx, 5, COW_IMG(0x10361d88u), sp0 - 0x90u, 0x90u, 0u, 0u);
        if (t1 >= 0x90u)
        {
            wr32(sp0 - 0x9cu, arg3);
            wr32(sp0 - 0xa0u, sp0 - 0x84u);
            wr32(sp0 - 0xa4u, arg2);
            t2 = rd32(sp0 - 4u);
            wr32(arg1, t2);
            g->esp = sp0 - 0x98u;
            cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x84u, g->ecx, g->edx, 1, 3, arg2, sp0 - 0x84u, arg3);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e3340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100e3340(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
