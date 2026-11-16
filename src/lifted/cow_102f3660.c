/* f_0x102f3660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f3660(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_20_f;
    double loc_24_f;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    t1 = rd32(sp0 + 8u) + 8u;
    wr32(sp0 - 0x30u, t1);
    wr32(sp0 - 0x34u, arg1);
    t2 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x24u;
    t3 = cow_call_regs(g, COW_IMG(0x102f349fu), g->eax, g->ecx, in_edx, 1, 4, arg1, t1, in_edi, in_esi);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
    }
    else
    {
        eax = t3;
        esi = t2;
        t4 = rd8(esi);
        d5 = (double)rdf32(COW_IMG(0x10329e94u));
        wr32(sp0 + 8u, t4);
        t6 = rd8(esi + 1u);
        t7 = rd8(esi + 1u);
        t8 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t6);
        d9 = (double)(float)fr(g, (double)(int32_t)t8 * d5);
        wrf32(sp0 - 0x24u, (float)d9);
        d10 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 8u) * d5);
        wrf32(sp0 - 0x20u, (float)d10);
        if ((uint8_t)t4 <= (uint8_t)t7)
        {
            loc_24_f = d9;
            loc_20_f = d10;
            eax = 1u;
L_102f36f4: ;
            wr32(sp0 - 0x30u, 5u);
            wr32(sp0 + 8u, 5u - eax);
            if ((int32_t)(5u - eax) >= 0)
            {
                x0 = (double)(int32_t)rd32(sp0 + 8u);
            }
            else
            {
                x0 = (double)(int32_t)rd32(sp0 + 8u);
                x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
            wr32(sp0 + 8u, eax);
            if ((int32_t)eax >= 0)
            {
                x1 = (double)(int32_t)rd32(sp0 + 8u);
                x0 = fr(g, x0 * loc_24_f);
            }
            else
            {
                x1 = (double)(int32_t)rd32(sp0 + 8u);
                x0 = fr(g, x0 * loc_24_f);
                x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
            d12 = fr(g, fr(g, x0 + fr(g, x1 * loc_20_f)) * (double)rdf32(COW_IMG(0x1032a39cu)));
            wrf32(eax * 4u + sp0 - 0x20u, (float)d12);
            if (eax + 1u < 5u)
            {
                eax = eax + 1u;
                goto L_102f36f4;
            }
            wrf32(sp0 - 0xcu, (float)(double)(float)0.0);
            wrf32(sp0 - 8u, (float)(double)(float)1.0);
        }
        else
        {
            loc_24_f = d9;
            loc_20_f = d10;
            eax = 1u;
L_102f36b2: ;
            wr32(sp0 - 0x30u, 7u);
            wr32(sp0 + 8u, 7u - eax);
            if ((int32_t)(7u - eax) >= 0)
            {
                x0 = (double)(int32_t)rd32(sp0 + 8u);
            }
            else
            {
                x0 = (double)(int32_t)rd32(sp0 + 8u);
                x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
            wr32(sp0 + 8u, eax);
            if ((int32_t)eax >= 0)
            {
                x1 = (double)(int32_t)rd32(sp0 + 8u);
                x0 = fr(g, x0 * loc_24_f);
            }
            else
            {
                x1 = (double)(int32_t)rd32(sp0 + 8u);
                x0 = fr(g, x0 * loc_24_f);
                x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
            d11 = fr(g, fr(g, x0 + fr(g, x1 * loc_20_f)) * (double)rdf32(COW_IMG(0x10346184u)));
            wrf32(eax * 4u + sp0 - 0x20u, (float)d11);
            if (eax + 1u < 7u)
            {
                eax = eax + 1u;
                goto L_102f36b2;
            }
        }
        wr32(sp0 - 0x30u, 8u);
        wr32(sp0 - 0x30u, in_ebx);
        eax = arg1 + 0xcu;
        ecx = (rd8(esi + 4u) << 8u | rd8(esi + 3u)) << 8u | rd8(esi + 2u);
        edx = 8u;
L_102f3753: ;
        d13 = (double)rdf32(sp0 + (ecx & 7u) * 4u - 0x24u);
        wrf32(eax, (float)d13);
        if (edx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx >> 3u;
            edx = edx - 1u;
            goto L_102f3753;
        }
        wr32(sp0 - 0x34u, 8u);
        eax = arg1 + 0x8cu;
        ecx = (rd8(esi + 7u) << 8u | rd8(esi + 6u)) << 8u | rd8(esi + 5u);
        edx = 8u;
L_102f3782: ;
        d14 = (double)rdf32(sp0 + (ecx & 7u) * 4u - 0x24u);
        wrf32(eax, (float)d14);
        if (edx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx >> 3u;
            edx = edx - 1u;
            goto L_102f3782;
        }
        eax = 0u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f3660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f3660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
