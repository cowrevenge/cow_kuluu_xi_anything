/* f_0x10316efb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10316efb(Guest* g)
{
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d19;
    double d4;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    double loc_1c_d;
    double loc_20_d;
    double loc_28_d;
    uint32_t loc_30;
    double loc_c_d;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0xffffu);
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x103d0398u)));
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x103d0398u));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), self, 4, t1, 0xffffu, in_esi, in_ebx);
    t3 = g->edx;
    wr32(sp0 - 0x18u, 0xffffu);
    wr32(sp0 - 0x1cu, 0xffffu);
    d4 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x1cu, d4);
    if ((rd32(sp0 + 0xau) & 0x7ff0u) != 0x7ff0u)
    {
        eax = (rd32(sp0 + 0xau) & 0xffff0000u) | (rd32(sp0 + 0xau) & 0x7ff0u);
        edx = t3;
        ebx = t2;
        loc_1c_d = d4;
        goto L_10316f81;
    }
    eax = (rd32(sp0 + 0xau) & 0xffff0000u) | (rd32(sp0 + 0xau) & 0x7ff0u);
    edx = t3;
    ebx = t2;
    loc_1c_d = d4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x1031f64bu), 4, cow_dlo(loc_1c_d), cow_dhi(loc_1c_d), in_esi, in_ebx);
    t6 = g->edx;
    if ((int32_t)t5 <= 0)
    {
        eax = t5;
        ecx = rd32(sp0 - 0x18u);
        edx = t6;
        goto L_10316f64;
    }
    eax = t5;
    ecx = rd32(sp0 - 0x18u);
    edx = t6;
    if ((int32_t)eax <= 2) goto L_10316f56;
    if (eax != 3u) goto L_10316f64;
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, ecx);
    d7 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x20u, d7);
    wr32(sp0 - 0x24u, 0xbu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031f766u), ecx, 3, 0xbu, cow_dlo(d7), cow_dhi(d7));
    t8 = g->edx;
    d9 = cow_take_float(g);
    edx = t8;
    x0 = d9;
L_10316fc6: ;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    fpush(g, x0);
    return;
L_10316f56: ;
    wr32(sp0 - 0x18u, 0xffffu);
    wr32(sp0 - 0x1cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 4, ebx, 0xffffu, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t10 = g->edx;
    edx = t10;
    x0 = rdf64(sp0 + 4u);
    goto L_10316fc6;
L_10316f64: ;
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, ecx);
    d11 = fr(g, rdf64(sp0 + 4u) + rdf64(COW_IMG(0x1034a1e0u)));
    wrf64(sp0 - 0x20u, d11);
    wr32(sp0 - 0x24u, ecx);
    wr32(sp0 - 0x28u, ecx);
    d12 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x28u, d12);
    wr32(sp0 - 0x2cu, 0xbu);
    wr32(sp0 - 0x30u, 8u);
    loc_18 = ebx;
    loc_20_d = d11;
    loc_28_d = d12;
    loc_30 = 8u;
L_10316fbe: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x1031f81au), ecx, 9, loc_30, 0xbu, cow_dlo(loc_28_d), cow_dhi(loc_28_d), cow_dlo(loc_20_d), cow_dhi(loc_20_d), loc_18, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t18 = g->edx;
    d19 = cow_take_float(g);
    edx = t18;
    x0 = d19;
    goto L_10316fc6;
L_10316f81: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x10321ee0u), 0xffffu, 3, cow_dlo(loc_1c_d), cow_dhi(loc_1c_d), in_esi);
    t14 = g->edx;
    d15 = cow_take_float(g);
    wrf64(sp0 - 0xcu, d15);
    d16 = rdf64(sp0 + 4u);
    if (d15 < d16 || d15 > d16)
    {
        eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, d16, 0u);
        ecx = rd32(sp0 - 0x18u);
        edx = t14;
        loc_c_d = d15;
        goto L_10316fa4;
    }
    eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, d16, 0u);
    ecx = rd32(sp0 - 0x18u);
    edx = t14;
    loc_c_d = d15;
L_10316f96: ;
    wr32(sp0 - 0x18u, 0xffffu);
    wr32(sp0 - 0x1cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 4, ebx, 0xffffu, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t20 = g->edx;
    edx = t20;
    x0 = rdf64(sp0 - 0xcu);
    goto L_10316fc6;
L_10316fa4: ;
    if ((ebx & 0x20u) != 0u) goto L_10316f96;
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, ecx);
    wrf64(sp0 - 0x20u, loc_c_d);
    wr32(sp0 - 0x24u, ecx);
    wr32(sp0 - 0x28u, ecx);
    d17 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x28u, d17);
    wr32(sp0 - 0x2cu, 0xbu);
    wr32(sp0 - 0x30u, 0x10u);
    loc_18 = ebx;
    loc_20_d = loc_c_d;
    loc_28_d = d17;
    loc_30 = 0x10u;
    goto L_10316fbe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316efb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10316efb(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
