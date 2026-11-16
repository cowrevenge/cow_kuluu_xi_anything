/* f_0x1030491c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1030491c(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = 1u << (rd32(rd32(sp0 + 4u) + 0x174u) & 0x1fu);
    wr32(sp0 - 8u, t1);
    if (rd32(rd32(sp0 + 4u) + 0xfcu) == 0u)
    {
        esi = rd32(rd32(sp0 + 4u) + 0x194u);
        edi = rd32(sp0 + 4u);
        loc_8 = t1;
        goto L_10304958;
    }
    ecx = rd32(rd32(sp0 + 4u) + 0x174u);
    esi = rd32(rd32(sp0 + 4u) + 0x194u);
    edi = rd32(sp0 + 4u);
    loc_8 = t1;
    if (rd32(esi + 0x34u) != 0u) goto L_10304958;
    g->edi = edi;
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    t2 = cow_stdcall(g, COW_IMG(0x1030449bu), 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_103049fa;
    }
L_10304958: ;
    wr32(sp0 - 0x14u, edi);
    t4 = rd32(rd32(edi + 0x14u));
    wr32(sp0 - 0x30u, t4);
    t5 = rd32(rd32(edi + 0x14u) + 4u);
    wr32(sp0 - 0x2cu, t5);
    t6 = rd32(edi + 0x178u);
    wr32(sp0 - 0x28u, t6);
    wr32(sp0 - 0x10u, esi + 0x18u);
    t7 = rd32(esi + 0x10u);
    t8 = rd32(esi + 0x14u);
    t9 = rd32(edi + 0x13cu);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t9 <= 0)
    {
        eax = t7;
        ecx = t8;
        loc_30 = t4;
        loc_2c = t5;
        loc_28 = t6;
        goto L_103049d0;
    }
    eax = t7;
    ecx = t8;
    loc_30 = t4;
    loc_2c = t5;
    loc_28 = t6;
L_10304989: ;
    if ((int32_t)ecx >= 1)
    {
        ebx = rd32(arg2 + rd32(sp0 + 4u) * 4u);
        cf = ecx < 1u;
        goto L_103049b1;
    }
    ebx = rd32(arg2 + rd32(sp0 + 4u) * 4u);
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x44u, ecx);
    wr32(sp0 - 0x48u, eax);
    wr32(sp0 - 0x4cu, sp0 - 0x30u);
    g->esp = sp0 - 0x3cu;
    t10 = cow_call_regs(g, COW_IMG(0x10303d33u), g->eax, g->ecx, arg2, 1, 4, sp0 - 0x30u, eax, ecx, 1u);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_103049fa;
    }
    eax = rd32(sp0 - 0x24u);
    ecx = rd32(sp0 - 0x18u);
    cf = 0u;
L_103049b1: ;
    if (!((uint32_t)((int32_t)eax >> ((ecx - 1u & 0x1fu) < 0x20u ? ecx - 1u & 0x1fu : 0x1fu)) & 1u))
    {
        ecx = ecx - 1u;
    }
    else
    {
        edx = (uint32_t)((int32_t)eax >> ((ecx - 1u & 0x1fu) < 0x20u ? ecx - 1u & 0x1fu : 0x1fu));
        ecx = ecx - 1u;
        wr16(ebx, (uint16_t)(rd16(ebx) | loc_8));
    }
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    if ((int32_t)rd32(sp0 + 4u) < (int32_t)rd32(edi + 0x13cu)) goto L_10304989;
L_103049d0: ;
    wr32(rd32(edi + 0x14u), loc_30);
    wr32(rd32(edi + 0x14u) + 4u, loc_2c);
    wr32(edi + 0x178u, loc_28);
    wr32(esi + 0x34u, rd32(esi + 0x34u) - 1u);
    wr32(esi + 0x10u, eax);
    wr32(esi + 0x14u, ecx);
    eax = (eax & 0xffffff00u) | 1u;
    edx = loc_28;
    loc_4 = in_ebp;
    loc_34 = in_ebx;
    loc_38 = in_esi;
    loc_3c = in_edi;
L_103049f5: ;
    g->ebx = loc_34;
    g->esi = loc_38;
    g->edi = loc_3c;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_103049fa: ;
    eax = eax & 0xffffff00u;
    goto L_103049f5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030491c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030491c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
