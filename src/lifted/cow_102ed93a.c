/* f_0x102ed93a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ed93a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    wr32(rd32(in_esi) + 0x14u, 0x65u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), self, 0);
    t1 = g->edx;
    if (rd8(rd32(in_esi + 0x190u) + 0x50u) != 0u)
    {
        edx = t1;
        wr32(rd32(in_esi) + 0x14u, 0x3cu);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(in_esi)), 1u, 0);
    }
    eax = in_esi + 0xdau;
    ecx = 0x10u;
L_102ed973: ;
    wr8(eax - 0x10u, 0u);
    wr8(eax, 1u);
    wr8(eax + 0x10u, 5u);
    if (ecx != 1u)
    {
        eax = eax + 1u;
        ecx = ecx - 1u;
        goto L_102ed973;
    }
    t2 = rd32(in_esi + 0x190u);
    wr32(in_esi + 0xfcu, 0u);
    wr32(in_esi + 0x24u, 0u);
    wr8(in_esi + 0x108u, 0u);
    wr8(in_esi + 0x100u, 0u);
    wr8(in_esi + 0x101u, 0u);
    wr8(in_esi + 0x106u, 0u);
    wr8(in_esi + 0x107u, 0u);
    wr16(in_esi + 0x102u, 1u);
    wr16(in_esi + 0x104u, 1u);
    wr8(t2 + 0x50u, 1u);
    return (t2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed93a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed93a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
