/* f_0x10252ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10252ce0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_28;
    uint32_t loc_2c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x20u, in_ebp);
    if ((int32_t)rd32(sp0 + 8u) < 0)
    {
        eax = rd32(sp0 + 8u);
        goto L_10252eb4;
    }
    eax = rd32(sp0 + 8u);
    if ((int32_t)eax >= (int32_t)rd32(rd32(sp0 + 4u) + 0x34u)) goto L_10252eb4;
    ebp = rd32(sp0 + 4u);
    t1 = rd32(ebp);
    wr32(sp0 + 8u, 0u);
    if ((t1 & 4u) == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        ecx = t1;
        if ((ecx & 8u) == 0u)
        {
            ebx = in_ebx;
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            if (eax != rd32(ebp + 0x30u))
            {
                wr32(ebp + 4u, 0u);
                wr32(ebp + 8u, 0u);
                wr32(ebp + 0x30u, eax);
            }
            wr32(sp0 - 0x24u, in_edi);
            t2 = eax * 0x10u + rd32(ebp + 0x3cu);
            wr32(sp0 - 0x28u, sp0 - 0x1cu);
            wr32(sp0 - 0x2cu, t2);
            t3 = rd32(ebp + 0x3cu);
            wr32(sp0 + 4u, t2);
            g->eax = sp0 - 0x1cu;
            g->edx = 0u;
            g->esp = sp0 - 0x24u;
            t4 = cow_cdecl(g, COW_IMG(0x10289ec0u), 2, t2, sp0 - 0x1cu);
            t5 = g->edx;
            if (t4 == 0xffffffffu)
            {
                ebx = in_ebx;
                esi = in_esi;
            }
            else
            {
                edx = t5;
                edi = t2;
                if ((int32_t)arg3 < (int32_t)rd32(sp0 - 0x18u))
                {
                    ebx = in_ebx;
                    esi = in_esi;
                }
                else
                {
                    wr32(sp0 - 0x28u, in_ebx);
                    wr32(sp0 - 0x2cu, in_esi);
L_10252d62: ;
                    if (rd32(sp0 - 0x1cu) != 0u)
                    {
                        eax = rd32(sp0 - 0x1cu);
                        if (eax != 1u)
                        {
                            if (eax != 2u)
                            {
                                ecx = arg3;
                                loc_28 = in_ebx;
                                loc_2c = in_esi;
                            }
                            else
                            {
                                t20 = rd32(sp0 - 0x14u);
                                wr32(ebp + 8u, t20);
                                ecx = t20;
                                loc_28 = in_ebx;
                                loc_2c = in_esi;
                            }
                        }
                        else
                        {
                            t19 = rd32(sp0 - 0x14u);
                            wr32(ebp + 4u, t19);
                            eax = t19;
                            ecx = arg3;
                            loc_28 = in_ebx;
                            loc_2c = in_esi;
                        }
                    }
                    else
                    {
                        eax = rd32(sp0 - 0x1cu);
                        if (rd32(ebp + 0x14u) == 0u)
                        {
                            ecx = arg3;
                            goto L_10252e08;
                        }
                        esi = rd32(ebp + 0x14u);
                        if (rd32(esi) == 0u)
                        {
                            ecx = arg3;
                            goto L_10252e08;
                        }
                        t6 = rd32(sp0 - 0x14u);
                        wr32(sp0 - 0x30u, t6);
                        wr32(sp0 - 0x34u, COW_IMG(0x10350958u));
                        wr32(sp0 - 0x38u, sp0 - 0x10u);
                        g->ebx = arg4;
                        g->esp = sp0 - 0x24u;
                        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10350958u), t6, in_esi, in_ebx);
                        t7 = rd32(sp0 - 0x10u);
                        wr32(sp0 - 0x30u, t7);
                        wr32(sp0 - 0x34u, 0x3du);
                        wr32(sp0 - 0x38u, sp0 + 0x10u);
                        g->eax = sp0 + 0x10u;
                        g->edx = t7;
                        t8 = rd32(esi);
                        g->esp = sp0 - 0x2cu;
                        t9 = cow_thiscall(g, COW_IMG(0x10072290u), t8, 3, sp0 + 0x10u, 0x3du, t7);
                        t10 = g->ecx;
                        t11 = g->edx;
                        if (rd32(t9) == 0u)
                        {
                            eax = rd32(t9);
                            ecx = t10;
                            edx = t11;
                            goto L_10252e08;
                        }
                        eax = rd32(t9);
                        ecx = t10;
                        edx = t11;
                        if (rd32(eax) == 0u)
                        {
                            eax = rd32(eax);
                            goto L_10252e08;
                        }
                        eax = rd32(eax);
                        esi = sp0 - 0x10u;
                        edi = COW_IMG(0x10389c64u);
                        ecx = 5u;
                        cf = 0u;
                        pf = PARITY(0u);
                        af = 0u;
                        zf = 1u;
                        sf = 0u;
                        of = 0u;
                        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                        wr32(sp0 - 0x30u, 0x7fu);
                        if (!zf)
                        {
                            ecx = eax;
                            goto L_10252de6;
                        }
                        ecx = eax;
                        wr32(sp0 - 0x34u, 0x40u);
                        g->edx = 0u;
                        g->esp = sp0 - 0x2cu;
                        cow_thiscall(g, COW_IMG(0x10036f00u), ecx, 2, 0x40u, 0x7fu);
                        t12 = g->ecx;
                        t13 = g->edx;
                        t14 = rd32(sp0 + 8u) + 1u;
                        t15 = rd32(sp0 + 4u);
                        wr32(sp0 + 8u, t14);
                        eax = t14;
                        ecx = t12;
                        edx = t13;
                        edi = t15;
                    }
L_10252e28: ;
                    wr32(sp0 - 0x30u, edi);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t21 = cow_cdecl(g, COW_IMG(0x10289f30u), 1, edi);
                    t22 = g->ecx;
                    t23 = g->edx;
                    if (t21 != 0xffffffffu)
                    {
                        eax = t21;
                        ecx = t22;
                        wr32(sp0 - 0x30u, sp0 - 0x1cu);
                        wr32(sp0 - 0x34u, edi);
                        g->edx = sp0 - 0x1cu;
                        g->esp = sp0 - 0x2cu;
                        cow_cdecl(g, COW_IMG(0x10289ec0u), 2, edi, sp0 - 0x1cu);
                        t24 = g->edx;
                        edx = t24;
                    }
                    else
                    {
                        edx = t23;
                        wr32(sp0 - 0x18u, 0x7fffffffu);
                    }
                    if ((int32_t)arg3 >= 2147483647)
                    {
                        loc_18 = 0x7fffffffu;
                        goto L_10252d62;
                    }
                    ebx = rd32(sp0 - 0x28u);
                    esi = rd32(sp0 - 0x2cu);
                }
            }
            if ((int32_t)rd32(ebp + 4u) <= 0)
            {
                edi = rd32(sp0 - 0x24u);
            }
            else
            {
                ecx = rd32(ebp + 4u);
                edi = rd32(sp0 - 0x24u);
                t25 = rd32(COW_IMG(0x10455c20u));
                t26 = rd32(rd32(COW_IMG(0x10455c20u)) + 0xdb4u);
                wr8(t25 + 0xdbcu, 1u);
                wr32(t25 + 0xdb4u, ecx + t26);
            }
            if ((int32_t)rd32(ebp + 8u) > 0)
            {
                eax = rd32(ebp + 8u);
                t27 = rd32(COW_IMG(0x10455c20u));
                t28 = rd32(rd32(COW_IMG(0x10455c20u)) + 0xdb4u);
                wr8(t27 + 0xdbcu, 1u);
                t29 = t28 + ((int32_t)eax > 127);
                wr32(t27 + 0xdb4u, t29);
            }
        }
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    return rd32(sp0 + 8u);
L_10252de6: ;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x42800000u);
    wr32(sp0 - 0x40u, 0x44000000u);
    wr32(sp0 - 0x44u, 0x41a00000u);
    wr32(sp0 - 0x48u, 0x40400000u);
    wr32(sp0 - 0x4cu, arg4);
    g->eax = eax;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t16 = cow_thiscall(g, COW_IMG(0x10037020u), ecx, 8, arg4, 0x40400000u, 0x41a00000u, 0x44000000u, 0x42800000u, 0u, 0u, 0x7fu);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    edi = rd32(sp0 + 4u);
L_10252e08: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    loc_28 = in_ebx;
    loc_2c = in_esi;
    goto L_10252e28;
L_10252eb4: ;
    g->ebx = in_ebx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252ce0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
