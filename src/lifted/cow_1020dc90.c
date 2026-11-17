/* f_0x1020dc90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020dc90(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    edx = in_edx;
    ebx = self + 0x18u;
    esi = 0u;
    loc_14 = in_ebx;
    loc_18 = in_ebp;
    loc_1c = in_esi;
    loc_20 = in_edi;
L_1020dcb2: ;
    wr32(sp0 - 0x24u, (uint32_t)(int16_t)rd16(ebx));
    wr32(sp0 - 0x28u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x2cu, sp0 - 8u);
    g->ebx = ebx;
    g->eax = (uint32_t)(int16_t)rd16(ebx);
    t1 = rd16(ebx);
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 8u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)t1, loc_20, loc_1c);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, esi + 1u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->ebx = ebx;
    g->edi = esi + 1u;
    g->esp = sp0 - 0x20u;
    t3 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, esi + 1u, 1u, 1u);
    if (rd8(self + 0x14u) == 0u)
    {
        edi = esi + 1u;
        goto L_1020dcff;
    }
    edi = esi + 1u;
    if ((uint32_t)(int8_t)rd8(self + 0x16u) != esi) goto L_1020dcff;
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x80a06040u);
    loc_30 = 0x80a06040u;
L_1020dd10: ;
    wr32(sp0 - 0x34u, sp0 - 8u);
    t4 = rd32(sp0 - 0xeu) + 2u;
    wr32(sp0 - 0x38u, t4);
    t5 = rd32(sp0 - 0xcu) - 2u;
    wr32(sp0 - 0x3cu, t5);
    g->eax = t5;
    g->edx = t4;
    g->esp = sp0 - 0x20u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 8u, 7, t5, t4, sp0 - 8u, loc_30, 1u, 0x3f800000u, 0x3f800000u);
    t7 = g->edx;
    if ((int32_t)edi < 2)
    {
        edx = t7;
        ebx = ebx + 2u;
        esi = edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_1020dcb2;
    }
    eax = t6;
    edx = t7;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
L_1020dcff: ;
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x80808080u);
    loc_30 = 0x80808080u;
    goto L_1020dd10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020dc90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020dc90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
