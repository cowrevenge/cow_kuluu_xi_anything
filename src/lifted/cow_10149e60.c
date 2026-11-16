/* f_0x10149e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10149e60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t1 = cow_call_regs(g, COW_IMG(0x100991d0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        wr32(sp0 - 0x4cu, COW_IMG(0x103719d8u));
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        g->ecx = ecx;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x103719d8u), in_edi, in_esi, rd32(sp0 - 0x40u));
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = t1;
        edx = t3;
        t4 = rd8(eax + 2u) & 0x7fu;
        wr32(sp0 - 0x4cu, t4);
        wr32(sp0 - 0x50u, COW_IMG(0x103719dcu));
        wr32(sp0 - 0x54u, sp0 - 0x40u);
        g->ecx = sp0 - 0x40u;
        g->edx = edx;
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x103719dcu), t4, in_edi, in_esi);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 0x80808080u);
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    t9 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x1eu) + 0xeu);
    wr32(sp0 - 0x60u, t9);
    t10 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x20u) - 8u);
    wr32(sp0 - 0x64u, t10);
    g->edx = t10;
    g->esp = sp0 - 0x48u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t9, 7, t10, t9, sp0 - 0x40u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t11 = g->edx;
    if ((int32_t)rd32(self + 0x18u) < 6)
    {
        eax = rd32(self + 0x18u);
        edx = t11;
        goto L_10149edf;
    }
    eax = rd32(self + 0x18u);
    edx = t11;
    if (eax == 0x1au) goto L_10149edf;
    edi = eax + 0x1au;
L_10149ee1: ;
    wr32(sp0 - 0x4cu, 0x80808080u);
    t12 = (uint32_t)(int16_t)rd16(self + 0x20u) - 8u;
    wr32(sp0 - 0x50u, t12);
    wr32(sp0 - 0x54u, eax);
    g->esi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t13 = cow_thiscall(g, COW_IMG(0x10149d40u), self, 3, eax, t12, 0x80808080u);
    t14 = g->edx;
    if (edi == 0u)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        wr32(sp0 - 0x4cu, 0x80909040u);
        t15 = (uint32_t)(int16_t)rd16(self + 0x20u) - 0x40u;
        wr32(sp0 - 0x50u, t15);
        wr32(sp0 - 0x54u, edi);
        g->esi = self;
        g->eax = eax;
        g->edx = t15;
        g->esp = sp0 - 0x48u;
        t16 = cow_thiscall(g, COW_IMG(0x10149d40u), self, 3, edi, t15, 0x80909040u);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    g->edx = edx;
    return eax;
L_10149edf: ;
    edi = 0u;
    goto L_10149ee1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149e60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
