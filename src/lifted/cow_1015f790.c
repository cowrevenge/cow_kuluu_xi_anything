/* f_0x1015f790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015f790(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(arg1) == 0u)
    {
        eax = arg1;
        goto L_1015f8e3;
    }
    edi = rd32(arg1);
    if (rd32(edi + 8u) == 0u)
    {
        eax = arg1;
        goto L_1015f8e3;
    }
    if (arg2 == 0u)
    {
        eax = arg1;
        goto L_1015f8e3;
    }
    if (rd32(arg2 + 0xcu) == 0u)
    {
        eax = rd32(arg2 + 0xcu);
        goto L_1015f8e3;
    }
    eax = rd32(arg2 + 0xcu);
    if (rd32(eax + 8u) == 0u) goto L_1015f8e3;
    if (rd32(COW_IMG(0x105781ccu)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781ccu));
        edx = in_edx;
        goto L_1015f7ee;
    }
    eax = rd32(COW_IMG(0x105781ccu));
    if (rd8(eax + 0x48u) == 0u)
    {
        edx = in_edx;
        goto L_1015f7ee;
    }
    wr32(sp0 - 0x28u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1015f8e3;
    }
    eax = t1;
    edx = t2;
L_1015f7ee: ;
    if (rd32(edi + 8u) == arg2) goto L_1015f8e3;
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(edi + 8u), g->edx, 0, 1, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10118f70u), t3, arg2, g->edx, 0, 1, sp0 - 0x18u);
    t4 = g->edx;
    t5 = rd32(arg2 + 0xc0u);
    wr32(sp0 - 4u, t5);
    t6 = rd32(arg2 + 0xbcu);
    wr32(sp0 - 8u, t6);
    t7 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(edi + 8u), 0);
    if (t7 == 0u) goto L_1015f87e;
    eax = t7;
    if (rd8(eax + 0x44u) == 2u) goto L_1015f869;
    eax = (eax & 0xffffff00u) | rd8(eax + 0x44u);
    if ((uint8_t)eax != 1u) goto L_1015f87e;
L_1015f869: ;
    eax = (uint32_t)(int16_t)rd16(sp0 - 0xau);
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x12u);
    edi = (uint32_t)(int16_t)rd16(sp0 - 0xau) + (uint32_t)(int16_t)rd16(sp0 - 0x16u) - (uint32_t)(int16_t)rd16(sp0 - 0x12u);
L_1015f893: ;
    if (rd16(sp0 - 6u) == rd16(sp0 - 2u))
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 - 6u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 - 6u);
        if ((int32_t)edi >= (int16_t)eax)
        {
            eax = (uint32_t)(int16_t)eax;
        }
        else
        {
            eax = (uint32_t)(int16_t)eax;
            edi = eax;
        }
    }
    if ((int32_t)edi < 16)
    {
        edi = 0x10u;
    }
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, 0u);
    g->esp = sp0 - 0x28u;
    t8 = cow_call_regs(g, COW_IMG(0x10119110u), eax, arg2, g->edx, 0, 2, 0u, edi);
    if (rd32(arg2 + 0x88u) == 0u)
    {
        eax = t8;
        ebp = rd32(sp0 - 0x28u);
    }
    else
    {
        ebp = rd32(sp0 - 0x28u);
        esi = rd32(arg2 + 0x88u);
        t9 = (uint32_t)(int16_t)(rd32(sp0 - 0x14u) - 8u);
        wr32(esi, t9);
        wr32(esi + 4u, (uint32_t)(int16_t)edi);
        eax = (uint32_t)(int16_t)edi;
    }
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = ebp;
    return (eax & 0xffffff00u) | 1u;
L_1015f87e: ;
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x16u);
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x12u);
    edi = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + (uint32_t)(int16_t)rd16(sp0 - 0x16u) - (uint32_t)(int16_t)rd16(sp0 - 0x12u) - 2u;
    goto L_1015f893;
L_1015f8e3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015f790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015f790(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
