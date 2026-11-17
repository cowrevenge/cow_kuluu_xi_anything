/* f_0x100e08d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e08d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x1a6a0u) == 0xffffu)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
        goto L_100e0980;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = (self & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x1a6a0u);
    if (rd16(eax + (uint32_t)(int16_t)ecx * 0x1cu + 0x1a6a8u) == 0xffffu)
    {
        edx = (uint32_t)(int16_t)ecx * 8u - (uint32_t)(int16_t)ecx;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
        goto L_100e0980;
    }
    edx = (uint32_t)(int16_t)ecx * 8u - (uint32_t)(int16_t)ecx;
    ecx = (uint32_t)(int16_t)ecx;
    if (ecx == 0xffffffffu)
    {
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
        goto L_100e0980;
    }
    edi = ecx;
    loc_24 = in_ebx;
    loc_28 = in_ebp;
    loc_2c = in_esi;
    loc_30 = in_edi;
L_100e0916: ;
    wr32(sp0 - 0x34u, arg1);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x100e09a0u), eax, edi * 8u - edi, g->edx, 1, 8, sp0 - 0x10u, arg1, loc_30, loc_2c, loc_28, loc_24, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t1 = g->edx;
    t2 = eax + edi * 0x1cu + 0x1a6b0u;
    wr32(sp0 - 0x3cu, t2);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->edx = t1;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x100e09a0u), t2, sp0 - 0x20u, g->edx, 1, 8, sp0 - 0x20u, t2, sp0 - 0x10u, arg1, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t3 = g->ecx;
    t4 = g->edx;
    ecx = t3;
    edx = t4;
    ebp = eax + edi * 0x1cu + 0x1a6a4u;
    eax = sp0 - 0x10u;
    esi = sp0 - 0x20u;
L_100e094a: ;
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_100e096e;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_100e096a;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100e096e;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100e094a;
    }
L_100e096a: ;
    eax = 0u;
L_100e0973: ;
    if (eax == 0u) goto L_100e098b;
    if ((uint32_t)(int16_t)rd16(ebp) != 0xffffffffu)
    {
        edi = (uint32_t)(int16_t)rd16(ebp);
        goto L_100e0911;
    }
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
L_100e0980: ;
    g->ebx = loc_24;
    g->esi = loc_2c;
    g->edi = loc_30;
    g->ebp = loc_28;
    g->edx = edx;
    return 0xffffffffu;
L_100e0911: ;
    eax = rd32(COW_IMG(0x104dfd98u));
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    goto L_100e0916;
L_100e096e: ;
    eax = -cf + 1u - cf;
    goto L_100e0973;
L_100e098b: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e08d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e08d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
