/* f_0x10083a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083a10(Guest* g)
{
    double d27;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x6cu, in_ebp);
    wr32(sp0 - 0x70u, in_esi);
    wr32(sp0 - 0x74u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t5 = g->edx;
    wr32(sp0 - 0x78u, t4);
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t4);
    t6 = g->edx;
    g->eax = rd32(arg1);
    g->edx = t6;
    t7 = rd32(arg1);
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), arg1, 0);
    t9 = g->edx;
    wr32(sp0 - 0x78u, t8);
    wr32(sp0 - 0x7cu, sp0 - 0x50u);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x50u, t8);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x45610000u);
    g->ecx = t11;
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x101cc510u), t10, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    t16 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, t15, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        edx = t18;
        ebx = in_ebx;
        loc_6c = in_ebp;
        loc_70 = in_esi;
        loc_74 = in_edi;
        loc_64 = 0u;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        esi = t16;
        edi = t13;
        wr32(sp0 - 0x78u, in_ebx);
        loc_6c = in_ebp;
        loc_70 = in_esi;
        loc_74 = in_edi;
        loc_64 = 0u;
        loc_68 = 0x45610000u;
        loc_78 = in_ebx;
L_10083a80: ;
        if (esi != arg1)
        {
            wr32(sp0 - 0x7cu, 1u);
            wr32(sp0 - 0x80u, arg3);
            wr32(sp0 - 0x84u, arg2);
            wr32(sp0 - 0x88u, edi);
            wr32(sp0 - 0x8cu, esi);
            g->eax = eax;
            g->edx = arg2;
            g->esp = sp0 - 0x78u;
            t19 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, edi, arg2, arg3, 1u);
            t20 = g->edx;
            if ((uint8_t)t19 == 0u)
            {
                eax = t19;
                edx = t20;
                loc_6c = rd32(sp0 - 0x6cu);
                loc_70 = rd32(sp0 - 0x70u);
                loc_74 = rd32(sp0 - 0x74u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_78 = rd32(sp0 - 0x78u);
            }
            else
            {
                edx = t20;
                g->eax = rd32(esi);
                g->edx = edx;
                t21 = rd32(esi);
                g->esp = sp0 - 0x78u;
                t22 = cow_thiscall(g, rd32(t21 + 0x1bcu), esi, 0);
                t23 = g->edx;
                wr32(sp0 - 0x7cu, t22);
                wr32(sp0 - 0x80u, sp0 - 0x60u);
                g->edx = t23;
                t24 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x60u, t22);
                t25 = g->ecx;
                t26 = g->edx;
                d27 = (double)rdf32(sp0 - 0x60u);
                if (d27 < (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (t24 & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    edx = t26;
                    loc_6c = rd32(sp0 - 0x6cu);
                    loc_70 = rd32(sp0 - 0x70u);
                    loc_74 = rd32(sp0 - 0x74u);
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_78 = rd32(sp0 - 0x78u);
                }
                else
                {
                    eax = (t24 & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    ecx = t25;
                    wr32(sp0 - 0x7cu, sp0 - 0x60u);
                    g->eax = eax;
                    g->edx = sp0 - 0x60u;
                    g->esp = sp0 - 0x78u;
                    t28 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x60u);
                    t29 = g->edx;
                    d30 = cow_take_float(g);
                    if (!(d30 < (double)rdf32(COW_IMG(0x1032d3e0u))))
                    {
                        eax = (t28 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
                        edx = t29;
                        loc_6c = rd32(sp0 - 0x6cu);
                        loc_70 = rd32(sp0 - 0x70u);
                        loc_74 = rd32(sp0 - 0x74u);
                        loc_64 = rd32(sp0 - 0x64u);
                        loc_78 = rd32(sp0 - 0x78u);
                    }
                    else
                    {
                        eax = (t28 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
                        edx = t29;
                        d31 = (double)rdf32(sp0 - 0x5cu);
                        d32 = (double)rdf32(sp0 - 0x4cu);
                        if (!(d31 <= d32))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 0u);
                            loc_6c = rd32(sp0 - 0x6cu);
                            loc_70 = rd32(sp0 - 0x70u);
                            loc_74 = rd32(sp0 - 0x74u);
                            loc_64 = rd32(sp0 - 0x64u);
                            loc_78 = rd32(sp0 - 0x78u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d31, d32, 0u);
                            d33 = fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(sp0 - 0x50u));
                            d34 = (double)rdf32(sp0 - 0x68u);
                            if (!(d33 < d34))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, d34, 1u);
                                x0 = d33;
                                loc_6c = rd32(sp0 - 0x6cu);
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_74 = rd32(sp0 - 0x74u);
                                loc_64 = rd32(sp0 - 0x64u);
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, d34, 1u);
                                x0 = d33;
                                wrf32(sp0 - 0x68u, (float)(double)(float)x0);
                                wr32(sp0 - 0x64u, esi);
                                loc_6c = rd32(sp0 - 0x6cu);
                                loc_70 = rd32(sp0 - 0x70u);
                                loc_74 = rd32(sp0 - 0x74u);
                                loc_64 = esi;
                                loc_78 = rd32(sp0 - 0x78u);
                            }
                        }
                    }
                }
            }
        }
        g->eax = eax;
        g->esp = sp0 - 0x78u;
        t35 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t36 = g->ecx;
        t37 = g->edx;
        if (t35 != 0u)
        {
            eax = t35;
            ecx = t36;
            edx = t37;
            esi = t35;
            goto L_10083a7c;
        }
        eax = t35;
        edx = t37;
        ebx = rd32(sp0 - 0x78u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_64 = rd32(sp0 - 0x64u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t38 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x70u);
    g->edi = rd32(sp0 - 0x74u);
    g->ebp = rd32(sp0 - 0x6cu);
    g->edx = t38;
    return rd32(sp0 - 0x64u);
L_10083a7c: ;
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_64 = rd32(sp0 - 0x64u);
    loc_68 = rd32(sp0 - 0x68u);
    loc_78 = rd32(sp0 - 0x78u);
    goto L_10083a80;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10083a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10083a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
