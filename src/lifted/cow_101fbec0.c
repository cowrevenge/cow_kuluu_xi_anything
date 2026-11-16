/* f_0x101fbec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fbec0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
        goto L_101fc04e;
    }
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    wr32(sp0 - 0x18u, 0u);
    t2 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x106u);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x10u, t2 * 0x140u);
    eax = t2 * 0x140u;
    edx = t2;
    ebx = rd32(sp0 - 0xcu);
    ebp = rd32(sp0 - 8u) + 0x10u;
    esi = rd32(sp0 - 6u) + 5u;
    loc_18 = 0u;
    loc_14 = t2;
    loc_10 = t2 * 0x140u;
L_101fbf2f: ;
    t3 = eax + rd32(COW_IMG(0x10663888u)) + 0x174u;
    wr32(sp0 - 0xcu, t3);
    if (edx > 3u)
    {
        eax = t3;
        loc_c = t3;
        goto L_101fbf55;
    }
    eax = t3;
    loc_c = t3;
    t4 = rd32(COW_IMG(0x101fc054u) + edx * 4u);
    switch (t4 - RD)
    {
    case 0x101fbf4cu: goto L_101fbf4c;
    case 0x101fbfc7u: goto L_101fbfc7;
    case 0x101fbfedu: goto L_101fbfed;
    default: rt_fatal(g, COW_IMG(0x101fbf45u), "switch");
    }
    return 0;
L_101fbf2b: ;
    eax = loc_10;
    goto L_101fbf2f;
L_101fbf4c: ;
    if ((int8_t)rd8(eax) >= 0)
    {
        ebx = edx * 2u;
    }
    else
    {
        ebx = edx * 2u + 1u;
    }
L_101fbf55: ;
    if ((int32_t)ebx < 0) goto L_101fbf87;
L_101fbf59: ;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x44u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x80808080u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, (uint32_t)(int16_t)esi);
    wr32(sp0 - 0x48u, (uint32_t)(int16_t)ebp);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(ebx * 4u + self + 0x18u), 8, (uint32_t)(int16_t)ebp, (uint32_t)(int16_t)esi, 0x3f800000u, 0x3f800000u, 0x80808080u, 0u, 0x44u, 0u);
    eax = rd32(sp0 - 0xcu);
    edx = rd32(sp0 - 0x14u);
L_101fbf87: ;
    if (rd32(self + 0x38u) == 0u) goto L_101fc005;
    ecx = rd32(self + 0x38u);
    if (rd32(self + 0x14u) != loc_18) goto L_101fc001;
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 0x44u);
    t5 = (uint32_t)(int16_t)esi + 2u;
    wr32(sp0 - 0x34u, t5);
    t6 = (uint32_t)(int16_t)ebp + 0xfu;
    wr32(sp0 - 0x38u, t6);
    g->edx = t5;
    g->esp = sp0 - 0x28u;
    t7 = cow_call_regs(g, COW_IMG(0x101c6060u), t6, ecx, g->edx, 1, 4, t6, t5, 0x44u, 1u);
    t8 = g->edx;
    wr32(sp0 - 0x3cu, t7);
    g->edx = t8;
    g->esp = sp0 - 0x38u;
    t9 = cow_call_regs(g, COW_IMG(0x101c6020u), t7, rd32(self + 0x38u), g->edx, 1, 1, t7);
    t10 = g->edx;
    wr32(sp0 - 0x40u, t9);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x38u), 6, t9, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), 0x44u, 1u);
L_101fc028: ;
    edx = rd32(sp0 - 0x14u);
L_101fc02c: ;
    wr32(sp0 - 0x18u, loc_18 + 1u);
    wr32(sp0 - 0x10u, loc_10 + 0x20u);
    if ((int32_t)(loc_18 + 1u) < 10)
    {
        esi = esi + 0x10u;
        loc_18 = loc_18 + 1u;
        loc_10 = loc_10 + 0x20u;
        goto L_101fbf2b;
    }
    eax = loc_18 + 1u;
    ebp = rd32(sp0 - 0x24u);
    esi = rd32(sp0 - 0x28u);
L_101fc04e: ;
    g->esi = esi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101fbfc7: ;
    if ((int8_t)rd8(eax) >= 0) goto L_101fbffc;
    eax = (uint32_t)(int8_t)rd8(rd32(COW_IMG(0x10663888u)) + 0x10eu);
    ebx = ((int32_t)loc_18 >= (int8_t)rd8(rd32(COW_IMG(0x10663888u)) + 0x10eu)) * 2u + 5u;
    goto L_101fbf59;
L_101fbfed: ;
    if ((int8_t)rd8(eax) >= 0) goto L_101fbffc;
    ebx = 7u;
    goto L_101fbf59;
L_101fbffc: ;
    ebx = 0xffffffffu;
    goto L_101fbf87;
L_101fc001: ;
    eax = loc_c;
L_101fc005: ;
    if ((int32_t)ebx < 0) goto L_101fc02c;
    if (rd32(eax + 0x18u) == 0u) goto L_101fc02c;
    eax = rd32(eax + 0x18u);
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x30u, eax);
    wr32(sp0 - 0x34u, esi + 2u);
    wr32(sp0 - 0x38u, ebp + 0xfu);
    wr32(sp0 - 0x3cu, 0x44u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x44u, ebp + 0xfu, esi + 2u, eax, 0x80808080u);
    goto L_101fc028;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fbec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fbec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
