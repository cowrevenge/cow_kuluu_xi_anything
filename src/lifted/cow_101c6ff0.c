/* f_0x101c6ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c6ff0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x101c6c90u), self, 1, arg1);
    if (t1 != 0u)
    {
        esi = t1;
        goto L_101c7016;
    }
    return 1u;
L_101c7016: ;
    wr32(sp0 - 0x30u, COW_IMG(0x1037ce68u));
    t2 = (uint32_t)(int16_t)rd16(esi + 4u);
    wr32(sp0 - 0x34u, t2);
    wr32(sp0 - 0x38u, rd32(esi));
    t3 = (uint32_t)(int16_t)rd16(esi + 6u);
    wr32(sp0 - 0x3cu, t3);
    wr32(sp0 - 0x40u, COW_IMG(0x1037ce54u));
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->edx = t3;
    g->esp = sp0 - 0x30u;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037ce54u), t3, rd32(esi), t2);
    t5 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x101c49e0u), rd32(COW_IMG(0x10662dccu)), 2, sp0 - 0x20u, 0u);
    wr32(sp0 - 0x30u, COW_IMG(0x1037ce4cu));
    t6 = (uint32_t)(int16_t)rd16(esi + 4u);
    wr32(sp0 - 0x34u, t6);
    wr32(sp0 - 0x38u, rd32(esi));
    t7 = (uint32_t)(int16_t)rd16(esi + 6u);
    wr32(sp0 - 0x3cu, t7);
    wr32(sp0 - 0x40u, COW_IMG(0x1037ce54u));
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037ce54u), t7, rd32(esi), t6);
    t8 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x101c49e0u), rd32(COW_IMG(0x10662dccu)), 2, sp0 - 0x20u, 0u);
    if (arg1 != rd32(self + 4u) - 1u)
    {
        ecx = rd32(self + 4u);
        t9 = ecx * 8u - arg1 * 8u - 8u;
        esi = arg1 * 8u + self + 0x10u;
        edi = arg1 * 8u + self + 8u;
        ecx = t9 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t9 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr16(self + rd32(self + 4u) * 8u + 4u, 0xffffu);
    }
    t10 = rd32(self + 4u) - 1u;
    t11 = rd32(sp0 - 0x28u);
    t12 = rd32(sp0 - 0x2cu);
    wr32(self + 4u, t10);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = t11;
    g->edi = t12;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c6ff0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
