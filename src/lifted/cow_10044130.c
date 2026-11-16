/* f_0x10044130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10044130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10043de0u), 0);
    t2 = g->ecx;
    if (rd32(t1 * 0x20u + t2 + 4u) != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t1 * 0x20u + t2;
        esi = rd32(t1 * 0x20u + t2 + 4u);
        goto L_1004414a;
    }
    return 0u;
L_1004414a: ;
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(edx + 0x14u) == 0u)
    {
        eax = eax * 0x20u + 0x20u;
        goto L_10044178;
    }
    eax = eax * 0x20u + 0x20u;
    edi = rd32(edx + 0x14u);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, sp0 - 4u);
    t3 = rd32(edx + 0x10u);
    wr32(sp0 - 0x1cu, t3);
    t4 = rd32(eax + ecx) * rd32(edx + 0xcu);
    wr32(sp0 - 0x20u, t4);
    wr32(sp0 - 0x24u, esi);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2cu), ecx, 5, esi, t4, t3, sp0 - 4u, edi);
    return self;
L_10044178: ;
    wr32(sp0 - 0x14u, 0x1000u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    t5 = rd32(edx + 0x10u);
    wr32(sp0 - 0x1cu, t5);
    t6 = rd32(eax + ecx) * rd32(edx + 0xcu);
    wr32(sp0 - 0x20u, t6);
    wr32(sp0 - 0x24u, esi);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(esi) + 0x2cu), t6, 5, esi, t6, t5, sp0 - 4u, 0x1000u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10044130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
