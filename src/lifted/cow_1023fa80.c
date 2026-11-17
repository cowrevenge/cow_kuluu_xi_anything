/* f_0x1023fa80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023fa80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->ebx = 0u;
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, 1u, 1u, 1u);
    t3 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    t4 = rd32(self + 0x34u);
    t5 = cow_call_regs(g, COW_IMG(0x101c5e50u), t2, t4, g->edx, 0, 1, 0u);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    edx = self + 0x14u;
L_1023fabf: ;
    t7 = rd8(eax);
    wr8(edx, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        edx = edx + 1u;
        goto L_1023fabf;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, self + 0x14u);
    t8 = rd32(sp0 - 6u);
    wr32(sp0 - 0x20u, t8);
    t9 = rd32(sp0 - 8u) + 4u;
    wr32(sp0 - 0x24u, t9);
    g->edx = t9;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t9, t8, self + 0x14u, 0x80808080u, in_edi, in_esi, in_ebx, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t10 = g->edx;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t11 = rd32(self + 0x24u) + 1u;
    wr32(sp0 - 0x20u, t11);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->ebx = 0u;
    g->edi = self + 0x14u;
    g->eax = t11;
    g->edx = t10;
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t11, 1u, 1u);
    t13 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x1037d46cu));
    t14 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d46cu));
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x80808080u);
    t15 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x24u, t15);
    t16 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x28u, t16);
    t17 = cow_divs(g, (uint32_t)((int32_t)(rd32(self + 0x2cu) + ((uint32_t)((int32_t)rd32(self + 0x2cu) >> 0x1fu) & 3u)) >> 2u), 6u);
    t18 = cow_mods(g, (uint32_t)((int32_t)(rd32(self + 0x2cu) + ((uint32_t)((int32_t)rd32(self + 0x2cu) >> 0x1fu) & 3u)) >> 2u), 6u);
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(t18 * 4u + rd32(t14)), 5, t16, t15, 0x80808080u, 0u, 0u);
    t19 = g->edx;
    t20 = rd32(self + 0x2cu) + 1u;
    wr32(self + 0x2cu, t20);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t19;
    return t20;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023fa80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023fa80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
