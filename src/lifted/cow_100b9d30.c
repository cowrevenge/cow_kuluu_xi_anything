/* f_0x100b9d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9d30(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    t2 = g->edx;
    if ((uint16_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100b9d68;
    }
    edx = t2;
    t3 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = edx;
    t4 = rd32(COW_IMG(0x10578204u));
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t6 = g->edx;
    cow_thiscall(g, COW_IMG(0x1013bf40u), t4, 0);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
L_100b9d68: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1013e520u), eax, rd32(COW_IMG(0x10578204u)), edx, 0, 3, eax, 0u, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9d30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
