/* f_0x10029d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10029d30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x103299f0u));
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10034230u), self + 8u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    ebx = 7u;
    edi = self + 0x24u;
L_10029d4b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1001abf0u), edi, 0);
    t4 = g->edx;
    if (ebx != 1u)
    {
        eax = t3;
        edx = t4;
        ebx = ebx - 1u;
        edi = edi + 0x14u;
        goto L_10029d4b;
    }
    wr32(self, COW_IMG(0x1032a710u));
    wr32(self + 4u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0xc0u, 0u);
    wr32(self + 0xb0u, rd32(COW_IMG(0x103514f4u)));
    wr32(self + 0xb4u, rd32(COW_IMG(0x103514f8u)));
    t5 = rd32(COW_IMG(0x103514fcu));
    wr32(self + 0xb8u, t5);
    wr32(self + 0xbcu, 0xbf800000u);
    wr32(self + 0xc4u, 0xffffffffu);
    g->edx = t5;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10029d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10029d30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
