/* f_0x102579d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102579d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = arg1;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    esi = COW_IMG(0x1033ce74u);
L_102579e1: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_10257a09;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_10257a05;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_10257a09;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_102579e1;
    }
L_10257a05: ;
    eax = 0u;
L_10257a0e: ;
    if (eax != 0u) goto L_10257b07;
    wr32(self + 4u, arg1);
    if (rd16(arg1 + 8u) != 0x10u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        goto L_10257a32;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    wr32(self + 0xcu, arg1 + 0x40u);
    return eax;
L_10257a09: ;
    eax = -cf + 1u - cf;
    goto L_10257a0e;
L_10257a32: ;
    if ((uint16_t)eax != 1u)
    {
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10257330u), eax, g->ecx, g->edx, 1, 3, arg1, in_edi, in_esi);
    }
    if (rd16(rd32(self + 4u) + 0xcu) != 3u)
    {
        eax = rd32(self + 4u);
        goto L_10257b04;
    }
    eax = rd32(self + 4u);
    if (rd16(eax + 0xeu) != 0u) goto L_10257b04;
    if (rd32(eax + 0x1cu) == 0u)
    {
        wr32(self + 0xcu, eax + 0x40u);
    }
    else
    {
        wr32(self + 8u, eax + 0x40u);
        t1 = eax + rd32(eax + 0x28u) * 8u + 0x40u;
        wr32(self + 0xcu, t1);
        t2 = rd32(eax + 0x28u) << 3u;
        t3 = rd16(eax + 0xau);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10257300u), g->eax, g->ecx, t2, 1, 3, t3, eax + 0x40u, t2);
    }
    if (rd32(rd32(self + 4u) + 0x28u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10257b07;
    }
    eax = rd32(self + 4u);
    ebx = 0u;
L_10257a94: ;
    if (rd32(eax + 0x1cu) == 0u)
    {
        t5 = rd32(eax + 0x20u);
        eax = t5;
        esi = t5 * ebx;
    }
    else
    {
        ecx = rd32(eax + 0x1cu);
        if (rd16(eax + 8u) != 1u)
        {
            t4 = ebx * 8u + rd32(self + 8u);
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x102573e0u), 3, t4, in_edi, in_esi);
        }
        eax = rd32(ebx * 8u + rd32(self + 8u) + 4u);
        esi = rd32(ebx * 8u + rd32(self + 8u));
    }
    t6 = esi + rd32(self + 0xcu);
    t7 = rd16(rd32(self + 4u) + 0xau);
    g->eax = t7;
    t8 = rd32(self + 4u);
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x10257300u), g->eax, g->ecx, t8, 1, 3, t7, t6, eax);
    t10 = g->edx;
    if (rd16(rd32(self + 4u) + 8u) != 1u)
    {
        eax = t9;
        ecx = rd32(self + 4u);
        edx = t10;
        esi = t6;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10257400u), eax, g->ecx, g->edx, 1, 1, esi);
    }
    if (ebx + 1u < rd32(rd32(self + 4u) + 0x28u))
    {
        eax = rd32(self + 4u);
        ebx = ebx + 1u;
        goto L_10257a94;
    }
    eax = rd32(self + 4u);
    return eax;
L_10257b04: ;
    wr32(self + 4u, 0u);
L_10257b07: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102579d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102579d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
