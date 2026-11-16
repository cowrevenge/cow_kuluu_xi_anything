/* f_0x101e0770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101e0770(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    t1 = rd16(rd32(sp0 + 4u) + 0xcu);
    t2 = rd32(sp0 + 4u);
    wr8(sp0 - 0x1cu, rd8(t2));
    wr16(sp0 - 0x1eu, (uint16_t)t1);
    wr8(sp0 - 0x1bu, 0u);
    wr32(sp0 + 4u, t2 + 0x22u);
    eax = (in_eax & 0xffff0000u) | t1;
    ecx = t2 + 0x22u;
    edx = in_edx;
    ebx = t2 + 0x22u;
    ebp = in_ebp;
    esi = t2 + 0xeu;
    edi = 0u;
L_101e079d: ;
    if (rd8(ecx - 0x21u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx - 0x21u);
        goto L_101e07e9;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx - 0x21u);
    if (rd8(ebx + edi) == 0u)
    {
        eax = 0u;
        goto L_101e07e9;
    }
    eax = 0u;
L_101e07ab: ;
    if (rd8(sp0 - 0x1bu) >= 8u) goto L_101e0812;
    t3 = rd16(esi);
    wr16(sp0 + (uint8_t)rd32(sp0 - 0x1bu) * 2u - 0x1au, (uint16_t)t3);
    t4 = rd32(sp0 - 0x1bu);
    wr8(sp0 + (uint8_t)t4 - 0xau, (uint8_t)edx);
    wr8(sp0 - 0x1bu, (uint8_t)(rd8(sp0 - 0x1bu) + 1u));
    if ((int32_t)(eax + 1u) < (int32_t)rd8(ecx))
    {
        eax = eax + 1u;
        ebx = rd8(ecx);
        ebp = (ebp & 0xffff0000u) | t3;
        goto L_101e07ab;
    }
    eax = eax + 1u;
    ebp = (ebp & 0xffff0000u) | t3;
    ebx = rd32(sp0 + 4u);
L_101e07e9: ;
    if ((int32_t)(edi + 1u) < 10)
    {
        ecx = ecx + 1u;
        esi = esi + 2u;
        edi = edi + 1u;
        goto L_101e079d;
    }
    if (rd8(sp0 - 0x1bu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1bu);
        goto L_101e0829;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x1bu);
    wr32(sp0 - 0x38u, 0x63u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t6 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x63u);
    g->ebx = in_ebx;
    return t6 & 0xffffff00u;
L_101e0812: ;
    wr32(sp0 - 0x38u, 0xfu);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t5 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xfu);
    g->ebx = in_ebx;
    return t5 & 0xffffff00u;
L_101e0829: ;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x10666e2cu));
    g->esp = sp0 - 0x34u;
    t8 = cow_call_regs(g, COW_IMG(0x1021cc60u), eax, t7, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int8_t)t8 >= 0)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101e0852;
    }
    eax = t8;
    edx = t10;
    wr32(sp0 - 0x38u, 0x8cu);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t11 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x8cu);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    return t11 & 0xffffff00u;
L_101e0852: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t12 = cow_call_regs(g, COW_IMG(0x101cbe90u), eax, g->ecx, g->edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_101e0872;
    }
    eax = t12;
    edx = t14;
    wr32(sp0 - 0x38u, 0x51u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t15 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x51u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    return t15 & 0xffffff00u;
L_101e0872: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t16 = cow_stdcall(g, COW_IMG(0x100e4120u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        ecx = t17;
        goto L_101e0892;
    }
    eax = t16;
    edx = t18;
    wr32(sp0 - 0x38u, 0x64u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t19 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x64u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    return t19 & 0xffffff00u;
L_101e0892: ;
    wr32(sp0 - 0x38u, arg2);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->eax = sp0 - 0x24u;
    g->edx = arg2;
    g->esp = sp0 - 0x34u;
    t20 = cow_cdecl(g, COW_IMG(0x100e4140u), 2, sp0 - 0x24u, arg2);
    t21 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        edx = t21;
        goto L_101e08bf;
    }
    eax = t20;
    edx = t21;
    wr32(sp0 - 0x38u, 0x64u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t22 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x64u);
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    return t22 & 0xffffff00u;
L_101e08bf: ;
    if (rd32(COW_IMG(0x106634acu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634acu));
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t23 = cow_thiscall(g, COW_IMG(0x101e15e0u), ecx, 0);
        eax = t23;
    }
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
