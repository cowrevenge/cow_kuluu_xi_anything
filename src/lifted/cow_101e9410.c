/* f_0x101e9410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e9410(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_38;
    uint32_t loc_3c;
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
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->esp = sp0 - 0x28u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, t1, g->edx, 0, 1, sp0 - 0x18u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x80808080u);
    t3 = (uint32_t)(int16_t)(rd32(sp0 - 0x16u) + 0x13u);
    wr32(sp0 - 0x38u, t3);
    t4 = (uint32_t)(int16_t)(rd32(sp0 - 0x18u) + 0xcu);
    wr32(sp0 - 0x3cu, t4);
    if ((int8_t)rd8(self + 0x15u) >= 3)
    {
        eax = (t2 & 0xffffff00u) | rd8(self + 0x15u);
        edx = (uint32_t)(int8_t)rd8(self + 0x15u);
        loc_38 = t3;
        loc_3c = t4;
        ecx = rd32(edx * 4u + self + 0x40u);
    }
    else
    {
        eax = (t2 & 0xffffff00u) | rd8(self + 0x15u);
        edx = (uint32_t)(int8_t)rd8(self + 0x15u);
        loc_38 = t3;
        loc_3c = t4;
        ecx = rd32(edx * 4u + self + 0x34u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, loc_3c, loc_38, 0x80808080u, 0u, 0u);
    t5 = g->edx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t5 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        ebx = rd32(sp0 - 0x16u) + 0x32u;
        edi = rd32(sp0 - 0x18u) + 0x5fu;
        goto L_101e9499;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t5 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    ebx = rd32(sp0 - 0x16u) + 0x32u;
    edi = rd32(sp0 - 0x18u) + 0x5fu;
    if (ecx == 2u) goto L_101e94b7;
    if (ecx == 3u) goto L_101e94b7;
L_101e9499: ;
    if (ecx != 0u) goto L_101e94b7;
    t6 = rd8(self + 0x17u);
    wr32(sp0 - 0x2cu, t6);
    wr32(sp0 - 0x30u, 0x56u);
    wr32(sp0 - 0x34u, 0xau);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t6;
    g->esp = sp0 - 0x2cu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x56u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x30u, t7);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    eax = sp0 - 0x10u;
    ecx = t8;
    edx = t9;
    loc_30 = t7;
    loc_2c = rd32(sp0 - 0x2cu);
L_101e94ef: ;
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, loc_30, loc_2c, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 0x80808080u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, ebx);
    wr32(sp0 - 0x44u, edi);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x28u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t14, 7, edi, ebx, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    if (rd8(self + 0x16u) == 0u)
    {
        eax = (t16 & 0xffffff00u) | rd8(self + 0x16u);
        edx = rd32(sp0 - 0x16u);
        ebx = rd32(sp0 - 0x18u) + 0xcu;
        ebp = 0u;
        edi = rd32(sp0 - 0x16u) + 0x54u;
        goto L_101e9552;
    }
    eax = (t16 & 0xffffff00u) | rd8(self + 0x16u);
    edx = rd32(sp0 - 0x16u);
    ebx = rd32(sp0 - 0x18u) + 0xcu;
    edi = rd32(sp0 - 0x16u) + 0x54u;
    if (rd8(self + 0x14u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
        ebp = 0u;
        goto L_101e9552;
    }
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x80808080u);
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x3cu, (uint32_t)(int16_t)ebx);
    g->eax = (uint32_t)(int16_t)edi;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t17 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x54u), 5, (uint32_t)(int16_t)ebx, (uint32_t)(int16_t)edi, 0x80808080u, 0u, 0u);
    t18 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t18;
    return t17;
L_101e94b7: ;
    if (rd8(self + 0x17u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x17u);
        edi = edi + 6u;
        wr32(sp0 - 0x2cu, (uint8_t)eax);
        wr32(sp0 - 0x30u, 0x57u);
        wr32(sp0 - 0x34u, 0xau);
        g->eax = (uint8_t)eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x2cu;
        t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x57u);
        t13 = g->ecx;
        wr32(sp0 - 0x30u, t12);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        eax = t12;
        ecx = t13;
        edx = sp0 - 0x10u;
        loc_30 = t12;
        loc_2c = rd32(sp0 - 0x2cu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x17u);
        edi = edi + 6u;
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, 0x56u);
        wr32(sp0 - 0x34u, 0xau);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x56u);
        t11 = g->edx;
        wr32(sp0 - 0x30u, t10);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        eax = t10;
        ecx = sp0 - 0x10u;
        edx = t11;
        loc_30 = t10;
        loc_2c = 1u;
    }
    goto L_101e94ef;
L_101e9552: ;
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t19 = cow_thiscall(g, COW_IMG(0x101e9010u), self, 3, ebx, edi, ebp);
    t20 = g->edx;
    if ((int32_t)(ebp + 1u) < 3)
    {
        eax = t19;
        edx = t20;
        ebp = ebp + 1u;
        edi = edi + 0x1cu;
        goto L_101e9552;
    }
    eax = t19;
    edx = t20;
    edi = edi + 0x1cu;
    if (rd8(self + 0x14u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
        wr32(sp0 - 0x2cu, 3u);
        wr32(sp0 - 0x30u, edi);
        wr32(sp0 - 0x34u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t21 = cow_thiscall(g, COW_IMG(0x101e9010u), self, 3, ebx, edi, 3u);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e9410(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
