/* f_0x101acfb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101acfb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    eax = sp0 - 0x32u;
    ecx = 0xcu;
L_101acfc4: ;
    wr8(eax - 2u, 0u);
    wr8(eax - 1u, 0u);
    wr8(eax, 0u);
    wr8(eax + 1u, 0u);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_101acfc4;
    }
    if (rd32(self + 0xa58u) != rd32(self + 0x888u))
    {
        eax = rd32(self + 0x888u);
        ecx = rd32(self + 0xa58u);
        wr32(sp0 - 0x48u, eax - ecx);
        t1 = ecx + self + 0x6c4u;
        wr32(sp0 - 0x4cu, t1);
        t2 = rd32(self + 0xc70u);
        wr8(self + 0xc24u, 1u);
        t3 = ecx + self + t2 + 0x6c4u;
        wr32(sp0 - 0x50u, t3);
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10314a10u), 5, t3, t1, eax - ecx, in_edi, in_esi);
        edi = self + rd32(self + 0xa58u) + 0x6c4u;
    }
    else
    {
        eax = rd32(self + 0x888u);
        edi = eax + self + 0x6c4u;
    }
    t4 = rd32(self + 0xc70u);
    wr32(sp0 - 0x48u, 0u);
    esi = self + 0xc2cu;
    ecx = t4 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x4cu, 0u);
    ecx = t4 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t5 = rd32(self + 0x888u) + rd32(self + 0xc70u);
    t6 = rd32(self + 0xa58u);
    t7 = rd32(self + 0xc70u);
    wr32(self + 0x888u, t5);
    wr32(self + 0xa58u, t6 + t7);
    wr8(self + t5 + 0x6c4u, 0u);
    t8 = rd32(self + 0x888u);
    wr32(sp0 - 0x50u, t8);
    wr32(sp0 - 0x54u, self + 0x6c4u);
    t9 = rd32(self + 0xa54u) + 1u;
    wr32(sp0 - 0x58u, t9);
    wr32(sp0 - 0x5cu, self + 0x88cu);
    wr32(self + 0xc70u, 0u);
    wr32(self + 0xc74u, 0u);
    g->esp = sp0 - 0x44u;
    t10 = cow_call_regs(g, COW_IMG(0x101ac990u), t9, self, g->edx, 0, 6, self + 0x88cu, t9, self + 0x6c4u, t8, 0u, 0u);
    wr32(self + 0xa50u, t10);
    wr8(self + 0xc78u, 1u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101acfb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101acfb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
