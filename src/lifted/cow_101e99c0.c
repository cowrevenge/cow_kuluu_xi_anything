/* f_0x101e99c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e99c0(Guest* g)
{
    uint32_t eax;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101e8500u), 1, 1u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        esi = t1;
        goto L_101e99f1;
    }
    edx = t2;
    wr32(sp0 - 0x18u, 1u);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x1cu, t3);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101e99f1: ;
    wr16(sp0 - 8u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    t6 = rd32(self + 8u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, t6, g->edx, 0, 1, sp0 - 8u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x18u, 2u);
    t10 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80808080u);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 0x18u;
    wr32(sp0 - 0x24u, t11);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
    wr32(sp0 - 0x28u, t12);
    t13 = rd32(rd32(t10) + (rd32(esi + 0x9cu) >> 2u & 3u) * 4u + 0x5c8u);
    cow_thiscall(g, COW_IMG(0x1011fb60u), t13, 5, t12, t11, 0x80808080u, 0u, 0u);
    t14 = g->ecx;
    t15 = rd8(esi + 0x9eu) & 7u;
    wr32(sp0 - 0x18u, t15);
    t16 = rd32(esi + 0x9cu) >> 4u & 0xfu;
    wr32(sp0 - 0x1cu, t16);
    wr32(sp0 - 0x20u, 0u);
    t17 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 0x44u;
    wr32(sp0 - 0x24u, t17);
    t18 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
    wr32(sp0 - 0x28u, t18);
    cow_thiscall(g, COW_IMG(0x101e97c0u), self, 5, t18, t17, 0u, t16, t15);
    t19 = rd32(esi + 0x9cu);
    t20 = t19 >> 0x13u & 7u;
    wr32(sp0 - 0x18u, t20);
    t21 = t19 >> 8u & 0xfu;
    wr32(sp0 - 0x1cu, t21);
    wr32(sp0 - 0x20u, 1u);
    t22 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 0x72u;
    wr32(sp0 - 0x24u, t22);
    t23 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
    wr32(sp0 - 0x28u, t23);
    cow_thiscall(g, COW_IMG(0x101e97c0u), self, 5, t23, t22, 1u, t21, t20);
    t24 = rd32(esi + 0x9cu);
    t25 = t24 >> 0x16u & 7u;
    wr32(sp0 - 0x18u, t25);
    t26 = t24 >> 0xcu & 0xfu;
    wr32(sp0 - 0x1cu, t26);
    wr32(sp0 - 0x20u, 2u);
    t27 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 0xa0u;
    wr32(sp0 - 0x24u, t27);
    t28 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
    wr32(sp0 - 0x28u, t28);
    g->eax = t27;
    g->edx = t25;
    t29 = cow_thiscall(g, COW_IMG(0x101e97c0u), self, 5, t28, t27, 2u, t26, t25);
    t30 = g->edx;
    g->edx = t30;
    return t29;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e99c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e99c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
