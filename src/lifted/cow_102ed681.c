/* f_0x102ed681 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102ed681(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(rd32(sp0 + 4u) + 0x10u) == 0xcdu)
    {
        edx = in_edx;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        esi = rd32(sp0 + 4u);
        wr32(rd32(esi) + 0x14u, 0x12u);
        t1 = rd32(esi + 0x10u);
        wr32(rd32(esi) + 0x18u, t1);
        wr32(sp0 - 0xcu, esi);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), t1, 1, esi);
        t2 = g->edx;
        edx = t2;
    }
    if (rd32(esi + 0x78u) < rd32(esi + 0x60u))
    {
        ecx = rd32(esi + 0x78u);
        if (rd32(esi + 8u) != 0u)
        {
            eax = rd32(esi + 8u);
            wr32(eax + 4u, ecx);
            t4 = rd32(esi + 0x60u);
            wr32(rd32(esi + 8u) + 8u, t4);
            wr32(sp0 - 0xcu, esi);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall_cdecl(g, rd32(rd32(esi + 8u)), t4, 1, esi);
            t5 = g->edx;
            edx = t5;
        }
        wr32(sp0 - 0xcu, arg3);
        t6 = rd32(esi + 0x180u);
        wr32(sp0 + 4u, 0u);
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0x14u, arg2);
        wr32(sp0 - 0x18u, esi);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, rd32(t6 + 4u), sp0 + 4u, 4, esi, arg2, sp0 + 4u, arg3);
        t7 = g->edx;
        t8 = rd32(sp0 + 4u);
        wr32(esi + 0x78u, rd32(esi + 0x78u) + t8);
        eax = t8;
        edx = t7;
    }
    else
    {
        ecx = rd32(esi + 0x78u);
        wr32(rd32(esi) + 0x14u, 0x77u);
        wr32(sp0 - 0xcu, 0xffffffffu);
        wr32(sp0 - 0x10u, esi);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, rd32(rd32(esi) + 4u), ecx, 2, esi, 0xffffffffu);
        t3 = g->edx;
        eax = 0u;
        edx = t3;
    }
    g->esi = rd32(sp0 - 8u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed681(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed681(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
