/* f_0x10305390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10305390(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(arg1 + 0x188u) + 0x18u) != 0u)
    {
        esi = rd32(arg1 + 0x188u);
    }
    else
    {
        esi = rd32(arg1 + 0x188u);
        t1 = rd32(esi + 0x10u);
        t2 = rd32(esi + 0x14u);
        t3 = rd32(esi + 8u);
        g->eax = rd32(arg1 + 4u);
        t4 = rd32(arg1 + 4u);
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x1cu), self, 5, arg1, t3, t2, t1, 0u);
        wr32(esi + 0xcu, t5);
    }
    if (rd32(esi + 0x10u) - rd32(esi + 0x18u) <= arg7 - rd32(arg6))
    {
        ecx = rd32(arg6);
        edi = rd32(esi + 0x10u) - rd32(esi + 0x18u);
    }
    else
    {
        eax = arg7 - rd32(arg6);
        ecx = rd32(arg6);
        edi = eax;
    }
    if (edi > rd32(arg1 + 0x60u) - rd32(esi + 0x14u))
    {
        eax = rd32(arg1 + 0x60u) - rd32(esi + 0x14u);
        edi = eax;
    }
    t6 = arg5 + ecx * 4u;
    t7 = rd32(esi + 0xcu) + rd32(esi + 0x18u) * 4u;
    g->edx = rd32(esi + 0xcu);
    t8 = rd32(esi + 0xcu);
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1 + 0x1a4u) + 4u), t7, 4, arg1, t7, t6, edi);
    t9 = g->edx;
    wr32(arg6, edi + rd32(arg6));
    wr32(esi + 0x18u, edi + rd32(esi + 0x18u));
    if (rd32(esi + 0x18u) < rd32(esi + 0x10u))
    {
        eax = rd32(esi + 0x10u);
        edx = t9;
    }
    else
    {
        eax = rd32(esi + 0x10u);
        edx = t9;
        wr32(esi + 0x14u, eax + rd32(esi + 0x14u));
        wr32(esi + 0x18u, 0u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10305390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
