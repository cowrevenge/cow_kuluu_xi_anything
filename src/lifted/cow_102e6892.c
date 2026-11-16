/* f_0x102e6892 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102e6892(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328323u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e689cu));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x14u, self);
    wr32(self, COW_IMG(0x1034619cu));
    wr32(sp0 - 8u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x102e55b1u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(self + 0x106cu) == 0u)
    {
        eax = rd32(self + 0x106cu);
        edx = t3;
    }
    else
    {
        eax = rd32(self + 0x106cu);
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x1cu, eax);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x102e1799u), self, edx, 0);
    t6 = rd32(sp0 - 0x10u);
    wr32(g->fs_base, t6);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e6892(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102e6892(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
