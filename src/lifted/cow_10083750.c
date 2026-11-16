/* f_0x10083750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10083750(Guest* g)
{
    double d30;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d44;
    double d45;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_74;
    uint32_t loc_7c;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 160u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x7cu;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_10083760;
    }
    eax = t1;
    return eax;
L_10083760: ;
    wr32(sp0 - 0x80u, in_esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t4 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x84u, t4 + 0x44u);
    wr32(sp0 - 0x88u, sp0 - 0x6cu);
    g->edx = t6;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x6cu, t4 + 0x44u);
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t11 = g->edx;
    wr32(sp0 - 0x84u, t10);
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t15 = g->edx;
    wr32(sp0 - 0x84u, t14);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, t14);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x7cu, 0x4e6e6b28u);
    g->ecx = t17;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x101cc510u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x70u, t19);
    g->edx = t21;
    t22 = cow_stdcall(g, COW_IMG(0x10085240u), 0);
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        edx = t23;
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
        esi = t22;
        wr32(sp0 - 0x84u, in_ebx);
        wr32(sp0 - 0x88u, in_edi);
        ebx = (arg2 >> 9u & 0xffffff00u) | (~(uint8_t)(arg2 >> 9u) & 1u);
L_100837de: ;
        wr32(sp0 - 0x8cu, ebx);
        wr32(sp0 - 0x90u, arg3);
        wr32(sp0 - 0x94u, arg2);
        t24 = rd32(sp0 - 0x70u);
        wr32(sp0 - 0x98u, t24);
        wr32(sp0 - 0x9cu, esi);
        g->edx = arg2;
        g->esp = sp0 - 0x88u;
        t25 = cow_cdecl(g, COW_IMG(0x10083430u), 5, esi, t24, arg2, arg3, ebx);
        t26 = g->edx;
        if ((uint8_t)t25 == 0u)
        {
            edx = t26;
            loc_74 = 0u;
            loc_7c = 0x4e6e6b28u;
        }
        else
        {
            wr32(sp0 - 0x8cu, sp0 - 0x40u);
            wr32(sp0 - 0x90u, sp0 - 0x50u);
            wr32(sp0 - 0x94u, sp0 - 0x60u);
            g->eax = sp0 - 0x60u;
            g->edx = rd32(esi);
            t27 = rd32(esi);
            g->esp = sp0 - 0x88u;
            t28 = cow_thiscall(g, rd32(t27 + 0x3d0u), esi, 3, sp0 - 0x60u, sp0 - 0x50u, sp0 - 0x40u);
            t29 = g->edx;
            if ((uint8_t)t28 == 0u)
            {
                edx = t29;
            }
            else
            {
                eax = t28;
                edx = t29;
                d30 = (double)rdf32(sp0 - 0x60u);
                t31 = rd32(sp0 - 0x54u);
                d32 = (double)rdf32(arg1);
                wr32(arg1 + 0xcu, t31);
                if (d30 <= d32)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, d32, 0u);
                    d33 = (double)rdf32(sp0 - 0x50u);
                    if ((cow_fsw(g, d33, (double)rdf32(arg1), 0u) & 0x100u) == 0u)
                    {
                        eax = cow_fsw(g, d33, (double)rdf32(arg1), 0u) & 0x100u;
                        d34 = (double)rdf32(sp0 - 0x5cu);
                        d35 = (double)rdf32(arg1 + 4u);
                        if (d34 <= d35)
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, d35, 0u);
                            d36 = (double)rdf32(sp0 - 0x4cu);
                            d37 = (double)rdf32(arg1 + 4u);
                            if ((cow_fsw(g, d36, d37, 0u) & 0x100u) == 0u)
                            {
                                eax = cow_fsw(g, d36, d37, 0u) & 0x100u;
                                d38 = (double)rdf32(sp0 - 0x7cu);
                                d39 = (double)rdf32(sp0 - 0x54u);
                                if ((cow_fsw(g, d38, d39, 0u) & 0x4100u) == 0u)
                                {
                                    eax = cow_fsw(g, d38, d39, 0u) & 0x4100u;
                                    d40 = (double)rdf32(sp0 - 0x54u);
                                    if ((cow_fsw(g, d40, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
                                    {
                                        wr32(sp0 - 0x8cu, sp0 - 0x78u);
                                        wr32(sp0 - 0x90u, arg1);
                                        g->eax = sp0 - 0x78u;
                                        g->edx = rd32(esi);
                                        t41 = rd32(esi);
                                        g->esp = sp0 - 0x88u;
                                        t42 = cow_thiscall(g, rd32(t41 + 0x3d4u), esi, 2, arg1, sp0 - 0x78u);
                                        t43 = g->edx;
                                        if ((uint8_t)t42 != 1u)
                                        {
                                            edx = t43;
                                        }
                                        else
                                        {
                                            eax = t42;
                                            edx = t43;
                                            d44 = (double)rdf32(sp0 - 0x7cu);
                                            d45 = (double)rdf32(sp0 - 0x78u);
                                            if ((cow_fsw(g, d44, d45, 0u) & 0x4100u) == 0u)
                                            {
                                                wr32(sp0 - 0x74u, esi);
                                                t46 = rd32(sp0 - 0x78u);
                                                wr32(sp0 - 0x7cu, t46);
                                                loc_74 = esi;
                                                loc_7c = t46;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        g->edx = edx;
        g->esp = sp0 - 0x88u;
        t47 = cow_thiscall(g, COW_IMG(0x10085270u), esi, 0);
        t48 = g->edx;
        if (t47 != 0u)
        {
            esi = t47;
            goto L_100837de;
        }
        eax = t47;
        edx = t48;
        ebx = rd32(sp0 - 0x84u);
        edi = rd32(sp0 - 0x88u);
    }
    g->esp = sp0 - 0x80u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x80u);
    g->edi = edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10083750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10083750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
