/* f_0x100f1ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f1ba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    wr32(self, 0u);
    wr16(self + 0xau, 0u);
    wr16(self + 0xcu, 0u);
    wr16(self + 0xeu, 0u);
    wr16(self + 0x14u, 0u);
    wr16(self + 0x16u, 0u);
    wr16(self + 0x10u, 0u);
    wr16(self + 0x12u, 0u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x24u, 0u);
    wr32(self + 0x1cu, 0u);
    wr16(self + 0x18u, 0u);
    wr8(self + 6u, 0u);
    wr8(self + 7u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100f1e70u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t2, t3, 1, 3, 0x1060u, in_esi, in_ebx);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        eax = 0u;
    }
    else
    {
        eax = t4;
        edx = t6;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    wr32(self + 0x20u, eax);
    g->eax = eax;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1060u, in_esi, in_ebx);
    t11 = g->edx;
    if (t10 == 0u) goto L_100f1c25;
    eax = t10;
    edx = t11;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
    wr32(self + 0x24u, t12);
    wr32(self + 0x1cu, 0u);
    wr16(self + 0x18u, 0u);
    return (t12 & 0xffffff00u) | 1u;
L_100f1c25: ;
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x24u, 0u);
    wr16(self + 0x18u, 0u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f1ba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
