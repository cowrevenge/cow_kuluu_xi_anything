/* f_0x1011fa80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011fa80(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0xcu, sp0 - 4u);
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, t2, 0, 1, sp0 - 4u);
    if (t3 != 0u)
    {
        eax = t3;
        goto L_1011faa5;
    }
    eax = t3;
    return eax;
L_1011faa5: ;
    wr32(sp0 - 0xcu, in_edi);
    ecx = 0u;
    edx = eax + 0x68u;
L_1011faaf: ;
    t4 = rd32(edx - 4u);
    wr32(arg1 + ecx * 8u, t4);
    wr32(arg1 + ecx * 8u + 4u, rd32(edx));
    if ((int32_t)(ecx + 1u) < 4)
    {
        ecx = ecx + 1u;
        edx = edx + 0x1cu;
        goto L_1011faaf;
    }
    edx = edx + 0x1cu;
    t5 = rd16(eax + 0xc2u);
    t6 = rd16(eax + 0xc0u);
    wr16(arg2, (uint16_t)(((edx & 0xffff0000u) | (uint16_t)(t5 - t6)) - 1u));
    wr16(arg2 + 2u, (uint16_t)(((((edx & 0xffff0000u) | (uint16_t)(t5 - t6)) - 1u & 0xffff0000u) | (uint16_t)(rd16(eax + 0xccu) - rd16(eax + 0xc8u))) - 1u));
    return eax + 0x32u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011fa80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011fa80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
