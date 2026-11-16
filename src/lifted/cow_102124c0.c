/* f_0x102124c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102124c0(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x24u);
    wr32(self, COW_IMG(0x1033bcbcu));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = t1;
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t2 = rd32(ecx);
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, rd32(t2 + 0xcu), ecx, 1, 1u);
        t4 = g->edx;
        wr32(self + 0x24u, 0u);
        eax = t3;
        edx = t4;
    }
    wr32(self, COW_IMG(0x1033bcc8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10211e80u), self + 4u, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, self);
        t8 = g->edx;
        edx = t8;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102124c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102124c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
