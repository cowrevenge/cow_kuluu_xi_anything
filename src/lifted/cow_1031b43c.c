/* f_0x1031b43c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031b43c(Guest* g)
{
    double d1;
    double d10;
    double d13;
    double d14;
    double d4;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    double loc_c_d;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, self);
    d1 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x14u, d1);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1031454au), 4, cow_dlo(d1), cow_dhi(d1), self, self);
    t3 = g->edx;
    if ((t2 & 0x90u) != 0u)
    {
        edx = t3;
        goto L_1031b49d;
    }
    eax = t2;
    ecx = rd32(sp0 - 0x10u);
    edx = t3;
    wr32(sp0 - 0x10u, ecx);
    wr32(sp0 - 0x14u, ecx);
    d4 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x14u, d4);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10321ee0u), ecx, 3, cow_dlo(d4), cow_dhi(d4), self);
    t6 = g->edx;
    d7 = cow_take_float(g);
    wrf64(sp0 - 0xcu, d7);
    d8 = rdf64(sp0 + 4u);
    if (d7 < d8 || d7 > d8)
    {
        edx = t6;
        goto L_1031b49d;
    }
    eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
    ecx = rd32(sp0 - 0x10u);
    edx = t6;
    loc_c_d = d7;
    wr32(sp0 - 0x10u, ecx);
    wr32(sp0 - 0x14u, ecx);
    d9 = fr(g, rdf64(sp0 + 4u) / rdf64(COW_IMG(0x1034a3c8u)));
    wrf64(sp0 + 4u, d9);
    d10 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x14u, d10);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x10321ee0u), ecx, 3, cow_dlo(d10), cow_dhi(d10), cow_dlo(loc_c_d));
    t12 = g->edx;
    d13 = cow_take_float(g);
    d14 = rdf64(sp0 + 4u);
    if (d13 < d14 || d13 > d14)
    {
        edx = t12;
        wr32(sp0 - 0x10u, 1u);
        loc_10 = 1u;
    }
    else
    {
        edx = t12;
        wr32(sp0 - 0x10u, 2u);
        loc_10 = 2u;
    }
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return loc_10;
L_1031b49d: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b43c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b43c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
