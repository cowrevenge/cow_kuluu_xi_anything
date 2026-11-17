/* f_0x10083b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083b40(Guest* g)
{
    double d13;
    double d17;
    double d18;
    double d35;
    double d36;
    double d37;
    double d39;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_7c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
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
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t5 = g->edx;
    wr32(sp0 - 0x7cu, t4);
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t4);
    t6 = g->edx;
    g->eax = rd32(arg1);
    g->edx = t6;
    t7 = rd32(arg1);
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), arg1, 0);
    t9 = g->edx;
    wr32(sp0 - 0x7cu, t8);
    wr32(sp0 - 0x80u, sp0 - 0x50u);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x50u, t8);
    t11 = g->ecx;
    t12 = g->edx;
    d13 = (double)rdf32(sp0 - 0x48u);
    if (!(d13 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t10 & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t11;
        edx = t12;
        x0 = (double)rdf32(sp0 - 0x48u);
    }
    else
    {
        eax = (t10 & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = t11;
        edx = t12;
        x0 = (double)rdf32(sp0 - 0x48u);
        x0 = -x0;
    }
    wrf32(sp0 - 0x6cu, (float)(double)(float)x0);
    if (!(x0 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        wr32(sp0 - 0x6cu, 0x3f800000u);
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t14 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    d17 = cow_take_float(g);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0x45610000u);
    d18 = (double)(float)fr(g, d17 * fr(g, (double)rdf32(sp0 - 0x50u) / (double)rdf32(sp0 - 0x6cu)));
    wrf32(sp0 - 0x6cu, (float)d18);
    g->ecx = t15;
    g->edx = t16;
    t19 = cow_call_regs(g, COW_IMG(0x101cc510u), t14, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    g->ecx = t20;
    t22 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, t21, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        edx = t24;
        ebx = in_ebx;
        loc_64 = 0u;
    }
    else
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        esi = t22;
        edi = t19;
        wr32(sp0 - 0x7cu, in_ebx);
        ebx = rd32(sp0 + 0xcu);
        loc_64 = 0u;
        loc_68 = 0x45610000u;
        loc_7c = in_ebx;
L_10083bf6: ;
        if (esi != arg1)
        {
            wr32(sp0 - 0x80u, 1u);
            wr32(sp0 - 0x84u, ebx);
            wr32(sp0 - 0x88u, arg2);
            wr32(sp0 - 0x8cu, edi);
            wr32(sp0 - 0x90u, esi);
            g->eax = eax;
            g->edx = arg2;
            g->esp = sp0 - 0x7cu;
            t25 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, edi, arg2, ebx, 1u);
            t26 = g->edx;
            if ((uint8_t)t25 == 0u)
            {
                eax = t25;
                edx = t26;
                loc_64 = rd32(sp0 - 0x64u);
                loc_7c = rd32(sp0 - 0x7cu);
            }
            else
            {
                edx = t26;
                g->eax = rd32(esi);
                g->edx = edx;
                t27 = rd32(esi);
                g->esp = sp0 - 0x7cu;
                t28 = cow_thiscall(g, rd32(t27 + 0x1bcu), esi, 0);
                t29 = g->edx;
                wr32(sp0 - 0x80u, t28);
                wr32(sp0 - 0x84u, sp0 - 0x60u);
                t30 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x60u, t28);
                t31 = g->ecx;
                wr32(sp0 - 0x80u, sp0 - 0x60u);
                g->ecx = t31;
                g->edx = sp0 - 0x60u;
                t32 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x60u);
                t33 = g->ecx;
                t34 = g->edx;
                d35 = cow_take_float(g);
                if (!(d35 < (double)rdf32(COW_IMG(0x1032d3e0u))))
                {
                    eax = (t32 & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
                    edx = t34;
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_7c = rd32(sp0 - 0x7cu);
                }
                else
                {
                    eax = (t32 & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032d3e0u)), 0u);
                    ecx = t33;
                    edx = t34;
                    d36 = (double)rdf32(sp0 - 0x58u);
                    if (!(d36 < (double)rdf32(COW_IMG(0x103295d8u))))
                    {
                        t38 = rd32(sp0 - 0x58u);
                        wr32(sp0 + 0xcu, t38);
                        eax = t38;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                        d37 = (double)rdf32(sp0 - 0x58u);
                        wrf32(sp0 + 0xcu, (float)-d37);
                    }
                    d39 = (double)rdf32(sp0 + 0xcu);
                    if (!(d39 < (double)rdf32(COW_IMG(0x1032961cu))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                        wr32(sp0 + 0xcu, 0x3f800000u);
                    }
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x7cu;
                    t40 = cow_stdcall(g, COW_IMG(0x100152c0u), 0);
                    t41 = g->edx;
                    d42 = cow_take_float(g);
                    d43 = fr(g, d42 * fr(g, (double)rdf32(sp0 - 0x60u) / (double)rdf32(sp0 + 0xcu)));
                    d44 = (double)rdf32(sp0 - 0x6cu);
                    if (!(d43 < d44))
                    {
                        eax = (t40 & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, d44, 1u);
                        edx = t41;
                        x0 = d43;
                        goto L_10083cd4;
                    }
                    eax = (t40 & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, d44, 1u);
                    edx = t41;
                    x0 = d43;
                    d45 = fr(g, (double)rdf32(sp0 - 0x6cu) - x0);
                    d46 = (double)rdf32(sp0 - 0x68u);
                    if (!(d45 < d46))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, d46, 1u);
                        x0 = d45;
                        goto L_10083cd4;
                    }
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, d46, 1u);
                    x0 = d45;
                    wrf32(sp0 - 0x68u, (float)(double)(float)x0);
                    wr32(sp0 - 0x64u, esi);
                    loc_64 = esi;
                    loc_7c = rd32(sp0 - 0x7cu);
                }
            }
        }
L_10083cd6: ;
        g->eax = eax;
        g->esp = sp0 - 0x7cu;
        t47 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 != 0u)
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            esi = t47;
            goto L_10083bef;
        }
        eax = t47;
        edx = t49;
        ebx = rd32(sp0 - 0x7cu);
        loc_64 = rd32(sp0 - 0x64u);
    }
    g->esp = sp0 - 0x78u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    return rd32(sp0 - 0x64u);
L_10083bef: ;
    loc_64 = rd32(sp0 - 0x64u);
    loc_68 = rd32(sp0 - 0x68u);
    loc_7c = rd32(sp0 - 0x7cu);
    goto L_10083bf6;
L_10083cd4: ;
    loc_64 = rd32(sp0 - 0x64u);
    loc_7c = rd32(sp0 - 0x7cu);
    goto L_10083cd6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10083b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10083b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
