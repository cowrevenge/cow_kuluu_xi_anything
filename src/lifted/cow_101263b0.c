/* f_0x101263b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101263b0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    if ((int32_t)rd32(self + 0x18u) <= 8) goto L_101263ea;
    t1 = rd32(rd32(self + 0xcu) + 0xcu);
    t2 = rd32(self + 0xcu);
    wr32(self + 0xcu, t1);
    wr32(t1 + 8u, 0u);
    t3 = rd32(self + 0x18u) - 1u;
    wr32(self + 0x18u, t3);
    eax = t2;
    edx = in_edx;
L_101263cf: ;
    t8 = rd32(self + 0x14u) + 1u;
    wr32(self + 0x14u, t8);
    wr8(eax + 0x14u, 0u);
    wr32(eax + 8u, 0u);
    wr32(eax + 0xcu, 0u);
    wr32(eax, 0u);
    wr32(eax + 4u, 0u);
    wr32(eax + 0x10u, 0u);
    g->edx = edx;
    return eax;
L_101263ea: ;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x18u, in_esi, in_ebx);
    t5 = g->edx;
    if (t4 == 0u)
    {
        edx = t5;
        goto L_10126405;
    }
    eax = t4;
    edx = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x10126300u), eax, 0);
    t7 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101263cf;
    }
    edx = t7;
L_10126405: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101263b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101263b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
