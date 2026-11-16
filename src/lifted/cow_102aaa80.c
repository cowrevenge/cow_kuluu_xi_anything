/* f_0x102aaa80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102aaa80(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d28;
    double d29;
    double d3;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d5;
    double d6;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t t1;
    uint32_t t19;
    uint32_t t26;
    uint32_t t27;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        goto L_102aadd4;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    ebx = rd32(sp0 + 4u);
    if (rd32(eax + 0x14u) == 0u) goto L_102aadd4;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x102a9f10u), 3, eax, in_edi, in_esi);
    if (rd32(rd32(ebx + 0x48u)) == 0u)
    {
        eax = rd32(rd32(ebx + 0x34u) + 0x58u);
        ecx = rd32(rd32(ebx + 0x34u) + 0x54u);
    }
    else
    {
        eax = rd32(rd32(ebx + 0x34u) + 0x58u);
        ecx = rd32(rd32(ebx + 0x34u) + 0x54u);
        edx = rd32(rd32(ebx + 0x48u));
        esi = rd32(ebx + 0x48u) + 4u;
        ebp = 0u;
        loc_40 = 0u;
        loc_3c = 0u;
        loc_34 = edx;
L_102aaacf: ;
        if ((int32_t)rd32(esi) > 0)
        {
            ebx = rd32(esi);
            esi = esi + 4u;
            goto L_102aaaf2;
        }
        ebx = rd32(esi);
        esi = esi + 4u;
        if (-ebx != 0u)
        {
            loc_44 = -ebx;
            edx = 0u;
L_102aabf1: ;
            if (edx != 0u)
            {
                if (edx != 1u)
                {
                    loc_40 = ebp;
                }
                else
                {
                    loc_3c = ebp;
                }
                loc_44 = loc_44 - 1u;
                loc_38 = -edx;
            }
            else
            {
                t1 = rd32(esi + 4u);
                loc_40 = t1;
                loc_3c = rd32(esi);
                esi = esi + 8u;
                loc_44 = loc_44 - 3u;
                loc_38 = 1u;
            }
            d2 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi) * 0xcu) - (double)rdf32(ecx + loc_3c * 0xcu));
            d3 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi) * 0xcu + 4u) - (double)rdf32(ecx + loc_3c * 0xcu + 4u));
            d4 = fr(g, (double)rdf32(ecx + rd32(esi) * 0xcu + 8u) - (double)rdf32(ecx + loc_3c * 0xcu + 8u));
            d5 = (double)(float)fr(g, fr(g, d4 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 4u) - (double)rdf32(ecx + loc_3c * 0xcu + 4u))) - fr(g, d3 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 8u) - (double)rdf32(ecx + loc_3c * 0xcu + 8u))));
            d6 = fr(g, (double)rdf32(ecx + loc_40 * 0xcu) - (double)rdf32(ecx + loc_3c * 0xcu));
            d7 = (double)(float)fr(g, fr(g, d2 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 8u) - (double)rdf32(ecx + loc_3c * 0xcu + 8u))) - fr(g, d6 * d4));
            t8 = rd32(esi);
            d9 = fr(g, d5 + (double)rdf32(eax + loc_3c * 0xcu));
            d10 = fr(g, fr(g, d6 * d3) - fr(g, d2 * fr(g, (double)rdf32(ecx + loc_40 * 0xcu + 4u) - (double)rdf32(ecx + loc_3c * 0xcu + 4u))));
            wrf32(eax + loc_3c * 0xcu, (float)d9);
            d11 = fr(g, d7 + (double)rdf32(eax + loc_3c * 0xcu + 4u));
            wrf32(eax + loc_3c * 0xcu + 4u, (float)d11);
            d12 = fr(g, d10 + (double)rdf32(eax + loc_3c * 0xcu + 8u));
            wrf32(eax + loc_3c * 0xcu + 8u, (float)d12);
            d13 = fr(g, d5 + (double)rdf32(eax + loc_40 * 0xcu));
            wrf32(eax + loc_40 * 0xcu, (float)d13);
            d14 = fr(g, d7 + (double)rdf32(eax + loc_40 * 0xcu + 4u));
            wrf32(eax + loc_40 * 0xcu + 4u, (float)d14);
            d15 = fr(g, d10 + (double)rdf32(eax + loc_40 * 0xcu + 8u));
            wrf32(eax + loc_40 * 0xcu + 8u, (float)d15);
            d16 = fr(g, d5 + (double)rdf32(eax + t8 * 0xcu));
            wrf32(eax + t8 * 0xcu, (float)d16);
            d17 = fr(g, d7 + (double)rdf32(eax + t8 * 0xcu + 4u));
            wrf32(eax + t8 * 0xcu + 4u, (float)d17);
            d18 = fr(g, d10 + (double)rdf32(eax + t8 * 0xcu + 8u));
            wrf32(eax + t8 * 0xcu + 8u, (float)d18);
            if (loc_44 != 0u)
            {
                ebp = t8;
                esi = esi + 4u;
                goto L_102aabed;
            }
            ebp = t8;
            esi = esi + 4u;
        }
L_102aad23: ;
        if (loc_34 != 1u)
        {
            loc_34 = loc_34 - 1u;
            goto L_102aaacf;
        }
        ebx = rd32(sp0 + 4u);
    }
    if (rd32(ebx + 0x34u) != 0u)
    {
        edi = rd32(ebx + 0x34u);
        if (rd32(edi + 0x6cu) != 0u)
        {
            ebp = rd32(edi + 0x6cu);
            if ((int32_t)rd32(edi + 0x14u) > 0)
            {
                edx = eax + 8u;
                esi = 0u;
L_102aad54: ;
                if ((int32_t)rd32(ebp + esi * 4u) >= 0)
                {
                    ecx = rd32(ebp + esi * 4u);
                    d38 = fr(g, (double)rdf32(edx - 8u) + (double)rdf32(eax + ecx * 0xcu));
                    wrf32(eax + ecx * 0xcu, (float)d38);
                    d39 = fr(g, (double)rdf32(edx - 4u) + (double)rdf32(eax + ecx * 0xcu + 4u));
                    wrf32(eax + ecx * 0xcu + 4u, (float)d39);
                    d40 = fr(g, (double)rdf32(eax + ecx * 0xcu + 8u) + (double)rdf32(edx));
                    wrf32(eax + ecx * 0xcu + 8u, (float)d40);
                }
                if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0x14u))
                {
                    edx = edx + 0xcu;
                    esi = esi + 1u;
                    goto L_102aad54;
                }
            }
            if ((int32_t)rd32(edi + 0x14u) <= 0)
            {
                ecx = rd32(edi + 0x14u);
            }
            else
            {
                edx = eax + 8u;
                esi = 0u;
L_102aad94: ;
                if ((int32_t)rd32(ebp + esi * 4u) >= 0)
                {
                    ecx = rd32(ebp + esi * 4u);
                    t41 = rd32(eax + ecx * 0xcu);
                    wr32(edx - 8u, t41);
                    t42 = rd32(eax + ecx * 0xcu + 4u);
                    wr32(edx - 4u, t42);
                    t43 = rd32(eax + ecx * 0xcu + 8u);
                    t44 = rd32(sp0 + 4u);
                    wr32(edx, t43);
                    ebx = t44;
                }
                if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0x14u))
                {
                    edx = edx + 0xcu;
                    esi = esi + 1u;
                    goto L_102aad94;
                }
                ecx = rd32(edi + 0x14u);
            }
        }
    }
    t45 = rd32(ebx + 0x34u);
    wr32(sp0 + 4u, t45);
    g->esp = sp0;
    g->edx = t45;
    return cow_tailcall(g, COW_IMG(0x102aa260u), eax, ecx, t45);
L_102aaaee: ;
    ebx = loc_44;
L_102aaaf2: ;
    t19 = rd32(esi + 4u);
    d20 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi + 8u) * 0xcu) - (double)rdf32(ecx + rd32(esi) * 0xcu));
    d21 = (double)(float)fr(g, (double)rdf32(ecx + rd32(esi + 8u) * 0xcu + 4u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 4u));
    d22 = fr(g, (double)rdf32(ecx + rd32(esi + 8u) * 0xcu + 8u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 8u));
    d23 = (double)(float)fr(g, fr(g, d22 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 4u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 4u))) - fr(g, d21 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 8u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 8u))));
    d24 = fr(g, (double)rdf32(ecx + t19 * 0xcu) - (double)rdf32(ecx + rd32(esi) * 0xcu));
    d25 = (double)(float)fr(g, fr(g, d20 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 8u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 8u))) - fr(g, d24 * d22));
    t26 = rd32(esi);
    t27 = rd32(esi + 8u);
    d28 = fr(g, d23 + (double)rdf32(eax + rd32(esi) * 0xcu));
    d29 = fr(g, fr(g, d24 * d21) - fr(g, d20 * fr(g, (double)rdf32(ecx + t19 * 0xcu + 4u) - (double)rdf32(ecx + rd32(esi) * 0xcu + 4u))));
    wrf32(eax + t26 * 0xcu, (float)d28);
    d30 = fr(g, d25 + (double)rdf32(eax + t26 * 0xcu + 4u));
    wrf32(eax + t26 * 0xcu + 4u, (float)d30);
    d31 = fr(g, d29 + (double)rdf32(eax + t26 * 0xcu + 8u));
    wrf32(eax + t26 * 0xcu + 8u, (float)d31);
    d32 = fr(g, d23 + (double)rdf32(eax + t19 * 0xcu));
    wrf32(eax + t19 * 0xcu, (float)d32);
    d33 = fr(g, d25 + (double)rdf32(eax + t19 * 0xcu + 4u));
    wrf32(eax + t19 * 0xcu + 4u, (float)d33);
    d34 = fr(g, d29 + (double)rdf32(eax + t19 * 0xcu + 8u));
    wrf32(eax + t19 * 0xcu + 8u, (float)d34);
    d35 = fr(g, d23 + (double)rdf32(eax + t27 * 0xcu));
    wrf32(eax + t27 * 0xcu, (float)d35);
    d36 = fr(g, d25 + (double)rdf32(eax + t27 * 0xcu + 4u));
    wrf32(eax + t27 * 0xcu + 4u, (float)d36);
    d37 = fr(g, d29 + (double)rdf32(eax + t27 * 0xcu + 8u));
    wrf32(eax + t27 * 0xcu + 8u, (float)d37);
    if (ebx != 3u)
    {
        esi = esi + 0xcu;
        loc_44 = ebx - 3u;
        goto L_102aaaee;
    }
    ebp = t27;
    esi = esi + 0xcu;
    loc_40 = t19;
    loc_3c = t26;
    goto L_102aad23;
L_102aabed: ;
    edx = loc_38;
    goto L_102aabf1;
L_102aadd4: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t47 = g->ecx;
    t48 = g->edx;
    g->edx = t48;
    g->esp = sp0 - 0x58u;
    t49 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beae0u));
    t50 = g->edx;
    g->edx = t50;
    return t49;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aaa80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102aaa80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
