/* f_0x1023d500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023d500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_120;
    uint32_t loc_128;
    uint32_t loc_12c;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 304u);

    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, in_edi);
    wr32(sp0 - 0x11cu, sp0 - 0x10cu);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x10cu, 0u);
    wr16(sp0 - 0x10au, 0u);
    wr16(sp0 - 0x108u, 0u);
    wr16(sp0 - 0x106u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x118u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10cu, t1, g->edx, 0, 1, sp0 - 0x10cu);
    t2 = g->edx;
    t3 = (uint32_t)(int16_t)rd16(sp0 - 0x10cu);
    wr32(sp0 - 0x104u, t3);
    if ((int32_t)rd32(self + 0xa5bcu) <= 0)
    {
        eax = rd32(self + 0xa5bcu);
        edx = t2;
        ebp = in_ebp;
    }
    else
    {
        eax = rd32(self + 0xa5bcu);
        ecx = t3;
        esi = (uint32_t)(int16_t)rd16(sp0 - 0x10au) + 4u;
        loc_104 = t3;
        wr32(sp0 - 0x11cu, in_ebp);
        ebx = 0u;
        ebp = self + 0x20u;
L_1023d54d: ;
        wr32(sp0 - 0x120u, ebp);
        wr32(sp0 - 0x124u, COW_IMG(0x1034f7e0u));
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x114u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f7e0u), ebp, in_ebp, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        if (ebx != rd32(self + 0x18u))
        {
            ecx = t4;
            wr32(sp0 - 0x120u, 0x80808080u);
            wr32(sp0 - 0x124u, sp0 - 0x100u);
            wr32(sp0 - 0x128u, esi);
            t7 = rd32(sp0 - 0x104u);
            wr32(sp0 - 0x12cu, t7);
            eax = t7;
            edx = sp0 - 0x100u;
            loc_128 = esi;
            loc_120 = 0x80808080u;
            loc_12c = t7;
        }
        else
        {
            edx = t5;
            wr32(sp0 - 0x120u, 0x807f7f00u);
            wr32(sp0 - 0x124u, sp0 - 0x100u);
            wr32(sp0 - 0x128u, esi);
            t6 = rd32(sp0 - 0x104u);
            wr32(sp0 - 0x12cu, t6);
            eax = sp0 - 0x100u;
            ecx = t6;
            loc_128 = esi;
            loc_120 = 0x807f7f00u;
            loc_12c = t6;
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x108u;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, loc_12c, loc_128, sp0 - 0x100u, loc_120, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
        t8 = g->ecx;
        t9 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0xa5bcu))
        {
            eax = rd32(self + 0xa5bcu);
            ecx = t8;
            ebx = ebx + 1u;
            ebp = ebp + 0xd4u;
            esi = esi + 0xcu;
            goto L_1023d54d;
        }
        eax = rd32(self + 0xa5bcu);
        edx = t9;
        ebp = rd32(sp0 - 0x11cu);
    }
    g->ebx = in_ebx;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023d500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
