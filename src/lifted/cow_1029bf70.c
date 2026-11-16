/* f_0x1029bf70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1029bf70(Guest* g)
{
    double d12;
    double d18;
    double d2;
    double d23;
    double d26;
    double d29;
    double d3;
    double d33;
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;

    if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0xaecu) <= 0)
    {
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xaecu);
        loc_c = 0u;
    }
    else
    {
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xaecu);
        esi = rd32(COW_IMG(0x1099d200u));
        if ((int32_t)edx <= 1)
        {
            loc_c = 0u;
        }
        else
        {
            ecx = 1u;
            ebx = rd32(esi + 0xaf0u);
            loc_c = 0u;
L_1029bf9e: ;
            if (rd32(ebx + 0x1cu) != rd32(rd32(ecx * 4u + esi + 0xaf0u) + 0x1cu)) goto L_1029bfbd;
            eax = rd32(ecx * 4u + esi + 0xaf0u);
            if (rd32(ebx + 0x20u) != rd32(eax + 0x20u)) goto L_1029bfbd;
            if (rd32(ebx + 0x24u) == rd32(eax + 0x24u)) goto L_1029bfc7;
L_1029bfbd: ;
            ecx = edx;
            loc_c = 1u;
L_1029bfc7: ;
            if ((int32_t)(ecx + 1u) < (int32_t)edx)
            {
                ecx = ecx + 1u;
                goto L_1029bf9e;
            }
        }
    }
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        ebx = rd32(sp0 + 0xcu);
        edi = 0u;
        loc_4 = eax;
L_1029bfe6: ;
        t1 = rd32(sp0 + 8u);
        d2 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u) + 4u) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 + 0xcu, (float)d2);
        d3 = (double)rdf32(t1 + 8u);
        if ((cow_fsw(g, d3, rdf64(COW_IMG(0x1032a108u)), 0u) & 0x4100u) != 0u)
        {
            ecx = t1;
            x0 = fr(g, fr(g, fr(g, (double)rdf32(ecx) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329ce4u))) + (double)rdf32(COW_IMG(0x10329a08u)));
        }
        else
        {
            ecx = t1;
            x0 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(ecx)) * (double)rdf32(COW_IMG(0x10329ce4u)));
        }
        wr32(ebx, 0u);
        wr32(ebx + 4u, 0u);
        wr32(ebx + 8u, 0u);
        if (loc_c != 0u)
        {
            ebp = rd32(COW_IMG(0x1099d200u));
        }
        else
        {
            ebp = rd32(COW_IMG(0x1099d200u));
            t4 = rd32(rd32(ebp + 0xaf0u) + 0x1cu);
            t5 = rd32(ebp + 0xaf0u);
            t6 = rd32(rd32(ebp + 0xaf0u) + 0x20u);
            wr32(sp0 + 4u, t4);
            g->ecx = ecx;
            g->edx = edx;
            d7 = fr(g, (double)(int32_t)t6 * (double)rdf32(sp0 + 0xcu));
            fpush(g, d7);
            g->esp = sp0 - 0x1cu;
            t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
            t9 = g->ecx;
            t10 = g->edx;
            g->edx = t10;
            t11 = rd32(sp0 + 4u);
            d12 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * x0);
            fpush(g, d12);
            t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
            t14 = g->edx;
            ecx = rd32(sp0 + 8u);
            edx = t14;
            edi = (t13 + t8 * t11) * rd32(t5 + 0x24u);
        }
        if ((int32_t)rd32(ebp + 0xaecu) > 0)
        {
            esi = 0xaf0u;
            loc_8 = 0u;
L_1029c099: ;
            if (loc_c != 0u)
            {
                t15 = rd32(rd32(ebp + esi) + 0x1cu);
                t16 = rd32(ebp + esi);
                t17 = rd32(rd32(ebp + esi) + 0x20u);
                wr32(sp0 + 4u, t15);
                g->ecx = t15;
                g->edx = edx;
                d18 = fr(g, (double)(int32_t)t17 * (double)rdf32(sp0 + 0xcu));
                fpush(g, d18);
                g->esp = sp0 - 0x1cu;
                t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
                t20 = g->ecx;
                t21 = g->edx;
                t22 = rd32(sp0 + 4u);
                d23 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * x0);
                fpush(g, d23);
                t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t19, g->ecx, g->edx, 1, 0);
                edi = (t24 + t19 * t22) * rd32(rd32(ebp + esi) + 0x24u);
            }
            t25 = rd8(edi + rd32(rd32(ebp + esi) + 0x28u));
            wr32(sp0 + 4u, t25);
            d26 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(ebp + esi - 0xa4u)) * (double)rdf32(COW_IMG(0x10329e94u))) + (double)rdf32(ebx));
            wrf32(ebx, (float)d26);
            t27 = rd8(edi + rd32(rd32(esi + rd32(COW_IMG(0x1099d200u))) + 0x28u) + 1u);
            t28 = rd32(COW_IMG(0x1099d200u));
            wr32(sp0 + 4u, t27);
            d29 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(esi + t28 - 0xa4u)) * (double)rdf32(COW_IMG(0x10329e94u))) + (double)rdf32(ebx + 4u));
            wrf32(ebx + 4u, (float)d29);
            t30 = rd8(edi + rd32(rd32(esi + rd32(COW_IMG(0x1099d200u))) + 0x28u) + 2u);
            t31 = rd32(COW_IMG(0x1099d200u));
            t32 = rd32(rd32(esi + rd32(COW_IMG(0x1099d200u))) + 0x28u);
            wr32(sp0 + 4u, t30);
            d33 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(esi + t31 - 0xa4u)) * (double)rdf32(COW_IMG(0x10329e94u))) + (double)rdf32(ebx + 8u));
            wrf32(ebx + 8u, (float)d33);
            if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0xaecu))
            {
                edx = t32;
                ebp = rd32(COW_IMG(0x1099d200u));
                esi = esi + 4u;
                loc_8 = loc_8 + 1u;
                goto L_1029c099;
            }
            edx = t32;
            ecx = rd32(sp0 + 8u);
        }
        wr32(sp0 + 8u, ecx + 0xcu);
        if (loc_4 != 1u)
        {
            eax = loc_4 - 1u;
            ebx = ebx + 0x10u;
            loc_4 = loc_4 - 1u;
            goto L_1029bfe4;
        }
    }
    return;
L_1029bfe4: ;
    goto L_1029bfe6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029bf70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029bf70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
