/* f_0x101e9ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e9ec0(Guest* g)
{
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_stdcall(g, COW_IMG(0x101e8880u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_101e9eea;
    }
    edx = t2;
    wr32(sp0 - 0x24u, 1u);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x28u, t3);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101e9eea: ;
    wr16(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x24u, sp0 - 0x18u);
    t6 = rd32(self + 8u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10118f70u), 0u, t6, g->edx, 0, 1, sp0 - 0x18u);
    t7 = g->ecx;
    t8 = rd32(esi + 4u) & 0x1fu;
    wr32(sp0 - 0x24u, t8);
    wr32(sp0 - 0x28u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t8, in_edi, in_esi);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    t9 = rd32(sp0 - 0x16u) + 0x16u;
    wr32(sp0 - 0x44u, t9);
    t10 = rd32(sp0 - 0x14u) - 6u;
    wr32(sp0 - 0x48u, t10);
    g->eax = t10;
    g->esp = sp0 - 0x2cu;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t10, t9, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t12 = rd32(esi + 4u) >> 5u & 0x1fu;
    wr32(sp0 - 0x4cu, t12);
    wr32(sp0 - 0x50u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t12, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    wr32(sp0 - 0x58u, 0x3f800000u);
    wr32(sp0 - 0x5cu, 0x3f800000u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 0x80808080u);
    wr32(sp0 - 0x68u, sp0 - 0x10u);
    t13 = rd32(sp0 - 0x16u) + 0x26u;
    wr32(sp0 - 0x6cu, t13);
    t14 = rd32(sp0 - 0x14u) - 6u;
    wr32(sp0 - 0x70u, t14);
    g->edx = t14;
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t13, 7, t14, t13, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t15 = g->edx;
    t16 = rd32(esi + 4u) >> 0xau & 0x1fu;
    wr32(sp0 - 0x24u, t16);
    wr32(sp0 - 0x28u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t16, in_edi, in_esi);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    t17 = rd32(sp0 - 0x16u) + 0x36u;
    wr32(sp0 - 0x44u, t17);
    t18 = rd32(sp0 - 0x14u) - 6u;
    wr32(sp0 - 0x48u, t18);
    g->esp = sp0 - 0x2cu;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t18, 7, t18, t17, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t19 = g->ecx;
    t20 = rd32(esi + 4u) >> 0xfu & 0x1fu;
    wr32(sp0 - 0x4cu, t20);
    wr32(sp0 - 0x50u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t20, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    wr32(sp0 - 0x58u, 0x3f800000u);
    wr32(sp0 - 0x5cu, 0x3f800000u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 0x80808080u);
    wr32(sp0 - 0x68u, sp0 - 0x10u);
    t21 = rd32(sp0 - 0x16u) + 0x46u;
    wr32(sp0 - 0x6cu, t21);
    t22 = rd32(sp0 - 0x14u) - 6u;
    wr32(sp0 - 0x70u, t22);
    g->eax = t22;
    g->edx = t21;
    g->esp = sp0 - 0x54u;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t22, t21, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e9ec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
