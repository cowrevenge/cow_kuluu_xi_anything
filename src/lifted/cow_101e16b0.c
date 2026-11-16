/* f_0x101e16b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e16b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x14u, self);
    edx = in_edx;
    ebx = 0u;
    ebp = (in_ebp & 0xffff0000u) | rd16(self + 0x14u);
    esi = self;
    edi = (in_edi & 0xffff0000u) | rd16(self + 0x18u);
L_101e16c7: ;
    if (ebx == 6u)
    {
        ebp = (ebp & 0xffff0000u) | rd16(esi + 0x16u);
        edi = (edi & 0xffff0000u) | rd16(esi + 0x18u);
    }
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x80808080u);
    wr32(sp0 - 0x34u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)ebp);
    g->edx = edx;
    t1 = rd32(ebx * 4u + esi + 0x1cu);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), t1, 5, (uint32_t)(int16_t)ebp, (uint32_t)(int16_t)edi, 0x80808080u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd16(COW_IMG(0x10485704u) + ebx * 2u) == 0xffffu)
    {
        eax = rd16(COW_IMG(0x10485704u) + ebx * 2u);
        edx = t3;
    }
    else
    {
        eax = rd16(COW_IMG(0x10485704u) + ebx * 2u);
        ecx = t2;
        t4 = (uint32_t)((int32_t)eax >> 5u) & 0x3ffu;
        wr32(sp0 - 0x28u, t4);
        wr32(sp0 - 0x2cu, COW_IMG(0x10352ff0u));
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        g->ebx = ebx;
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t4, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t5 = g->edx;
        wr32(sp0 - 0x34u, 0x3f800000u);
        wr32(sp0 - 0x38u, 0x3f800000u);
        wr32(sp0 - 0x3cu, 1u);
        t6 = (-((eax & 0x8000u) != 0u) & 0xff9fe020u) - 0x7f7f7f80u;
        wr32(sp0 - 0x40u, t6);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, edi);
        wr32(sp0 - 0x4cu, ebp + 0x4bu);
        g->eax = sp0 - 0x10u;
        g->edx = t5;
        g->esp = sp0 - 0x30u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ebp + 0x4bu, 7, ebp + 0x4bu, edi, sp0 - 0x10u, t6, 1u, 0x3f800000u, 0x3f800000u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
        esi = rd32(sp0 - 0x14u);
    }
    if ((int32_t)(ebx + 1u) < 9)
    {
        ebx = ebx + 1u;
        edi = edi + 0xfu;
        goto L_101e16c7;
    }
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e16b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e16b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
