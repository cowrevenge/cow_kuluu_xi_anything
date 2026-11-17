/* f_0x101e9c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e9c40(Guest* g)
{
    uint32_t eax;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_cdecl(g, COW_IMG(0x101e8500u), 1, 1u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101e9c6d;
    }
    edx = t2;
    wr32(sp0 - 0x34u, 1u);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x38u, t3);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101e9c6d: ;
    wr32(sp0 - 0x34u, in_edi);
    t6 = rd32(self + 0x3cu);
    wr16(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    t7 = rd32(self + 8u);
    wr16(sp0 - 0x26u, 0u);
    wr16(sp0 - 0x24u, 0u);
    wr16(sp0 - 0x22u, 0u);
    g->edx = sp0 - 0x28u;
    g->esp = sp0 - 0x34u;
    t8 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, t7, g->edx, 0, 1, sp0 - 0x28u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x38u, 2u);
    t11 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0x80808080u);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 0x26u) + 0x18u;
    wr32(sp0 - 0x44u, t12);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 0x28u) + 8u;
    wr32(sp0 - 0x48u, t13);
    g->edx = rd32(t11);
    t14 = rd32(t11);
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t14 + rd32(self + 0x3cu) * 4u + 0x5d8u), 5, t13, t12, 0x80808080u, 0u, 0u);
    t15 = g->edx;
    t16 = (uint8_t)(rd32(eax + t6 * 4u + 0xa0u) >> 3u);
    wr32(sp0 - 0x38u, t16);
    wr32(sp0 - 0x3cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->ebx = 0u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t16, in_edi, in_esi);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x80808080u);
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    t17 = rd32(sp0 - 0x26u) + 0x42u;
    wr32(sp0 - 0x58u, t17);
    t18 = rd32(sp0 - 0x24u) - 8u;
    wr32(sp0 - 0x5cu, t18);
    g->esp = sp0 - 0x40u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t18, 7, t18, t17, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t19 = (uint8_t)(rd32(eax + t6 * 4u + 0xa0u) >> 3u);
    wr32(sp0 - 0x38u, t19);
    t20 = (uint32_t)(int16_t)rd16(sp0 - 0x26u) + 0x44u;
    wr32(sp0 - 0x3cu, t20);
    t21 = (uint32_t)(int16_t)rd16(sp0 - 0x28u) + 8u;
    wr32(sp0 - 0x40u, t21);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x101e9af0u), self, 3, t21, t20, t19);
    t22 = rd32(eax + t6 * 4u + 0xa0u);
    wr32(sp0 - 0x38u, t22 & 7u);
    t23 = t22 >> 0xbu & 0xfu;
    wr32(sp0 - 0x3cu, t23);
    t24 = rd32(self + 0x3cu);
    wr32(sp0 - 0x40u, t24);
    t25 = (uint32_t)(int16_t)rd16(sp0 - 0x26u) + 0x54u;
    wr32(sp0 - 0x44u, t25);
    t26 = (uint32_t)(int16_t)rd16(sp0 - 0x28u) + 8u;
    wr32(sp0 - 0x48u, t26);
    g->edx = t26;
    cow_thiscall(g, COW_IMG(0x101e97c0u), self, 5, t26, t25, t24, t23, t22 & 7u);
    t27 = g->edx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t27 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        edi = eax + t6 * 4u + 0xa0u;
        goto L_101e9d7f;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t27 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    edi = eax + t6 * 4u + 0xa0u;
    if (ecx == 2u) goto L_101e9d8d;
    if (ecx == 3u) goto L_101e9d8d;
L_101e9d7f: ;
    if (ecx != 0u) goto L_101e9d8d;
    esi = (uint32_t)(int16_t)rd16(sp0 - 0x24u) - 0x14u;
L_101e9d95: ;
    t28 = rd32(edi) >> 0xfu & 0xfu;
    wr32(sp0 - 0x38u, t28);
    wr32(sp0 - 0x3cu, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->ebx = 0u;
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t28, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t29 = g->ecx;
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0x80808080u);
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    t30 = rd32(sp0 - 0x26u) + 0xa2u;
    wr32(sp0 - 0x58u, t30);
    wr32(sp0 - 0x5cu, esi);
    g->eax = t30;
    g->esp = sp0 - 0x40u;
    t31 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t29, 7, esi, t30, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t32 = rd32(edi) >> 0x13u & 0xfu;
    wr32(sp0 - 0x60u, t32);
    wr32(sp0 - 0x64u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x68u, sp0 - 0x20u);
    g->ebx = 0u;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), t32, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t33 = g->edx;
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wr32(sp0 - 0x70u, 0x3f800000u);
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 0x80808080u);
    wr32(sp0 - 0x7cu, sp0 - 0x20u);
    t34 = rd32(sp0 - 0x26u) + 0xb2u;
    wr32(sp0 - 0x80u, t34);
    wr32(sp0 - 0x84u, esi);
    g->eax = sp0 - 0x20u;
    g->edx = t33;
    g->esp = sp0 - 0x68u;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t34, 7, esi, t34, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t36 = g->edx;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->edx = t36;
    return t35;
L_101e9d8d: ;
    esi = (uint32_t)(int16_t)rd16(sp0 - 0x24u) - 8u;
    goto L_101e9d95;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e9c40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
