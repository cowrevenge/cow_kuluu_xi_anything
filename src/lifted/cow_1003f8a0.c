/* f_0x1003f8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1003f8a0(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d16;
    double d18;
    double d20;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t t1;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    if ((int16_t)rd16(self + 0x34u) <= (int16_t)rd16(self + 0x36u))
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x36u);
        ecx = (self & 0xffff0000u) | rd16(self + 0x34u);
    }
    else
    {
        ecx = (self & 0xffff0000u) | rd16(self + 0x34u);
        eax = ecx;
    }
    wr32(sp0 - 0x64u, 4u);
    t1 = (uint32_t)(int16_t)eax * 0x24u;
    wr32(sp0 - 0x68u, t1);
    g->esp = sp0 - 0x60u;
    t2 = cow_call_regs(g, COW_IMG(0x10028640u), t1, ecx, in_edx, 1, 2, t1, 4u);
    t3 = g->ecx;
    wr32(sp0 - 0x50u, t2);
    if ((int32_t)(uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u) <= 0)
    {
        eax = 0u;
        ecx = (uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u);
        loc_50 = t2;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        goto L_1003f902;
    }
    eax = 0u;
    ecx = (uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u);
    loc_50 = t2;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_1003f8e8: ;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        x0 = fr(g, x0 + (double)rdf32(eax * 4u + rd32(sp0 + 4u)));
        eax = eax + 1u;
        goto L_1003f8e8;
    }
    edx = rd32(sp0 + 4u);
    x0 = fr(g, x0 + (double)rdf32(eax * 4u + rd32(sp0 + 4u)));
    eax = eax + 1u;
    if (!(x0 < (double)rdf32(COW_IMG(0x1032ac8cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032ac8cu)), 1u);
        goto L_1003f94b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032ac8cu)), 1u);
L_1003f902: ;
    wr32(sp0 - 0x4cu, 0u);
    if ((int32_t)ecx <= 1)
    {
        edx = 1u;
        loc_4c = 0u;
    }
    else
    {
        edx = 1u;
        ebx = 0u;
        loc_4c = 0u;
L_1003f915: ;
        d4 = (double)rdf32(arg2 + ebx);
        d5 = (double)rdf32(arg2 + edx * 4u);
        if (!(d4 < d5))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
            edi = edx * 4u;
            wr32(sp0 - 0x4cu, edx);
            ebx = edi;
            loc_4c = edx;
        }
        if ((int32_t)(edx + 1u) < (int32_t)ecx)
        {
            edx = edx + 1u;
            goto L_1003f915;
        }
        edx = edx + 1u;
    }
    d6 = (double)rdf32(COW_IMG(0x1032961cu));
    wr32(loc_4c * 4u + rd32(sp0 + 4u), 0x3f800000u);
    x0 = d6;
L_1003f958: ;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
L_1003f95e: ;
    if ((int32_t)(uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u) <= 0)
    {
        edx = (uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u);
    }
    else
    {
        edx = (uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u);
        eax = 0u;
        ecx = rd32(sp0 + 4u) - (sp0 - 0x3cu);
L_1003f978: ;
        d7 = fr(g, x0 * (double)rdf32(eax * 4u + ecx + sp0 - 0x3cu));
        wrf32(eax * 4u + sp0 - 0x3cu, (float)d7);
        if ((int32_t)(eax + 1u) < (int32_t)edx)
        {
            eax = eax + 1u;
            goto L_1003f978;
        }
    }
    if ((int32_t)edx <= 0)
    {
        ecx = (uint32_t)(int16_t)rd16(self + 0x34u) * 0xcu + (uint32_t)(int16_t)rd16(self + 0x36u) * 4u;
        edi = (uint32_t)(int16_t)rd16(self + 0x34u);
    }
    else
    {
        ecx = (uint32_t)(int16_t)rd16(self + 0x34u) * 0xcu + (uint32_t)(int16_t)rd16(self + 0x36u) * 4u;
        edi = (uint32_t)(int16_t)rd16(self + 0x34u);
        wr32(sp0 + 4u, self + 0x50u);
        eax = 0u;
        ebx = edi * 0xcu + self + 0x50u;
        ebp = rd32(sp0 + 4u);
L_1003f9b5: ;
        wr32(eax * 4u + sp0 - 0x28u, ebp);
        wr32(eax * 4u + sp0 - 0x14u, ebx);
        if ((int32_t)(eax + 1u) < (int32_t)edx)
        {
            eax = eax + 1u;
            ebx = ebx + ecx;
            ebp = ebp + ecx;
            goto L_1003f9b5;
        }
    }
    if ((int32_t)edi > 0)
    {
        eax = loc_50 + 8u;
        ebp = 0u;
L_1003f9d9: ;
        wr32(eax, 0u);
        wr32(eax - 4u, 0u);
        wr32(eax - 8u, 0u);
        if ((int8_t)(rd8(self + 0x32u) * 2u) <= 0)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)(rd8(self + 0x32u) * 2u);
            goto L_1003fa46;
        }
        ecx = 0u;
L_1003f9ec: ;
        t8 = rd32(ecx * 4u + sp0 - 0x28u);
        wr32(ecx * 4u + sp0 - 0x28u, t8 + 0xcu);
        wr32(sp0 - 0x48u, rd32(t8));
        t9 = rd32(t8 + 4u);
        wr32(sp0 - 0x44u, t9);
        t10 = rd32(t8 + 8u);
        wr32(sp0 - 0x40u, t10);
        d11 = fr(g, fr(g, cow_bits2f(rd32(t8)) * (double)rdf32(ecx * 4u + sp0 - 0x3cu)) + (double)rdf32(eax - 8u));
        wrf32(eax - 8u, (float)d11);
        d12 = fr(g, fr(g, cow_bits2f(t9) * (double)rdf32(ecx * 4u + sp0 - 0x3cu)) + (double)rdf32(eax - 4u));
        wrf32(eax - 4u, (float)d12);
        d13 = fr(g, fr(g, cow_bits2f(t10) * (double)rdf32(ecx * 4u + sp0 - 0x3cu)) + (double)rdf32(eax));
        wrf32(eax, (float)d13);
        if ((int32_t)(ecx + 1u) < (int32_t)(uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u))
        {
            ecx = ecx + 1u;
            goto L_1003f9ec;
        }
        edx = (uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u);
L_1003fa46: ;
        if ((int32_t)(ebp + 1u) < (int16_t)rd16(self + 0x34u))
        {
            eax = eax + 0x24u;
            ebp = ebp + 1u;
            goto L_1003f9d9;
        }
        ecx = (uint32_t)(int16_t)rd16(self + 0x34u);
    }
    if ((int16_t)rd16(self + 0x36u) > 0)
    {
        eax = loc_50 + 0x10u;
        edi = 0u;
L_1003fa65: ;
        wr32(eax + 4u, 0u);
        wr32(eax, 0u);
        wr32(eax - 4u, 0u);
        if ((int8_t)(rd8(self + 0x32u) * 2u) <= 0)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)(rd8(self + 0x32u) * 2u);
            goto L_1003faf2;
        }
        edx = 0u;
L_1003fa78: ;
        t14 = (uint32_t)((int32_t)(rd32(rd32(edx * 4u + sp0 - 0x14u)) << 0x16u) >> 0x16u);
        t15 = rd32(edx * 4u + sp0 - 0x14u);
        wr32(sp0 + 4u, t14);
        wr32(edx * 4u + sp0 - 0x14u, t15 + 4u);
        d16 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(edx * 4u + sp0 - 0x3cu)) * (double)rdf32(COW_IMG(0x1032ac88u))) + (double)rdf32(eax - 4u));
        wrf32(eax - 4u, (float)d16);
        t17 = (uint32_t)((int32_t)(rd32(t15) << 0xcu) >> 0x16u);
        wr32(sp0 + 4u, t17);
        d18 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(edx * 4u + sp0 - 0x3cu)) * (double)rdf32(COW_IMG(0x1032ac88u))) + (double)rdf32(eax));
        wrf32(eax, (float)d18);
        t19 = (uint32_t)((int32_t)(rd32(t15) << 2u) >> 0x16u);
        wr32(sp0 + 4u, t19);
        d20 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(edx * 4u + sp0 - 0x3cu)) * (double)rdf32(COW_IMG(0x1032ac88u))) + (double)rdf32(eax + 4u));
        wrf32(eax + 4u, (float)d20);
        if ((int32_t)(edx + 1u) < (int32_t)(uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u))
        {
            edx = edx + 1u;
            goto L_1003fa78;
        }
        ecx = (uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(self + 0x32u) * 2u) >> 1u);
L_1003faf2: ;
        if ((int32_t)(edi + 1u) < (int16_t)rd16(self + 0x36u))
        {
            eax = eax + 0x24u;
            edi = edi + 1u;
            goto L_1003fa65;
        }
    }
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    return loc_50;
L_1003f94b: ;
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_1003f95e;
    goto L_1003f958;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003f8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003f8a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
