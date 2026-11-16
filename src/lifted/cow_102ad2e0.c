/* f_0x102ad2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102ad2e0(Guest* g)
{
    double d10;
    double d11;
    double d15;
    double d16;
    double d17;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_4_f;
    uint32_t loc_8;
    double loc_c_f;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = self;
        goto L_102ad456;
    }
    eax = rd32(arg1 + 0x34u);
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102ad456;
    }
    if (rd32(eax + 0x54u) != 0u)
    {
        ecx = rd32(eax + 0x54u);
        goto L_102ad331;
    }
    ecx = rd32(eax + 0x54u);
    wr32(sp0 - 0x20u, 0xe5u);
    wr32(sp0 - 0x24u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x28u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103bf050u));
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf050u), COW_IMG(0x103b379cu));
    return;
L_102ad331: ;
    if (rd32(eax + 0x5cu) != 0u)
    {
        edi = rd32(eax + 0x5cu);
        goto L_102ad361;
    }
    wr32(sp0 - 0x20u, 0xe9u);
    wr32(sp0 - 0x24u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x28u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103bf080u));
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf080u), COW_IMG(0x103b379cu));
    return;
L_102ad361: ;
    wr32(sp0 - 8u, 0u);
    if ((int32_t)rd32(arg1 + 0x44u) <= 0) goto L_102ad47c;
    ecx = rd32(arg1 + 0x44u);
    edx = in_edx;
    ebp = 0u;
    esi = 0u;
    loc_8 = 0u;
L_102ad374: ;
    d7 = (double)rdf32(sp0 + 8u);
    if (d7 != rdf64(COW_IMG(0x1032a108u)))
    {
        wr32(sp0 - 8u, ecx - 1u);
        wr32(sp0 - 0x20u, arg3);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        d9 = (double)(float)fr(g, fr(g, (double)(int32_t)loc_8 / (double)(int32_t)(ecx - 1u)) * (double)rdf32(sp0 + 8u));
        wrf32(sp0 - 8u, (float)d9);
        wr32(sp0 - 0x2cu, cow_f2bits(d9));
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102b51c0u), 10, cow_f2bits(d9), 0u, 0u, arg3, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0xcu), cow_f2bits(d9));
        d10 = cow_take_float(g);
        x0 = d10;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, rdf64(COW_IMG(0x1032a108u)), 0u);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t8 = cow_stdcall(g, COW_IMG(0x103149e0u), 0);
        wr32(sp0 - 8u, t8);
        x0 = fr(g, (double)(int32_t)t8 * (double)rdf32(COW_IMG(0x10340be0u)));
    }
    if (rd32(ebp * 4u + rd32(arg1 + 0x48u)) == 0u)
    {
        eax = rd32(ebp * 4u + rd32(arg1 + 0x48u));
        edx = rd32(arg1 + 0x48u);
    }
    else
    {
        eax = rd32(ebp * 4u + rd32(arg1 + 0x48u));
        edx = rd32(arg1 + 0x48u);
        if (eax != 1u)
        {
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 8u, eax - 1u);
            d11 = (double)(float)fr(g, rdf64(COW_IMG(0x1032a100u)) / (double)(int32_t)(eax - 1u));
            wrf32(sp0 - 4u, (float)d11);
            if ((int32_t)eax > 0)
            {
                ecx = eax - 1u;
                loc_4_f = d11;
                ebx = eax;
L_102ad407: ;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t12 = cow_stdcall(g, COW_IMG(0x103149e0u), 0);
                t13 = g->ecx;
                t14 = g->edx;
                wr32(sp0 - 8u, t12);
                d15 = fr(g, (double)(int32_t)t12 * (double)rdf32(COW_IMG(0x10340be0u)));
                wrf32(edi + esi * 8u, (float)d15);
                d16 = (double)rdf32(sp0 - 0xcu);
                wrf32(edi + esi * 8u + 4u, (float)d16);
                d17 = (double)(float)fr(g, (double)rdf32(sp0 - 4u) + (double)rdf32(sp0 - 0xcu));
                wrf32(sp0 - 0xcu, (float)d17);
                if (ebx != 1u)
                {
                    eax = t12;
                    ecx = t13;
                    edx = t14;
                    ebx = ebx - 1u;
                    esi = esi + 1u;
                    goto L_102ad407;
                }
                eax = t12;
                edx = t14;
                esi = esi + 1u;
                loc_c_f = d17;
            }
        }
        else
        {
            wrf32(edi + esi * 8u, (float)x0);
            wr32(edi + esi * 8u + 4u, 0u);
            esi = esi + 1u;
        }
    }
    wr32(sp0 - 8u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        ecx = rd32(arg1 + 0x44u);
        loc_8 = ebp + 1u;
        ebp = ebp + 1u;
        goto L_102ad374;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_102ad456: ;
    wr32(sp0 - 0x20u, 0xdeu);
    wr32(sp0 - 0x24u, COW_IMG(0x103bef68u));
    wr32(sp0 - 0x28u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x2cu, COW_IMG(0x103bf06cu));
    wr32(sp0 - 0x30u, COW_IMG(0x103beaa4u));
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bf06cu));
L_102ad47c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ad2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ad2e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
