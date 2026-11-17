/* f_0x10104200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10104200(Guest* g)
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
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(arg1 + 0x60u);
    wr16(arg1 + 0x4au, (uint16_t)t1);
    g->ebx = arg2;
    g->eax = (in_eax & 0xffff0000u) | t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 0u, in_edi, in_esi, in_ebx);
    t3 = g->ecx;
    t4 = g->edx;
    if ((rd8(arg1) & 0x10u) == 0u)
    {
        eax = (t2 & 0xffffff00u) | rd8(arg1);
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = (t2 & 0xffffff00u) | rd8(arg1);
        ecx = t3;
        edx = t4;
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 4u, in_edi, in_esi, in_ebx);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    if ((int8_t)rd8(arg1) < 0)
    {
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t8 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 7u, in_edi, in_esi, in_ebx);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if ((rd8(arg1) & 8u) != 0u)
    {
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t11 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 3u, in_edi, in_esi, in_ebx);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    if ((rd8(arg1) & 4u) != 0u)
    {
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t14 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 2u, in_edi, in_esi, in_ebx);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    if ((rd8(arg1) & 0x20u) != 0u)
    {
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t17 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 5u, in_edi, in_esi, in_ebx);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    if ((rd8(arg1) & 2u) != 0u)
    {
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t20 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 1u, in_edi, in_esi, in_ebx);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    if ((rd8(arg1) & 0x40u) != 0u)
    {
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t23 = cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 6u, in_edi, in_esi, in_ebx);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    }
    if ((uint8_t)arg4 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
        if ((rd32(arg1) & 0x10000u) != 0u)
        {
            g->ebx = arg2;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10104e50u), 5, arg1, 0x10u, in_edi, in_esi, in_ebx);
            t26 = g->edx;
            edx = t26;
        }
    }
    if (rd16(arg1 + 0x20u) == 0u)
    {
        edx = edx & 0xffffff00u;
        ebx = arg2;
        esi = 8u;
        edi = arg1;
        goto L_101047d4;
    }
    edx = edx & 0xffffff00u;
    ebx = arg2;
    esi = 8u;
    edi = 0u;
    loc_4 = 0u;
    loc_10 = rd32(sp0 - 0x10u);
L_101042ca: ;
    t27 = rd8(arg1 + edi + 4u);
    if ((uint8_t)arg4 == 0u)
    {
        ecx = t27 & 0x1fu;
        loc_14 = t27 & 0x1fu;
        loc_c = t27 & 0x80u;
        goto L_101042fb;
    }
    ecx = t27 & 0x1fu;
    loc_14 = t27 & 0x1fu;
    loc_c = t27 & 0x80u;
    if ((int32_t)ecx >= (int32_t)(uint8_t)arg4) goto L_101047b6;
L_101042fb: ;
    if ((int16_t)(uint8_t)arg3 <= 0)
    {
        eax = loc_14;
        loc_10 = (loc_10 & 0xffff0000u) | (uint8_t)arg3;
    }
    else
    {
        eax = loc_14;
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg3;
        ebp = loc_14;
        loc_10 = (loc_10 & 0xffff0000u) | (uint8_t)arg3;
        edi = 1u << (ecx - 1u & 0x1fu);
        ecx = (uint16_t)loc_10;
L_10104325: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((ebp & edi) != 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            ebp = ebp * 2u;
            goto L_10104325;
        }
    }
    if ((int16_t)esi <= 7)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
        esi = esi + 1u;
    }
    else
    {
        wr8(ebx, (uint8_t)edx);
        edx = edx & 0xffffff00u;
        ebx = ebx + 1u;
        esi = 1u;
    }
    if (loc_c != 0u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
    }
    if ((int16_t)esi <= 7)
    {
        cf = (uint8_t)((uint8_t)edx * 2u) < (uint8_t)edx;
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
        pf = PARITY((uint8_t)(esi + 1u));
        zf = esi + 1u == 0u;
        sf = (int32_t)(esi + 1u) < 0;
        of = esi + 1u == 0x80000000u;
        esi = esi + 1u;
    }
    else
    {
        wr8(ebx, (uint8_t)edx);
        edx = edx & 0xffffff00u;
        ebx = ebx + 1u;
        esi = 1u;
        cf = 0u;
        pf = PARITY(0u);
        zf = 1u;
        sf = 0u;
        of = 0u;
    }
    if ((rd32(arg1) & 1u << (eax & 0x1fu)) == 0u) goto L_101047b6;
    edi = 1u << (eax & 0x1fu);
    if (loc_14 > 0x10u) goto L_101047b6;
    t28 = rd32(COW_IMG(0x10104e0cu) + rd8(COW_IMG(0x10104e34u) + loc_14) * 4u);
    switch (t28 - RD)
    {
    case 0x101043aeu: goto L_101043ae;
    case 0x1010445bu: goto L_1010445b;
    case 0x10104542u: goto L_10104542;
    case 0x10104584u: goto L_10104584;
    case 0x101045c6u: goto L_101045c6;
    case 0x10104643u: goto L_10104643;
    case 0x101046c0u: goto L_101046c0;
    case 0x10104739u: goto L_10104739;
    case 0x10104774u: eax = rd8(COW_IMG(0x10104e34u) + loc_14); goto L_10104774;
    case 0x101047b6u: goto L_101047b6;
    default: rt_fatal(g, COW_IMG(0x101043a7u), "switch");
    }
    return 0;
L_101043ae: ;
    if (rd8(arg1 + 0xcu) != 0u)
    {
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if (rd8(arg1 + 0x4eu) & 1u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        edi = arg1 + 0xcu;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        eax = 4u;
        ecx = ~ecx - 1u;
L_101043f6: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((ecx & 8u) != 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (eax != 1u)
        {
            eax = eax - 1u;
            ecx = ecx * 2u;
            goto L_101043f6;
        }
        eax = eax - 1u;
        if (rd8(arg1 + 0xcu) == 0u) goto L_101047b6;
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0xcu);
        ebp = arg1 + 0xcu;
L_10104423: ;
        eax = (uint8_t)eax;
        ecx = 7u;
L_1010442d: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((eax & 0x40u) != 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (ecx != 1u)
        {
            eax = eax * 2u;
            ecx = ecx - 1u;
            goto L_1010442d;
        }
        eax = eax * 2u;
        if (rd8(ebp + 1u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ebp + 1u);
            ebp = ebp + 1u;
            goto L_10104423;
        }
    }
L_101047b6: ;
    if ((int16_t)(loc_4 + 1u) < (int32_t)rd16(arg1 + 0x20u))
    {
        edi = (uint32_t)(int16_t)(loc_4 + 1u);
        loc_4 = loc_4 + 1u;
        goto L_101042ca;
    }
    edi = (uint32_t)(int16_t)(loc_4 + 1u);
L_101047d4: ;
    if ((rd32(arg1) >> 8u & 8u) == 0u)
    {
        eax = (arg1 & 0xffffff00u) | (uint8_t)arg3;
    }
    else
    {
        if ((uint8_t)arg4 == 0u)
        {
            if ((int16_t)(uint8_t)arg3 <= 0)
            {
                eax = 0xbu;
            }
            else
            {
                edi = (edi & 0xffff0000u) | (uint8_t)arg3;
                eax = 0xbu;
                edi = (uint16_t)edi;
L_1010489f: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((eax & 1u << (((arg4 & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu)) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    eax = eax * 2u;
                    edi = edi - 1u;
                    goto L_1010489f;
                }
                eax = eax * 2u;
            }
            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        }
        else
        {
            if ((int16_t)(uint8_t)arg3 <= 0)
            {
                eax = (arg1 & 0xffffff00u) | (uint8_t)arg3;
                ecx = arg4;
                edi = (edi & 0xffff0000u) | (uint8_t)arg3;
            }
            else
            {
                edi = (edi & 0xffff0000u) | (uint8_t)arg3;
                ecx = (uint16_t)edi;
                ebp = (uint8_t)arg4;
L_10104816: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ebp & 1u << (((arg4 & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu)) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (ecx != 1u)
                {
                    ecx = ecx - 1u;
                    ebp = ebp * 2u;
                    goto L_10104816;
                }
                ecx = ecx - 1u;
                eax = (1u << (((arg4 & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu) & 0xffffff00u) | (uint8_t)arg3;
            }
            if ((int16_t)edi > 0)
            {
                ebp = 1u << (((ecx & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                ecx = 3u;
                edi = (uint16_t)edi;
L_1010485c: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ecx & ebp) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    ecx = ecx * 2u;
                    edi = edi - 1u;
                    goto L_1010485c;
                }
            }
        }
        ecx = rd32(arg1 + 0x50u);
        edi = 0x20u;
L_101048d0: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((int32_t)ecx < 0)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (edi != 1u)
        {
            ecx = ecx * 2u;
            edi = edi - 1u;
            goto L_101048d0;
        }
        edi = edi - 1u;
    }
    if ((rd32(arg1) & 0x80000u) != 0u)
    {
        if ((uint8_t)arg4 == 0u)
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi > 0)
            {
                ecx = 0x13u;
                ebp = 1u << (((arg4 & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                edi = (uint16_t)edi;
L_101049c0: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ecx & ebp) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    ecx = ecx * 2u;
                    edi = edi - 1u;
                    goto L_101049c0;
                }
            }
        }
        else
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi <= 0)
            {
                ecx = arg4;
            }
            else
            {
                eax = 1u << (((arg4 & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                ecx = (uint16_t)edi;
                ebp = (uint8_t)arg4;
L_10104936: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ebp & eax) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (ecx != 1u)
                {
                    ecx = ecx - 1u;
                    ebp = ebp * 2u;
                    goto L_10104936;
                }
                ecx = ecx - 1u;
                eax = (eax & 0xffffff00u) | (uint8_t)arg3;
            }
            if ((int16_t)edi > 0)
            {
                ebp = 1u << (((ecx & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                ecx = 3u;
                edi = (uint16_t)edi;
L_1010497c: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ecx & ebp) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    ecx = ecx * 2u;
                    edi = edi - 1u;
                    goto L_1010497c;
                }
            }
        }
        ecx = rd32(arg1 + 0x54u);
        edi = 0x20u;
L_101049ed: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((int32_t)ecx < 0)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (edi != 1u)
        {
            ecx = ecx * 2u;
            edi = edi - 1u;
            goto L_101049ed;
        }
        edi = edi - 1u;
    }
    if ((rd32(arg1) & 0x100000u) != 0u)
    {
        if ((uint8_t)arg4 == 0u)
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi > 0)
            {
                eax = 0x14u;
                edi = (uint16_t)edi;
L_10104ac5: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((eax & 1u << (((arg4 & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu)) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    eax = eax * 2u;
                    edi = edi - 1u;
                    goto L_10104ac5;
                }
                edi = edi - 1u;
            }
        }
        else
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi <= 0)
            {
                ecx = arg4;
            }
            else
            {
                eax = 1u << (((arg4 & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                ecx = (uint16_t)edi;
                ebp = (uint8_t)arg4;
L_10104a49: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ebp & eax) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (ecx != 1u)
                {
                    ecx = ecx - 1u;
                    ebp = ebp * 2u;
                    goto L_10104a49;
                }
                ecx = ecx - 1u;
            }
            if ((int16_t)edi > 0)
            {
                eax = 4u;
                ebp = 1u << (((ecx & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu);
                edi = (uint16_t)edi;
L_10104a86: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((eax & ebp) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    eax = eax * 2u;
                    edi = edi - 1u;
                    goto L_10104a86;
                }
                edi = edi - 1u;
            }
        }
        eax = 0x20u;
        ecx = rd32(arg1 + 0x58u);
L_10104af2: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((int32_t)ecx < 0)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (eax != 1u)
        {
            eax = eax - 1u;
            ecx = ecx * 2u;
            goto L_10104af2;
        }
        eax = eax - 1u;
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    }
    if ((rd32(arg1) & 0x1000u) != 0u)
    {
        if ((uint8_t)arg4 == 0u)
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi <= 0)
            {
                eax = 0xcu;
            }
            else
            {
                eax = 0xcu;
                edi = (uint16_t)edi;
L_10104bce: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((eax & 1u << (((arg4 & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu)) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    eax = eax * 2u;
                    edi = edi - 1u;
                    goto L_10104bce;
                }
                eax = eax * 2u;
                edi = edi - 1u;
            }
        }
        else
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi <= 0)
            {
                ecx = arg4;
            }
            else
            {
                eax = 1u << (((arg4 & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                ecx = (uint16_t)edi;
                ebp = (uint8_t)arg4;
L_10104b52: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ebp & eax) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (ecx != 1u)
                {
                    ecx = ecx - 1u;
                    ebp = ebp * 2u;
                    goto L_10104b52;
                }
                ecx = ecx - 1u;
            }
            if ((int16_t)edi <= 0)
            {
                eax = 4u;
            }
            else
            {
                eax = 4u;
                ebp = 1u << (((ecx & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu);
                edi = (uint16_t)edi;
L_10104b8f: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((eax & ebp) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    eax = eax * 2u;
                    edi = edi - 1u;
                    goto L_10104b8f;
                }
                eax = eax * 2u;
                edi = edi - 1u;
            }
        }
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    }
    if ((rd32(arg1) & 0x1000000u) == 0u)
    {
        ecx = arg1;
    }
    else
    {
        if ((uint8_t)arg4 == 0u)
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi <= 0)
            {
                eax = 0x18u;
                ecx = arg4;
            }
            else
            {
                eax = 0x18u;
                edi = (uint16_t)edi;
L_10104cb7: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((eax & 1u << (((arg4 & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu)) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    eax = eax * 2u;
                    edi = edi - 1u;
                    goto L_10104cb7;
                }
                eax = eax * 2u;
                ecx = ((arg4 & 0xffffff00u) | (uint8_t)arg3) - 1u;
                edi = edi - 1u;
            }
            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        }
        else
        {
            edi = (edi & 0xffff0000u) | (uint8_t)eax;
            if ((int16_t)edi <= 0)
            {
                ecx = arg4;
            }
            else
            {
                eax = 1u << (((arg4 & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                ecx = (uint16_t)edi;
                ebp = (uint8_t)arg4;
L_10104c32: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ebp & eax) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (ecx != 1u)
                {
                    ecx = ecx - 1u;
                    ebp = ebp * 2u;
                    goto L_10104c32;
                }
                ecx = ecx - 1u;
                eax = (eax & 0xffffff00u) | (uint8_t)arg3;
            }
            if ((int16_t)edi > 0)
            {
                ebp = 1u << (((ecx & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                edi = (uint16_t)edi;
L_10104c78: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if (0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    edi = edi - 1u;
                    goto L_10104c78;
                }
                edi = edi - 1u;
                ecx = 0u;
            }
        }
    }
    if ((rd32(arg1) & 0x20000u) != 0u)
    {
        if ((uint8_t)arg4 == 0u)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)arg4;
            if ((int16_t)(uint8_t)eax <= 0)
            {
                edi = (edi & 0xffff0000u) | (uint8_t)eax;
            }
            else
            {
                edi = (edi & 0xffff0000u) | (uint8_t)eax;
                eax = 0x11u;
                ebp = 1u << (((ecx & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu);
                edi = (uint16_t)edi;
L_10104d11: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((eax & ebp) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    eax = eax * 2u;
                    edi = edi - 1u;
                    goto L_10104d11;
                }
                edi = edi - 1u;
            }
            eax = 0x20u;
            ecx = rd32(arg1 + 0x5cu);
L_10104d3e: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int32_t)ecx < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (eax != 1u)
            {
                eax = eax - 1u;
                ecx = ecx * 2u;
                goto L_10104d3e;
            }
            eax = eax - 1u;
            eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        }
    }
    if (rd32(arg1 + 0x60u) != 0u)
    {
        ecx = rd32(arg1 + 0x60u);
        if ((uint8_t)arg4 == 0u)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)arg4;
            if ((int16_t)(uint8_t)eax > 0)
            {
                edi = (edi & 0xffff0000u) | (uint8_t)eax;
                eax = 1u << (((ecx & 0xffffff00u) | (uint8_t)eax) - 1u & 0x1fu);
                ebp = 0x16u;
                edi = (uint16_t)edi;
L_10104d90: ;
                if ((int16_t)esi <= 7)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                    esi = esi + 1u;
                }
                else
                {
                    wr8(ebx, (uint8_t)edx);
                    edx = edx & 0xffffff00u;
                    ebx = ebx + 1u;
                    esi = 1u;
                }
                if ((ebp & eax) != 0u)
                {
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
                }
                if (edi != 1u)
                {
                    ebp = ebp * 2u;
                    edi = edi - 1u;
                    goto L_10104d90;
                }
            }
            eax = rd32(arg1 + 0x60u);
            ecx = 0x20u;
L_10104dbd: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int32_t)eax < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (ecx != 1u)
            {
                eax = eax * 2u;
                ecx = ecx - 1u;
                goto L_10104dbd;
            }
        }
    }
L_10104ddf: ;
    if ((int16_t)esi > 7) goto L_10104df0;
    if ((int16_t)(esi + 1u) > 1)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
        esi = esi + 1u;
        goto L_10104ddf;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
L_10104df3: ;
    wr8(arg2, (uint8_t)((uint8_t)((uint8_t)ebx - (uint8_t)arg2) - 1u));
    g->ebx = in_ebx;
    return ebx - arg2;
L_1010445b: ;
    loc_14 = arg1 + 0x24u;
    loc_8 = 0u;
L_1010446e: ;
    if ((int16_t)rd16(loc_14) < 0) goto L_101047b6;
    ecx = (loc_14 & 0xffff0000u) | rd16(loc_14);
    ecx = (uint32_t)(int16_t)ecx;
    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
    edi = 0xau;
L_10104489: ;
    if ((int16_t)esi <= 7)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
        esi = esi + 1u;
    }
    else
    {
        wr8(ebx, (uint8_t)edx);
        edx = edx & 0xffffff00u;
        ebx = ebx + 1u;
        esi = 1u;
    }
    if ((ecx >> 8u & 2u) != 0u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
    }
    if (edi != 1u)
    {
        ecx = ecx * 2u;
        edi = edi - 1u;
        goto L_10104489;
    }
    ecx = ecx * 2u;
    if ((int16_t)loc_10 > 0)
    {
        eax = loc_10;
        ebp = 1u;
        edi = 1u << (((ecx & 0xffffff00u) | (uint8_t)arg3) - 1u & 0x1fu);
        ecx = (uint16_t)eax;
L_101044ca: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((ebp & edi) != 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            ebp = ebp * 2u;
            goto L_101044ca;
        }
    }
    if ((int16_t)esi <= 7)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
        esi = esi + 1u;
    }
    else
    {
        wr8(ebx, (uint8_t)edx);
        edx = edx & 0xffffff00u;
        ebx = ebx + 1u;
        esi = 1u;
    }
    if (loc_c != 0u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
    }
    if ((int16_t)esi <= 7)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
        esi = esi + 1u;
    }
    else
    {
        wr8(ebx, (uint8_t)edx);
        edx = edx & 0xffffff00u;
        ebx = ebx + 1u;
        esi = 1u;
    }
    if ((int32_t)(loc_8 + 1u) < 16)
    {
        loc_14 = loc_14 + 2u;
        loc_8 = loc_8 + 1u;
        goto L_1010446e;
    }
    goto L_101047b6;
L_10104542: ;
    if ((int16_t)rd16(arg1 + 0x44u) >= 0)
    {
        edi = (edi & 0xffff0000u) | rd16(arg1 + 0x44u);
        eax = (uint32_t)(int16_t)edi;
        ecx = 2u;
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
L_1010455e: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((eax & 2u) != 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (ecx != 1u)
        {
            eax = eax * 2u;
            ecx = ecx - 1u;
            goto L_1010455e;
        }
    }
    goto L_101047b6;
L_10104584: ;
    if ((int16_t)rd16(arg1 + 0x46u) >= 0)
    {
        edi = (edi & 0xffff0000u) | rd16(arg1 + 0x46u);
        eax = (uint32_t)(int16_t)edi;
        ecx = 5u;
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
L_101045a0: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((eax & 0x10u) != 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (ecx != 1u)
        {
            eax = eax * 2u;
            ecx = ecx - 1u;
            goto L_101045a0;
        }
    }
    goto L_101047b6;
L_101045c6: ;
    if ((int16_t)rd16(arg1 + 0x1cu) >= 0)
    {
        edi = (edi & 0xffff0000u) | rd16(arg1 + 0x1cu);
        if ((int16_t)rd16(arg1 + 0x1eu) >= 0)
        {
            eax = (uint32_t)(int16_t)edi;
            ecx = 8u;
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
L_101045ef: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int8_t)eax < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (ecx != 1u)
            {
                eax = eax * 2u;
                ecx = ecx - 1u;
                goto L_101045ef;
            }
            eax = (uint32_t)(int16_t)rd16(arg1 + 0x1eu);
            ecx = 8u;
L_1010461d: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int8_t)eax < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (ecx != 1u)
            {
                eax = eax * 2u;
                ecx = ecx - 1u;
                goto L_1010461d;
            }
        }
    }
    goto L_101047b6;
L_10104643: ;
    if ((int16_t)rd16(arg1 + 0x1cu) >= 0)
    {
        edi = (edi & 0xffff0000u) | rd16(arg1 + 0x1cu);
        if ((int16_t)rd16(arg1 + 0x1eu) >= 0)
        {
            eax = (uint32_t)(int16_t)edi;
            ecx = 8u;
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
L_1010466c: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int8_t)eax < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (ecx != 1u)
            {
                eax = eax * 2u;
                ecx = ecx - 1u;
                goto L_1010466c;
            }
            eax = (uint32_t)(int16_t)rd16(arg1 + 0x1eu);
            ecx = 8u;
L_1010469a: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int8_t)eax < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (ecx != 1u)
            {
                eax = eax * 2u;
                ecx = ecx - 1u;
                goto L_1010469a;
            }
        }
    }
    goto L_101047b6;
L_101046c0: ;
    if ((int8_t)rd8(arg1 + 0x4cu) >= 0)
    {
        eax = (arg1 & 0xffffff00u) | rd8(arg1 + 0x4cu);
        if ((int8_t)rd8(arg1 + 0x4du) >= 0)
        {
            eax = (uint32_t)(int8_t)eax;
            ecx = 8u;
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
L_101046e8: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int8_t)eax < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (ecx != 1u)
            {
                eax = eax * 2u;
                ecx = ecx - 1u;
                goto L_101046e8;
            }
            eax = (uint32_t)(int8_t)rd8(arg1 + 0x4du);
            ecx = 8u;
L_10104716: ;
            if ((int16_t)esi <= 7)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
                esi = esi + 1u;
            }
            else
            {
                wr8(ebx, (uint8_t)edx);
                edx = edx & 0xffffff00u;
                ebx = ebx + 1u;
                esi = 1u;
            }
            if ((int8_t)eax < 0)
            {
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
            }
            if (ecx != 1u)
            {
                eax = eax * 2u;
                ecx = ecx - 1u;
                goto L_10104716;
            }
        }
    }
    goto L_101047b6;
L_10104739: ;
    if ((int16_t)rd16(arg1 + 0x48u) >= 0)
    {
        edi = (edi & 0xffff0000u) | rd16(arg1 + 0x48u);
        eax = (uint32_t)(int16_t)edi;
        ecx = 4u;
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
L_10104751: ;
        if ((int16_t)esi <= 7)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
            esi = esi + 1u;
        }
        else
        {
            wr8(ebx, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx + 1u;
            esi = 1u;
        }
        if ((eax & 8u) != 0u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
        }
        if (ecx != 1u)
        {
            eax = eax * 2u;
            ecx = ecx - 1u;
            goto L_10104751;
        }
    }
    goto L_101047b6;
L_10104774: ;
    if (rd16(arg1 + 0x4au) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0x4au);
        goto L_10104788;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 0x4au);
    if (rd32(arg1 + 0x60u) == 0u) goto L_101047b6;
L_10104788: ;
    eax = (uint16_t)eax;
    ecx = 0x10u;
    edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
L_10104795: ;
    if ((int16_t)esi <= 7)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u);
        esi = esi + 1u;
    }
    else
    {
        wr8(ebx, (uint8_t)edx);
        edx = edx & 0xffffff00u;
        ebx = ebx + 1u;
        esi = 1u;
    }
    if ((int8_t)(eax >> 8u) < 0)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 1u);
    }
    if (ecx != 1u)
    {
        eax = eax * 2u;
        ecx = ecx - 1u;
        goto L_10104795;
    }
    goto L_101047b6;
L_10104df0: ;
    wr8(ebx, (uint8_t)edx);
    ebx = ebx + 1u;
    goto L_10104df3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10104200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10104200(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
