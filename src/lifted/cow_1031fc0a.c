/* f_0x1031fc0a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1031fc0a(Guest* g)
{
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_10_d;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 1u);
    if ((arg1 & 8u) == 0u) goto L_1031fc35;
    if (!(arg3 & 1u)) goto L_1031fc35;
    wr32(sp0 - 0x1cu, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1031ff63u), arg1, self, g->edx, 1, 3, 1u, in_edi, in_ebx);
    t2 = g->edx;
    eax = t1;
    ecx = 1u;
    edx = t2;
    esi = in_esi;
    edi = arg1 & 0x17u;
    loc_4 = in_ebp;
    loc_14 = in_ebx;
    loc_18 = in_edi;
L_1031fdff: ;
    if ((arg1 & 0x10u) != 0u)
    {
        if ((arg3 & 0x20u) != 0u)
        {
            wr32(sp0 - 0x1cu, 0x20u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x1031ff63u), eax, ecx, g->edx, 1, 3, 0x20u, loc_18, loc_14);
            t12 = g->edx;
            edx = t12;
            edi = edi & 0xffffffefu;
            loc_4 = rd32(sp0 - 4u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    }
    g->ebx = loc_14;
    g->esi = esi;
    g->edi = loc_18;
    g->ebp = loc_4;
    g->edx = edx;
    return edi == 0u;
L_1031fc35: ;
    if ((arg1 & 4u) == 0u) goto L_1031fc4f;
    if ((arg3 & 4u) == 0u) goto L_1031fc4f;
    wr32(sp0 - 0x1cu, 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x1031ff63u), arg1, self, g->edx, 1, 3, 4u, in_edi, in_ebx);
    t4 = g->edx;
    eax = t3;
    ecx = 4u;
    edx = t4;
    esi = in_esi;
    edi = arg1 & 0x1bu;
    loc_4 = in_ebp;
    loc_14 = in_ebx;
    loc_18 = in_edi;
    goto L_1031fdff;
L_1031fc4f: ;
    if (!(arg1 & 1u)) goto L_1031fd29;
    if ((arg3 & 8u) == 0u) goto L_1031fd29;
    wr32(sp0 - 0x1cu, 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1031ff63u), arg1, self, g->edx, 1, 3, 8u, in_edi, in_ebx);
    t5 = g->edx;
    if ((arg3 & 0xc00u) == 0u)
    {
        edx = t5;
        goto L_1031fd01;
    }
    edx = t5;
    if ((arg3 & 0xc00u) == 0x400u) goto L_1031fcd9;
    if ((arg3 & 0xc00u) == 0x800u) goto L_1031fcb1;
    if ((arg3 & 0xc00u) != 0xc00u)
    {
        eax = 0xc00u;
        ecx = arg3 & 0xc00u;
        goto L_1031fd21;
    }
    if (rdf64(arg2) > rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 1u);
        x0 = rdf64(COW_IMG(0x103d2c48u));
    }
    else
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 1u);
        x0 = rdf64(COW_IMG(0x103d2c48u));
        x0 = -x0;
    }
    wrf64(sp0 - 0x10u, x0);
L_1031fd1f: ;
    wrf64(arg2, x0);
    ecx = arg2;
L_1031fd21: ;
    esi = in_esi;
    edi = arg1 & 0x1eu;
    loc_4 = rd32(sp0 - 4u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    goto L_1031fdff;
L_1031fcb1: ;
    if (!(rdf64(arg2) > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 0u);
        x0 = -rdf64(COW_IMG(0x103d2c48u));
    }
    else
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 0u);
        x0 = rdf64(COW_IMG(0x103d2c38u));
    }
    wrf64(sp0 - 0x10u, x0);
    goto L_1031fd1f;
L_1031fcd9: ;
    if (!(rdf64(arg2) > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 0u);
        x0 = -rdf64(COW_IMG(0x103d2c38u));
    }
    else
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 0u);
        x0 = rdf64(COW_IMG(0x103d2c48u));
    }
    wrf64(sp0 - 0x10u, x0);
    goto L_1031fd1f;
L_1031fd01: ;
    if (rdf64(arg2) > rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 1u);
        x0 = rdf64(COW_IMG(0x103d2c38u));
    }
    else
    {
        eax = (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 1u);
        x0 = rdf64(COW_IMG(0x103d2c38u));
        x0 = -x0;
    }
    wrf64(sp0 - 0x10u, x0);
    goto L_1031fd1f;
L_1031fd29: ;
    if ((arg1 & 2u) == 0u)
    {
        eax = arg1;
        ecx = self;
        edx = in_edx;
        esi = in_esi;
        edi = arg1 & 0x1fu;
        loc_4 = in_ebp;
        loc_14 = in_ebx;
        loc_18 = in_edi;
    }
    else
    {
        if ((arg3 & 0x10u) == 0u)
        {
            eax = arg1;
            ecx = self;
            edx = in_edx;
            esi = in_esi;
            edi = arg1 & 0x1fu;
            loc_4 = in_ebp;
            loc_14 = in_ebx;
            loc_18 = in_edi;
        }
        else
        {
            wr32(sp0 - 0x1cu, in_esi);
            if ((arg1 & 0x10u) == 0u)
            {
                esi = 0u;
            }
            else
            {
                esi = 1u;
            }
            wrf64(sp0 - 0x10u, rdf64(arg2));
            if (!(rdf64(arg2) < rdf64(COW_IMG(0x1034a1d8u)) || rdf64(arg2) > rdf64(COW_IMG(0x1034a1d8u))))
            {
                eax = (arg2 & 0xffff0000u) | (uint16_t)cow_fsw(g, rdf64(arg2), rdf64(COW_IMG(0x1034a1d8u)), 0u);
                ecx = self;
                edx = in_edx;
                esi = 1u;
                loc_4 = in_ebp;
                loc_14 = in_ebx;
                loc_18 = in_edi;
                loc_1c = in_esi;
            }
            else
            {
                loc_10_d = rdf64(arg2);
                wr32(sp0 - 0x20u, sp0 - 8u);
                wr32(sp0 - 0x24u, self);
                wr32(sp0 - 0x28u, self);
                wrf64(sp0 - 0x28u, loc_10_d);
                g->edx = in_edx;
                g->esp = sp0 - 0x1cu;
                cow_call_regs(g, COW_IMG(0x1031f6a5u), sp0 - 8u, self, g->edx, 1, 3, cow_dlo(loc_10_d), cow_dhi(loc_10_d), sp0 - 8u);
                t6 = g->edx;
                d7 = cow_take_float(g);
                wrf64(sp0 - 0x10u, d7);
                if ((int32_t)(rd32(sp0 - 8u) - 0x600u) >= -1074)
                {
                    eax = rd32(sp0 - 8u);
                    ecx = rd32(sp0 - 8u) - 0x600u;
                    loc_10_d = d7;
                    if (loc_10_d >= rdf64(COW_IMG(0x1034a1d8u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_d, rdf64(COW_IMG(0x1034a1d8u)), 0u);
                        edx = 0u;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_10_d, rdf64(COW_IMG(0x1034a1d8u)), 0u);
                        edx = 1u;
                    }
                    wr16(sp0 - 0xau, (rd8(sp0 - 0xau) & 0xfu) | 0x10u);
                    if ((int32_t)ecx >= -1021)
                    {
                        loc_10 = rd32(sp0 - 0x10u);
                        loc_c = rd32(sp0 - 0xcu);
                    }
                    else
                    {
                        eax = 0xfffffc03u - ecx;
                        loc_10 = rd32(sp0 - 0x10u);
                        loc_c = rd32(sp0 - 0xcu);
L_1031fdba: ;
                        if (loc_10 & 1u)
                        {
                            if (esi == 0u)
                            {
                                esi = 1u;
                            }
                        }
                        wr32(sp0 - 0x10u, loc_10 >> 1u);
                        if (!(loc_c & 1u))
                        {
                            loc_10 = loc_10 >> 1u;
                        }
                        else
                        {
                            loc_10 = loc_10 >> 1u;
                            wr8(sp0 - 0xdu, loc_10 >> 0x18u | 0x80u);
                            loc_10 = rd32(sp0 - 0x10u);
                        }
                        wr32(sp0 - 0xcu, loc_c >> 1u);
                        if (eax != 1u)
                        {
                            eax = eax - 1u;
                            loc_c = loc_c >> 1u;
                            goto L_1031fdba;
                        }
                        loc_c = loc_c >> 1u;
                    }
                    if (edx != 0u)
                    {
                        d8 = -cow_bits2d(loc_10, loc_c);
                        wrf64(sp0 - 0x10u, d8);
                        loc_c = rd32(sp0 - 0xcu);
                    }
                }
                else
                {
                    ecx = rd32(sp0 - 8u) - 0x600u;
                    edx = t6;
                    wrf64(sp0 - 0x10u, 0.0);
                    esi = 1u;
                    loc_c = rd32(sp0 - 0xcu);
                }
                d9 = rdf64(sp0 - 0x10u);
                wrf64(arg2, d9);
                eax = arg2;
                loc_4 = rd32(sp0 - 4u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
            }
            if (esi == 0u)
            {
                esi = loc_1c;
            }
            else
            {
                esi = loc_1c;
                wr32(sp0 - 0x1cu, 0x10u);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t10 = cow_call_regs(g, COW_IMG(0x1031ff63u), eax, ecx, g->edx, 1, 3, 0x10u, loc_18, loc_14);
                t11 = g->edx;
                eax = t10;
                ecx = 0x10u;
                edx = t11;
                loc_4 = rd32(sp0 - 4u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
            }
            edi = arg1 & 0x1du;
        }
    }
    goto L_1031fdff;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031fc0a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031fc0a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
