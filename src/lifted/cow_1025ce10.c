/* f_0x1025ce10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1025ce10(Guest* g)
{
    double d6;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if ((int32_t)rd32(sp0 + 8u) <= 0)
    {
        edx = in_edx;
        ebx = 0u;
        goto L_1025ce57;
    }
    ebx = 0u;
    ebp = rd32(sp0 + 8u);
    esi = 0u;
L_1025ce25: ;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    t1 = (arg1 & 0xffff0000u) | rd16(arg1 + esi * 2u);
    wr32(sp0 - 0x20u, t1);
    g->edx = t1;
    t2 = rd32(self + 4u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(t2) + 0x18u), t2, 2, t1, sp0 - 8u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = (uint32_t)(int8_t)rd8(sp0 - 4u);
    wr32(sp0 + 8u, t5);
    g->edx = t4;
    d6 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(self + 0xcu));
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)ebp)
    {
        ebx = ebx + t7;
        esi = esi + 1u;
        goto L_1025ce25;
    }
    edx = t8;
    ebx = ebx + t7;
L_1025ce57: ;
    g->edx = edx;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ce10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025ce10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
