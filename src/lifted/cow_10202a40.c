/* f_0x10202a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10202a40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc550u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10202a56;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_10202a56: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 3u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_10202a6b;
    }
    eax = t4;
    return eax & 0xffffff00u;
L_10202a6b: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x10202c20u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_10202a7d;
    }
    eax = t6;
    return eax & 0xffffff00u;
L_10202a7d: ;
    if (rd32(esi + 0xa0u) == 0u)
    {
        ebx = rd32(sp0 + 4u);
    }
    else
    {
        ebx = rd32(sp0 + 4u);
        t9 = rd8(esi + 0xecu);
        wr8(sp0 + 4u, (uint8_t)t9);
        wr8(self + 0x39u, (uint8_t)t9);
        t10 = rd32(sp0 + 4u);
        g->ebx = ebx;
        g->edx = ebx + 0x1au;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x101cb090u), 4, ebx + 0x1au, arg2 + 7u, t10, self + 0x39u);
        t11 = g->edx;
        edx = t11;
    }
    if (rd16(esi + 0x210u) != 0u)
    {
        eax = esi + 0x214u;
        ecx = rd32(COW_IMG(0x104e1ba8u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104e1ba8u));
        eax = esi + 0x7cu;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x66u, ebx, arg2, eax, ecx);
    g->ebx = in_ebx;
    return (t12 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10202a40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
