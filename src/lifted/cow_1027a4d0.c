/* f_0x1027a4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027a4d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1027a4f0;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b405cu), in_ebp);
    t2 = g->edx;
    g->edx = t2;
    return t1 & 0xffffff00u;
L_1027a4f0: ;
    if (rd32(arg1 + 0x58u) != 0u)
    {
        eax = rd32(arg1 + 0x58u);
        goto L_1027a4fe;
    }
    eax = rd32(arg1 + 0x58u);
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_1027a4fe: ;
    if (rd32(arg1 + 0x98u) != 0u)
    {
        ecx = rd32(arg1 + 0x98u);
        goto L_1027a51c;
    }
    ecx = rd32(arg1 + 0x98u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4024u), in_ebp);
    t4 = g->edx;
    g->edx = t4;
    return t3 & 0xffffff00u;
L_1027a51c: ;
    if ((int32_t)eax <= 0)
    {
        edx = in_edx;
        loc_10 = rd32(sp0 - 0x10u) & 0xffffffu;
    }
    else
    {
        loc_10 = rd32(sp0 - 0x10u) & 0xffffffu;
        edx = in_edx;
        edi = 0u;
        loc_8 = 0u;
        loc_c = rd32(sp0 - 0xcu);
L_1027a532: ;
        if ((rd32(edi * 4u + rd32(arg1 + 0x54u)) >> 8u & 8u) != 0u)
        {
            ecx = rd32(edi * 4u + rd32(arg1 + 0x54u));
        }
        else
        {
            eax = rd32(arg1 + 0x54u);
            ecx = rd32(edi * 4u + rd32(arg1 + 0x54u));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t5 = cow_cdecl(g, COW_IMG(0x102798b0u), 2, arg1, edi);
            t6 = g->ecx;
            t7 = g->edx;
            if (t5 != 0u)
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                esi = t5;
                loc_24 = edi;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t10 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, arg1, loc_24);
                t11 = g->ecx;
                t12 = g->edx;
                if (rd32(esi + 0x34u) != 0u)
                {
                    eax = t10;
                    edx = t12;
                    esi = rd32(esi + 0x34u);
                    loc_4 = t10;
                    t15 = rd32(edi * 4u + rd32(arg1 + 0x98u));
                    g->eax = eax;
                    g->ecx = rd32(arg1 + 0x98u);
                    g->edx = edx;
                    t16 = rd32(arg1 + 0x98u);
                    g->esp = sp0 - 0x20u;
                    t17 = cow_cdecl(g, COW_IMG(0x10279870u), 2, arg1, t15);
                    t18 = g->ecx;
                    t19 = g->edx;
                    if (t17 != 0u)
                    {
                        eax = t17;
                        ecx = t18;
                        edx = t19;
                        ebx = t15;
                        edi = t17;
                        g->eax = eax;
                        g->esp = sp0 - 0x20u;
                        t22 = cow_cdecl(g, COW_IMG(0x10279b40u), 2, arg1, ebx);
                        if (rd32(edi) == 0xf0001u)
                        {
                            eax = (uint8_t)-(rd32(esi + 0x5cu) != 0u);
                            ecx = (uint8_t)-(rd32(esi + 0x60u) != 0u);
                            ebx = (uint8_t)-(rd32(esi + 0x58u) != 0u);
                            ebp = t22;
                            loc_c = (uint8_t)-(rd32(esi + 0x60u) != 0u) << 0x10u;
                            goto L_1027a634;
                        }
                        eax = (uint8_t)-(rd32(esi + 0x5cu) != 0u);
                        ecx = (uint8_t)-(rd32(esi + 0x60u) != 0u);
                        edx = rd32(edi) - 0xf0001u;
                        ebx = (uint8_t)-(rd32(esi + 0x58u) != 0u);
                        ebp = t22;
                        loc_c = (uint8_t)-(rd32(esi + 0x60u) != 0u) << 0x10u;
                        if (edx == 1u) goto L_1027a627;
                        edx = edx - 1u;
                        if (edx == 3u)
                        {
                            edx = edx - 3u;
                            goto L_1027a663;
                        }
                        edx = edx - 3u;
L_1027a6cf: ;
                    }
                    else
                    {
                        eax = t17;
                        ecx = t18;
                        ebx = t15;
                        g->ecx = ecx;
                        g->edx = loc_4;
                        g->esp = sp0 - 0x24u;
                        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3facu), ebx);
                        t20 = g->ecx;
                        t21 = g->edx;
                        ecx = t20;
                        edx = t21;
                        loc_10 = (loc_10 & 0xffffffu) | 0xff000000u;
                    }
                    edi = loc_8;
                }
                else
                {
                    eax = t10;
                    ecx = t11;
                    edx = t12;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3fdcu), eax);
                    t13 = g->ecx;
                    t14 = g->edx;
                    ecx = t13;
                    edx = t14;
                    loc_10 = (loc_10 & 0xffffffu) | 0xff000000u;
                }
            }
            else
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                loc_24 = edi;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4008u), loc_24);
                t8 = g->ecx;
                t9 = g->edx;
                ecx = t8;
                edx = t9;
                loc_10 = (loc_10 & 0xffffffu) | 0xff000000u;
            }
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x58u))
        {
            loc_8 = edi + 1u;
            edi = edi + 1u;
            goto L_1027a532;
        }
    }
    g->edx = edx;
    return loc_10 >> 0x18u == 0u;
L_1027a627: ;
    if (rd32(edi + 0x50u) == 0u)
    {
        edx = rd32(edi + 0x50u);
        goto L_1027a6cf;
    }
    edx = rd32(edi + 0x50u);
L_1027a663: ;
    if ((uint8_t)eax == 0u)
    {
        g->eax = loc_4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3f70u), loc_4);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = (t24 & 0xffffff00u) | (uint8_t)(loc_c >> 0x10u);
        edx = t25;
        loc_10 = (loc_10 & 0xffffffu) | 0xff000000u;
    }
L_1027a683: ;
    if ((uint8_t)(loc_c >> 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(loc_c >> 8u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(loc_c >> 8u);
        if ((uint8_t)ebx == 0u)
        {
            g->eax = eax;
            g->ecx = loc_4;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t26 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3f30u), loc_4);
            t27 = g->ecx;
            t28 = g->edx;
            eax = t26;
            ecx = (t27 & 0xffffff00u) | (uint8_t)(loc_c >> 0x10u);
            edx = t28;
            loc_10 = (loc_10 & 0xffffffu) | 0xff000000u;
        }
    }
    if (loc_c >> 0x18u != 0u)
    {
        eax = (eax & 0xffffff00u) | loc_c >> 0x18u;
        if ((uint8_t)ecx == 0u)
        {
            g->ecx = ecx;
            g->edx = loc_4;
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3eecu), loc_4);
            t29 = g->ecx;
            t30 = g->edx;
            ecx = t29;
            edx = t30;
            loc_10 = (loc_10 & 0xffffffu) | 0xff000000u;
        }
    }
    goto L_1027a6cf;
L_1027a634: ;
    if (rd32(edi + 0x4cu) != 0u)
    {
        edx = rd32(edi + 0x4cu);
        goto L_1027a642;
    }
    if (rd32(edi + 0x54u) == 0u)
    {
        edx = rd32(edi + 0x54u);
        goto L_1027a647;
    }
    edx = rd32(edi + 0x54u);
L_1027a642: ;
    loc_c = (loc_c & 0xffffff00u) | 0xffu;
L_1027a647: ;
    if ((uint8_t)loc_c == 0u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)loc_c;
        loc_c = (((loc_c & 0xffffffu) | rd8(edi + 0xa8u) << 0x18u) & 0xffff00ffu) | rd8(edi + 0x98u) << 8u;
        goto L_1027a683;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)loc_c;
    loc_c = (((loc_c & 0xffffffu) | rd8(edi + 0xa8u) << 0x18u) & 0xffff00ffu) | rd8(edi + 0x98u) << 8u;
    goto L_1027a663;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027a4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027a4d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
