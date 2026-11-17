/* f_0x1015e090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015e090(Guest* g)
{
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x38u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        edx = t2;
        loc_4 = t1;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_1015e0d3;
    }
    edx = t2;
    loc_4 = t1;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
L_1015e0aa: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->edx;
    wr32(sp0 - 0x14u, 0x10u);
    wr32(sp0 - 0x18u, t3 + 4u);
    wr32(sp0 - 0x1cu, arg1);
    g->edx = t4;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10312980u), 5, arg1, t3 + 4u, 0x10u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        esi = t3;
        goto L_1015e0dc;
    }
    edx = t6;
    if (rd32(sp0 - 4u) != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1015e0aa;
    }
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_1015e0d3: ;
    g->ebx = loc_8;
    g->esi = loc_c;
    g->edi = loc_10;
    g->edx = edx;
    return 0u;
L_1015e0dc: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015e090(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
