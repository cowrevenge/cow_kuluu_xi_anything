/* f_0x1031f6a5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
void cow_fn_1031f6a5(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d5;
    double d6;
    double d8;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    double loc_c_d;
    uint32_t t4;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    d1 = rdf64(sp0 + 4u);
    if (d1 < rdf64(COW_IMG(0x1034a1d8u)) || d1 > rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        if ((rd16(sp0 + 0xau) & 0x7ff0u) != 0u) goto L_1031f734;
        if ((rd32(sp0 + 8u) & 0xfffffu) != 0u) goto L_1031f6dd;
        if (rd32(sp0 + 4u) == 0u) goto L_1031f734;
L_1031f6dd: ;
        d2 = rdf64(sp0 + 4u);
        if (d2 >= rdf64(COW_IMG(0x1034a1d8u)))
        {
            eax = 0u;
            esi = 0xfffffc03u;
        }
        else
        {
            eax = 1u;
            esi = 0xfffffc03u;
        }
L_1031f6f7: ;
        if ((rd8(sp0 + 0xau) & 0x10u) != 0u) goto L_1031f710;
        wr32(sp0 + 8u, rd32(sp0 + 8u) << 1u);
        if ((rd8(sp0 + 7u) & 0x80u) != 0u)
        {
            wr32(sp0 + 8u, rd32(sp0 + 8u) | 1u);
        }
        wr32(sp0 + 4u, rd32(sp0 + 4u) << 1u);
        esi = esi - 1u;
        goto L_1031f6f7;
    }
    else
    {
        edx = in_edx;
        esi = 0u;
        loc_c_d = 0.0;
    }
L_1031f75b: ;
    wr32(arg3, esi);
    g->edx = edx;
    fpush(g, loc_c_d);
    return;
L_1031f710: ;
    wr16(sp0 + 0xau, rd16(sp0 + 0xau) & 0xffefu);
    if (eax != 0u)
    {
        wr8(sp0 + 0xbu, rd8(sp0 + 0xbu) | 0x80u);
    }
    d3 = rdf64(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), 0u, 5, cow_dlo(d3), cow_dhi(d3), 0u, in_esi, self);
    t4 = g->edx;
    d5 = cow_take_float(g);
    edx = t4;
    loc_c_d = d5;
    goto L_1031f75b;
L_1031f734: ;
    d6 = rdf64(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), 0u, 5, cow_dlo(d6), cow_dhi(d6), 0u, in_esi, self);
    t7 = g->edx;
    d8 = cow_take_float(g);
    edx = t7;
    esi = (uint32_t)(int16_t)(rd32(sp0 + 0xau) >> 4u & 0x7ffu) - 0x3feu;
    loc_c_d = d8;
    goto L_1031f75b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f6a5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031f6a5(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
