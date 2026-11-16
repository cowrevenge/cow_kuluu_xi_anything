/* f_0x100a79a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a79a0(Guest* g)
{
    double d13;
    double d22;
    double d28;
    double d29;
    double d44;
    double d45;
    double d46;
    double d49;
    double d51;
    double d52;
    double d56;
    double d57;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 156u);

    wr32(sp0 - 0x74u, in_ebx);
    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x7cu, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x7cu;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t5 = g->edx;
    t6 = rd32(t1 + 0x24u);
    wr32(sp0 - 0x6cu, t6);
    d7 = (double)(float)-(double)rdf32(t4 + 0x2cu);
    wrf32(sp0 - 0x70u, (float)d7);
    g->edx = t5;
    t8 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x80u, t11);
    d13 = (double)(float)fr(g, atan2((double)rdf32(sp0 - 0x70u), (double)rdf32(sp0 - 0x6cu)));
    wrf32(sp0 - 0x80u, (float)d13);
    g->edx = t12;
    t14 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, cow_f2bits(d13));
    t15 = g->edx;
    wr32(sp0 - 0x80u, arg1);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, arg1);
    t17 = g->ecx;
    t18 = g->edx;
    if (rd8(COW_IMG(0x10487f81u)) == 0u)
    {
        eax = (t16 & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        edx = t18;
    }
    else
    {
        eax = (t16 & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
        ecx = t17;
        edx = t18;
        if ((double)rdf32(COW_IMG(0x10487f64u)) != (double)rdf32(COW_IMG(0x103295d8u))) goto L_100a7a35;
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f64u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        if ((double)rdf32(COW_IMG(0x10487f6cu)) == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10487f6cu)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            goto L_100a7b60;
        }
L_100a7a35: ;
        wr32(sp0 - 0x80u, COW_IMG(0x10487f64u));
        wr32(sp0 - 0x84u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x7cu;
        t19 = cow_cdecl(g, COW_IMG(0x10027530u), 2, arg1, COW_IMG(0x10487f64u));
        t20 = g->ecx;
        t21 = g->edx;
        d22 = cow_take_float(g);
        if (!(d22 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            ecx = t20;
            edx = t21;
        }
        else
        {
            eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            ecx = t20;
            wr32(sp0 - 0x80u, arg1);
            wr32(sp0 - 0x84u, sp0 - 0x50u);
            g->ecx = ecx;
            g->edx = sp0 - 0x50u;
            g->esp = sp0 - 0x78u;
            cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x50u, arg1, rd32(sp0 - 0x7cu));
            t23 = g->ecx;
            t24 = g->edx;
            wr32(sp0 - 0x88u, COW_IMG(0x10487f64u));
            wr32(sp0 - 0x8cu, sp0 - 0x5cu);
            g->esp = sp0 - 0x80u;
            cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x5cu, COW_IMG(0x10487f64u), sp0 - 0x50u);
            wr32(sp0 - 0x90u, sp0 - 0x5cu);
            wr32(sp0 - 0x94u, sp0 - 0x50u);
            wr32(sp0 - 0x98u, sp0 - 0x68u);
            g->eax = sp0 - 0x68u;
            g->ecx = sp0 - 0x5cu;
            g->edx = sp0 - 0x50u;
            g->esp = sp0 - 0x8cu;
            t25 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x68u, sp0 - 0x50u, sp0 - 0x5cu);
            t26 = g->ecx;
            t27 = g->edx;
            d28 = (double)rdf32(sp0 - 0x64u);
            if ((cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032dfa0u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032dfa0u)), 0u) & 0x4100u;
                ecx = t26;
                edx = t27;
            }
            else
            {
                eax = cow_fsw(g, d28, (double)rdf32(COW_IMG(0x1032dfa0u)), 0u) & 0x4100u;
                ecx = t26;
                edx = t27;
                d29 = (double)rdf32(sp0 - 0x64u);
                if (!(d29 < (double)rdf32(COW_IMG(0x1032df40u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032df40u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032df40u)), 0u);
                    wr32(sp0 - 0x80u, 0u);
                    g->ebx = arg1;
                    g->ecx = self;
                    g->edx = edx;
                    g->esp = sp0 - 0x7cu;
                    t30 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                    t31 = g->ecx;
                    t32 = g->edx;
                    eax = t30;
                    ecx = t31;
                    edx = t32;
                }
            }
        }
        wr32(sp0 - 0x80u, COW_IMG(0x10487f64u));
        wr32(sp0 - 0x84u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x7cu;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f64u));
        t33 = g->edx;
        g->edx = t33;
        t34 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
        t35 = g->edx;
        if (t34 == 0u)
        {
            eax = t34;
            edx = t35;
        }
        else
        {
            edx = t35;
            g->esp = sp0 - 0x7cu;
            t36 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
            g->edx = rd32(self);
            t37 = rd32(self);
            t38 = cow_thiscall(g, rd32(t37 + 0x1bcu), self, 0);
            t39 = g->edx;
            wr32(sp0 - 0x80u, t38);
            g->eax = rd32(t36);
            g->edx = t39;
            t40 = rd32(t36);
            t41 = cow_thiscall_cdecl(g, rd32(t40 + 0x1bcu), t36, 1, t38);
            t42 = g->edx;
            wr32(sp0 - 0x84u, t41);
            wr32(sp0 - 0x88u, sp0 - 0x50u);
            g->edx = t42;
            cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x50u, t41, rd32(sp0 - 0x80u));
            t43 = g->edx;
            d44 = (double)rdf32(sp0 - 0x48u);
            d45 = (double)rdf32(sp0 - 0x50u);
            d46 = (double)(float)fr(g, fr(g, d44 * d44) + fr(g, d45 * d45));
            wrf32(sp0 - 0x6cu, (float)d46);
            g->edx = t43;
            t47 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x10487f74u), 0);
            t48 = g->edx;
            wr32(sp0 - 0x80u, self);
            d49 = (double)(float)fr(g, sqrt((double)rdf32(sp0 - 0x6cu)));
            wrf32(sp0 - 0x6cu, (float)d49);
            g->edx = t48;
            cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
            t50 = g->edx;
            d51 = cow_take_float(g);
            wr32(sp0 - 0x80u, t47);
            d52 = (double)(float)fr(g, (double)rdf32(sp0 - 0x6cu) - d51);
            wrf32(sp0 - 0x6cu, (float)d52);
            g->ecx = self;
            g->edx = t50;
            t53 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, t47);
            t54 = g->ecx;
            t55 = g->edx;
            d56 = cow_take_float(g);
            d57 = fr(g, (double)rdf32(sp0 - 0x6cu) - d56);
            if (!(d57 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t53 & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t55;
            }
            else
            {
                eax = (t53 & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                ecx = t54;
                edx = t55;
                wr32(sp0 - 0x80u, COW_IMG(0x10487f8cu));
                wr32(sp0 - 0x84u, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x7cu;
                t58 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, COW_IMG(0x10487f8cu));
                t59 = g->edx;
                eax = t58;
                edx = t59;
            }
        }
    }
L_100a7b60: ;
    g->eax = eax;
    g->esp = sp0 - 0x7cu;
    t60 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = in_ebx;
    return t60;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a79a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a79a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
