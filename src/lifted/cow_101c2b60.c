/* f_0x101c2b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c2b60(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 868u);

    wr32(sp0 - 0x344u, in_ebx);
    wr32(sp0 - 0x348u, in_ebp);
    wr32(sp0 - 0x34cu, in_esi);
    wr32(sp0 - 0x350u, in_edi);
    if (rd8(self + 0xd0u) == 0u)
    {
        wr32(sp0 - 0x354u, self + 0x1f4u);
        wr32(sp0 - 0x358u, COW_IMG(0x1037cbb4u));
        wr32(sp0 - 0x35cu, sp0 - 0x340u);
        g->ecx = sp0 - 0x340u;
        g->esp = sp0 - 0x348u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x340u, COW_IMG(0x1037cbb4u), self + 0x1f4u, in_edi, in_esi);
        t2 = g->ecx;
        ecx = t2;
    }
    else
    {
        wr32(sp0 - 0x354u, self + 0x1f4u);
        wr32(sp0 - 0x358u, self + 0xd0u);
        wr32(sp0 - 0x35cu, COW_IMG(0x1037cbbcu));
        wr32(sp0 - 0x360u, sp0 - 0x340u);
        g->ecx = self + 0x1f4u;
        g->esp = sp0 - 0x34cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x340u, COW_IMG(0x1037cbbcu), self + 0xd0u, self + 0x1f4u, in_edi);
        t1 = g->ecx;
        ecx = t1;
    }
    wr32(sp0 - 0x354u, arg1);
    wr32(sp0 - 0x358u, COW_IMG(0x1036f1a0u));
    wr32(sp0 - 0x35cu, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = arg1;
    g->esp = sp0 - 0x348u;
    t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1036f1a0u), arg1, rd32(sp0 - 0x350u), rd32(sp0 - 0x34cu));
    t4 = g->edx;
    g->esp = sp0 - 0x350u;
    t5 = cow_thiscall(g, COW_IMG(0x101c33e0u), self, 0);
    wr32(sp0 - 0x354u, sp0 - 0x240u);
    wr32(sp0 - 0x358u, sp0 - 0x340u);
    g->edx = sp0 - 0x340u;
    t6 = cow_thiscall(g, rd32(COW_IMG(0x10329128u)), sp0 - 0x240u, 2, sp0 - 0x340u, sp0 - 0x240u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0xffffffffu)
    {
        eax = t6;
        edx = t8;
        goto L_101c2c46;
    }
    ecx = t7;
    edx = t8;
    ebp = t6;
    ebx = rd32(COW_IMG(0x10329120u));
L_101c2bf5: ;
    eax = sp0 - 0x214u;
    esi = sp0 - 0x100u;
L_101c2c03: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_101c2c27;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_101c2c23;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_101c2c27;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_101c2c03;
    }
L_101c2c23: ;
    eax = 0u;
L_101c2c2c: ;
    if (eax == 0u) goto L_101c2c5c;
    wr32(sp0 - 0x354u, sp0 - 0x240u);
    wr32(sp0 - 0x358u, ebp);
    g->eax = sp0 - 0x240u;
    g->edx = edx;
    g->esp = sp0 - 0x350u;
    t9 = cow_thiscall(g, ebx, ecx, 2, ebp, sp0 - 0x240u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_101c2bf5;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0x354u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x350u;
    t12 = cow_thiscall(g, rd32(COW_IMG(0x1032911cu)), ecx, 1, ebp);
    t13 = g->edx;
    eax = t12;
    edx = t13;
L_101c2c46: ;
    g->eax = eax;
    g->esp = sp0 - 0x350u;
    t17 = cow_thiscall(g, COW_IMG(0x101c33f0u), self, 0);
    g->ebx = rd32(sp0 - 0x344u);
    g->esi = rd32(sp0 - 0x34cu);
    g->edi = rd32(sp0 - 0x350u);
    g->ebp = rd32(sp0 - 0x348u);
    return t17 & 0xffffff00u;
L_101c2c27: ;
    eax = -cf + 1u - cf;
    goto L_101c2c2c;
L_101c2c5c: ;
    wr32(sp0 - 0x354u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x350u;
    t14 = cow_thiscall(g, rd32(COW_IMG(0x1032911cu)), ecx, 1, ebp);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x101c33f0u), self, 0);
    g->ebx = rd32(sp0 - 0x344u);
    g->esi = rd32(sp0 - 0x34cu);
    g->edi = rd32(sp0 - 0x350u);
    g->ebp = rd32(sp0 - 0x348u);
    return (t16 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2b60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
