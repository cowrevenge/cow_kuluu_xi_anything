/* f_0x10305300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_10305300(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(rd32(sp0 + 4u) + 0x188u) + 0x18u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = rd32(sp0 + 4u);
        esi = rd32(rd32(sp0 + 4u) + 0x188u);
        edi = rd32(rd32(sp0 + 4u) + 0x188u) + 0x18u;
    }
    else
    {
        ebx = rd32(sp0 + 4u);
        esi = rd32(rd32(sp0 + 4u) + 0x188u);
        edi = rd32(rd32(sp0 + 4u) + 0x188u) + 0x18u;
        t1 = rd32(esi + 0x10u);
        t2 = rd32(esi + 0x14u);
        t3 = rd32(esi + 8u);
        g->eax = rd32(ebx + 4u);
        g->edx = in_edx;
        t4 = rd32(ebx + 4u);
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x1cu), self, 5, ebx, t3, t2, t1, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(esi + 0xcu, t5);
        ecx = t6;
        edx = t7;
    }
    t8 = rd32(esi + 0x10u);
    t9 = rd32(esi + 0xcu);
    wr32(sp0 + 4u, rd32(edi));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(ebx + 0x19cu) + 4u), ecx, 7, ebx, arg2, arg3, arg4, t9, edi, t8);
    t10 = g->edx;
    if (rd32(edi) <= rd32(sp0 + 4u))
    {
        edx = t10;
    }
    else
    {
        eax = rd32(edi);
        ecx = rd32(sp0 + 4u);
        t11 = rd32(ebx + 0x1a4u);
        wr32(sp0 + 4u, eax - ecx);
        t12 = ecx * 4u + rd32(esi + 0xcu);
        g->edx = t11;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, rd32(t11 + 4u), ecx, 4, ebx, t12, 0u, eax - ecx);
        t13 = g->edx;
        wr32(arg6, rd32(arg6) + rd32(sp0 + 4u));
        edx = t13;
    }
    if (rd32(edi) < rd32(esi + 0x10u))
    {
        eax = rd32(esi + 0x10u);
    }
    else
    {
        eax = rd32(esi + 0x10u);
        wr32(esi + 0x14u, eax + rd32(esi + 0x14u));
        wr32(edi, 0u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10305300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
