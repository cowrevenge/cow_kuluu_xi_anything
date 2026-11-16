/* f_0x102f5321 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102f5321(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) != rd32(self + 8u))
    {
        ecx = self;
        edx = in_edx;
        goto L_102f536d;
    }
    eax = rd32(self + 8u);
    t1 = eax * 4u + 0x40u;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, t1, in_edi, in_esi);
    t3 = g->edx;
    if (t2 == 0u) goto L_102f5392;
    ecx = t1;
    edx = t3;
    ebp = t2;
    if (rd32(self) != 0u)
    {
        esi = rd32(self);
        t4 = rd32(self + 4u) << 2u;
        edi = ebp;
        ecx = t4 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t4 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t5 = rd32(self);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t5);
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    wr32(self + 8u, rd32(self + 8u) + 0x10u);
    wr32(self, ebp);
L_102f536d: ;
    if (arg1 == 0u) goto L_102f53bf;
    ebp = arg1;
L_102f537a: ;
    if (rd8(ebp) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(ebp);
        ebp = ebp + 1u;
        goto L_102f537a;
    }
    ecx = (ecx & 0xffffff00u) | rd8(ebp);
    ebp = ebp + 1u;
    t7 = ebp - (arg1 + 1u) + 1u;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t7, in_edi, in_esi);
    if (t8 != 0u)
    {
        eax = t8;
        ebp = ebp - (arg1 + 1u);
        goto L_102f539c;
    }
L_102f5392: ;
    wr32(self + 0xcu, 0x8007000eu);
    eax = 0x8007000eu;
L_102f53cd: ;
    return eax;
L_102f539c: ;
    esi = arg1;
    edi = eax;
    ecx = ebp >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ebp & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(eax + ebp, 0u);
    t9 = rd32(self + 4u);
    t10 = rd32(self);
    wr32(self + 0x10u, ebp + rd32(self + 0x10u));
    wr32(t10 + t9 * 4u, eax);
L_102f53c8: ;
    wr32(self + 4u, rd32(self + 4u) + 1u);
    eax = 0u;
    goto L_102f53cd;
L_102f53bf: ;
    wr32(rd32(self) + rd32(self + 4u) * 4u, 0u);
    goto L_102f53c8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5321(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f5321(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
