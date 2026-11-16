/* f_0x1012a730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1012a730(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_ebp);
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    if ((int32_t)rd32(self + 4u) < (int32_t)(rd32(self + 0x10u) - 1u))
    {
        eax = rd32(self + 4u);
        loc_44 = rd32(sp0 - 0x44u) & 0xffffffu;
        goto L_1012a755;
    }
    eax = rd32(self + 4u);
    return eax & 0xffffff00u;
L_1012a755: ;
    wr32(sp0 - 0x58u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_call_regs(g, COW_IMG(0x1012a820u), eax, self, g->edx, 0, 1, eax);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1012a76b;
    }
    eax = t1;
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return eax;
L_1012a76b: ;
    t3 = rd32(self + 0x64044u);
    g->esp = sp0 - 0x54u;
    t4 = cow_call_regs(g, COW_IMG(0x1018ece0u), eax, t3, g->edx, 1, 0);
    t5 = g->ecx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_1012a805;
    }
    eax = t4;
    ecx = t5;
L_1012a77e: ;
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x54u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x10128060u), ecx, 3, sp0 - 0x3cu, sp0 - 0x40u, eax);
    t7 = g->edx;
    wr32(sp0 - 0x58u, arg1);
    esi = sp0 - 0x3cu;
    edi = sp0 - 0x94u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101299f0u), self, 16, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), sp0 - 0x3cu, sp0 - 0x40u, arg1);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        ebx = t6;
        goto L_1012a7d0;
    }
    eax = t8;
    edx = t9;
    t10 = rd32(self + 0x64044u);
    g->esp = sp0 - 0x54u;
    t11 = cow_call_regs(g, COW_IMG(0x1018ece0u), eax, t10, g->edx, 1, 0);
    t12 = g->ecx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        goto L_1012a77e;
    }
    eax = t11;
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x41u);
L_1012a7d0: ;
    if (ebx != 0u) goto L_1012a7e0;
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return eax & 0xffffff00u;
L_1012a7e0: ;
    wr32(sp0 - 0x58u, arg2);
    t13 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x5cu, t13);
    wr32(sp0 - 0x60u, sp0 - 0x3cu);
    wr32(sp0 - 0x64u, ebx);
    wr32(sp0 - 0x68u, 0u);
    g->esp = sp0 - 0x54u;
    t14 = cow_thiscall(g, COW_IMG(0x10129090u), self, 5, 0u, ebx, sp0 - 0x3cu, t13, arg2);
    t15 = rd32(sp0 - 0x30u);
    t16 = rd32(sp0 - 0x44u);
    wr32(self + 4u, t15);
    eax = t14;
    loc_44 = (t16 & 0xffffffu) | 0x1000000u;
L_1012a805: ;
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->ebp = rd32(sp0 - 0x4cu);
    return (eax & 0xffffff00u) | loc_44 >> 0x18u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012a730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012a730(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
