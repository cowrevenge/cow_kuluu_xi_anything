/* f_0x101ccba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ccba0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x101cc6f0u), self, 1, arg1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101ccbc2;
    }
    return 1u;
L_101ccbc2: ;
    t2 = (uint32_t)(int16_t)rd16(eax + 4u);
    wr32(sp0 - 0x2cu, t2);
    wr32(sp0 - 0x30u, rd32(eax));
    wr32(sp0 - 0x34u, COW_IMG(0x1037d790u));
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->ebx = self;
    g->edx = rd32(eax);
    t3 = rd32(eax);
    g->esp = sp0 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037d790u), t3, t2, in_edi);
    t5 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x101c49e0u), rd32(COW_IMG(0x10662dccu)), 2, sp0 - 0x20u, 0u);
    if (arg1 != rd32(self + 0x39cu) - 1u)
    {
        ecx = rd32(self + 0x39cu);
        wr32(sp0 - 0x2cu, in_esi);
        t6 = ecx * 8u - arg1 * 8u - 8u;
        esi = arg1 * 8u + self + 0xcu;
        edi = arg1 * 8u + self + 4u;
        ecx = t6 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t6 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr16(self + rd32(self + 0x39cu) * 8u, 0xffffu);
    }
    t7 = rd32(self + 0x39cu) - 1u;
    t8 = rd32(sp0 - 0x28u);
    wr32(self + 0x39cu, t7);
    g->ebx = rd32(sp0 - 0x24u);
    g->edi = t8;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ccba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ccba0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
