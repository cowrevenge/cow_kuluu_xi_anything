/* f_0x1031b30c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1031b30c(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_c_d;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    d1 = rdf64(sp0 + 4u);
    if (d1 >= rdf64(COW_IMG(0x1034a1d8u)))
    {
        x0 = rdf64(sp0 + 4u);
    }
    else
    {
        x0 = rdf64(sp0 + 4u);
        x0 = -x0;
    }
    if (rd32(sp0 + 0x10u) != 0x7ff00000u)
    {
        loc_c_d = x0;
        goto L_1031b36f;
    }
    loc_c_d = x0;
    if (rd32(sp0 + 0xcu) != 0u) goto L_1031b397;
    if (loc_c_d > rdf64(COW_IMG(0x1034a1e0u))) goto L_1031b3b3;
    eax = (uint16_t)cow_fsw(g, loc_c_d, rdf64(COW_IMG(0x1034a1e0u)), 0u) | 0x7ff00000u;
    if (!(loc_c_d >= rdf64(COW_IMG(0x1034a1e0u)))) goto L_1031b3c9;
L_1031b35c: ;
    d2 = rdf64(COW_IMG(0x103d2c40u));
    wrf64(arg5, d2);
    edx = 0u;
    esi = 1u;
L_1031b437: ;
    g->edx = edx;
    return esi;
L_1031b36f: ;
    if (rd32(sp0 + 0x10u) != 0xfff00000u) goto L_1031b397;
    if (rd32(sp0 + 0xcu) != 0u) goto L_1031b397;
    if (loc_c_d > rdf64(COW_IMG(0x1034a1e0u))) goto L_1031b3c9;
    eax = (uint16_t)cow_fsw(g, loc_c_d, rdf64(COW_IMG(0x1034a1e0u)), 0u) | 0x7ff00000u;
    if (loc_c_d >= rdf64(COW_IMG(0x1034a1e0u))) goto L_1031b35c;
L_1031b3b3: ;
    edx = 0u;
    x0 = rdf64(COW_IMG(0x103d2c38u));
L_1031b432: ;
    wrf64(arg5, x0);
    esi = 0u;
    goto L_1031b437;
L_1031b397: ;
    if (arg2 != 0x7ff00000u) goto L_1031b3cd;
    if (arg1 != 0u)
    {
        edx = 0u;
        esi = 0u;
        goto L_1031b437;
    }
    d3 = rdf64(sp0 + 0xcu);
    if (!(d3 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (uint16_t)cow_fsw(g, d3, rdf64(COW_IMG(0x1034a1d8u)), 0u) | 0x7ff00000u;
        goto L_1031b3bb;
    }
    goto L_1031b3b3;
L_1031b3bb: ;
    d4 = rdf64(sp0 + 0xcu);
    if (d4 >= rdf64(COW_IMG(0x1034a1d8u)))
    {
        edx = 0u;
        goto L_1031b430;
    }
L_1031b3c9: ;
    edx = 0u;
    x0 = 0.0;
    goto L_1031b432;
L_1031b3cd: ;
    if (arg2 != 0xfff00000u)
    {
        edx = 0u;
        esi = 0u;
        goto L_1031b437;
    }
    if (arg1 != 0u)
    {
        edx = 0u;
        esi = 0u;
        goto L_1031b437;
    }
    d5 = rdf64(sp0 + 0xcu);
    g->edx = 0u;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1031b43cu), 0xfff00000u, 5, cow_dlo(d5), cow_dhi(d5), in_esi, cow_dlo(loc_c_d), cow_dhi(loc_c_d));
    t7 = g->edx;
    d8 = rdf64(sp0 + 0xcu);
    if (!(d8 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        ecx = t6;
        edx = t7;
        goto L_1031b40b;
    }
    ecx = t6;
    edx = t7;
    if (ecx != 1u)
    {
        x0 = rdf64(COW_IMG(0x103d2c38u));
    }
    else
    {
        x0 = rdf64(COW_IMG(0x103d2c38u));
        x0 = -x0;
    }
    wrf64(sp0 + 0xcu, x0);
    x0 = rdf64(sp0 + 0xcu);
    goto L_1031b432;
L_1031b40b: ;
    d9 = rdf64(sp0 + 0xcu);
    if (d9 >= rdf64(COW_IMG(0x1034a1d8u))) goto L_1031b430;
    if (ecx != 1u)
    {
        x0 = 0.0;
    }
    else
    {
        x0 = rdf64(COW_IMG(0x103d2c58u));
    }
    wrf64(sp0 + 0xcu, x0);
    x0 = rdf64(sp0 + 0xcu);
    goto L_1031b432;
L_1031b430: ;
    x0 = 1.0;
    goto L_1031b432;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b30c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b30c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
