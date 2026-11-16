/* f_0x1031f7ba - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
void cow_fn_1031f7ba(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double loc_c_d;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, rdf64(sp0 + 8u) + rdf64(sp0 + 0x10u));
    if (rd32(COW_IMG(0x103d3810u)) != 0u)
    {
        loc_c_d = d1;
        goto L_1031f7fb;
    }
    loc_c_d = d1;
    d2 = rdf64(sp0 + 0x10u);
    d3 = rdf64(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1031fe21u), 9, 1u, arg1, cow_dlo(d3), cow_dhi(d3), cow_dlo(d2), cow_dhi(d2), cow_dlo(loc_c_d), cow_dhi(loc_c_d), arg6);
    d4 = cow_take_float(g);
    fpush(g, d4);
    return;
L_1031f7fb: ;
    g->esp = sp0 - 0xcu;
    t5 = cow_fastcall(g, COW_IMG(0x10319c89u), self, in_edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(t5, 0x21u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), t6, 4, arg6, 0xffffu, cow_dlo(loc_c_d), cow_dhi(loc_c_d));
    fpush(g, loc_c_d);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f7ba(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031f7ba(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
