/* f_0x101e2040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e2040(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_28;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_48;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x44u, self);
    t1 = rd8(rd32(sp0 + 4u) + rd32(rd32(sp0 + 4u) + 0xcu) + 0x18u);
    wr32(sp0 - 0x38u, t1);
    if (t1 != 0u)
    {
        ecx = t1;
        edx = t1;
        loc_38 = t1;
        goto L_101e2073;
    }
    return 2u;
L_101e2073: ;
    wr32(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x48u, self + 6u);
    ebx = self;
    esi = in_esi;
    loc_40 = 1u;
    loc_48 = self + 6u;
L_101e2088: ;
    wr32(sp0 - 0x3cu, 0u);
    if ((int32_t)ecx <= 0) goto L_101e216d;
    eax = 0u;
    loc_3c = 0u;
L_101e2096: ;
    wr32(sp0 - 0x5cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t2 = cow_thiscall(g, COW_IMG(0x1021cb80u), rd32(sp0 + 4u), 1, eax);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        esi = t2;
        goto L_101e21b5;
    }
    eax = t2;
    edx = t3;
    esi = t2;
    if (rd8(esi + 8u) != 0u) goto L_101e21b5;
    eax = (eax & 0xffffff00u) | rd8(esi + 8u);
    if (rd16(esi) != rd16(rd32(sp0 - 0x48u))) goto L_101e21b5;
    eax = (eax & 0xffff0000u) | rd16(esi);
    wr32(sp0 - 0x5cu, (uint16_t)eax);
    g->edx = edx;
    t4 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x58u;
    t5 = cow_thiscall(g, COW_IMG(0x1015bc40u), t4, 1, (uint16_t)eax);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        edx = t7;
        goto L_101e21b5;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    if (esi + 0x10u == 0u) goto L_101e2131;
    ebp = esi + 0x10u;
    edi = rd16(eax + 4u);
    wr32(sp0 - 0x5cu, ebp);
    wr32(sp0 - 0x60u, edi);
    t8 = (edx & 0xffff0000u) | rd16(esi);
    wr32(sp0 - 0x64u, t8);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t8;
    g->esp = sp0 - 0x58u;
    t9 = cow_cdecl(g, COW_IMG(0x100fe320u), 3, t8, edi, ebp);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        edx = t11;
        goto L_101e21b1;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0x5cu, ebp);
    wr32(sp0 - 0x60u, edi);
    t12 = (eax & 0xffff0000u) | rd16(esi);
    wr32(sp0 - 0x64u, t12);
    g->eax = t12;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t13 = cow_cdecl(g, COW_IMG(0x100fe770u), 3, t12, edi, ebp);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        edx = t15;
        goto L_101e21b1;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    wr32(sp0 - 0x5cu, ebp);
    wr32(sp0 - 0x60u, edi);
    t16 = (ecx & 0xffff0000u) | rd16(esi);
    wr32(sp0 - 0x64u, t16);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t17 = cow_cdecl(g, COW_IMG(0x100fe7d0u), 3, t16, edi, ebp);
    t18 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        edx = t18;
        goto L_101e21b1;
    }
    edx = t18;
    ebx = rd32(sp0 - 0x44u);
L_101e2131: ;
    eax = ebx + 0x1au;
    ecx = 9u;
    edx = (edx & 0xffff0000u) | rd8(esi + 2u);
    edi = 0u;
L_101e2140: ;
    if (rd16(eax) == (uint16_t)edx)
    {
        edi = edi + 1u;
    }
    if (ecx != 1u)
    {
        eax = eax + 2u;
        ecx = ecx - 1u;
        goto L_101e2140;
    }
    ecx = ecx - 1u;
    if (rd32(esi + 4u) <= edi) goto L_101e21b5;
    t19 = rd32(sp0 - 0x48u);
    wr16(t19, rd16(esi));
    t20 = rd8(esi + 2u);
    t21 = rd32(sp0 - 0x40u);
    wr16(t19 + 0x14u, (uint16_t)t20);
    wr8(ebx + t21 + 0x36u, 1u);
    ecx = (ecx & 0xffff0000u) | t20;
L_101e216d: ;
    wr32(sp0 - 0x40u, loc_40 + 1u);
    wr32(sp0 - 0x48u, loc_48 + 2u);
    if ((int32_t)(loc_40 + 1u) < 10)
    {
        edx = loc_48 + 2u;
        loc_40 = loc_40 + 1u;
        loc_48 = loc_48 + 2u;
        goto L_101e2084;
    }
    eax = 1u;
L_101e218f: ;
    if (rd8(eax + ebx + 0x36u) == 0u) goto L_101e219d;
    ecx = (ecx & 0xffffff00u) | rd8(eax + ebx + 0x36u);
    if ((int32_t)(eax + 1u) < 10)
    {
        eax = eax + 1u;
        goto L_101e218f;
    }
    eax = eax + 1u;
L_101e219d: ;
    if (eax == 0xau) goto L_101e21cc;
    return 2u;
L_101e2084: ;
    ecx = loc_38;
    goto L_101e2088;
L_101e21b1: ;
    ebx = rd32(sp0 - 0x44u);
L_101e21b5: ;
    t22 = rd32(sp0 - 0x3cu) + 1u;
    wr32(sp0 - 0x3cu, t22);
    if ((int32_t)(rd32(sp0 - 0x3cu) + 1u) < (int32_t)rd32(sp0 - 0x38u))
    {
        eax = t22;
        loc_3c = t22;
        goto L_101e2096;
    }
    ecx = rd32(sp0 - 0x38u);
    goto L_101e216d;
L_101e21cc: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x30u, 0u);
    t23 = rd32(ebx + 0x18u);
    wr32(sp0 - 0x28u, t23);
    t24 = rd32(ebx + 4u);
    wr32(sp0 - 0x14u, t24);
    wr32(sp0 + 4u, sp0 - 0x32u);
    edx = 2u;
    ebp = 4u;
    edi = ebx + 0x1cu;
    loc_14 = t24;
    loc_28 = t23;
L_101e2231: ;
    if (rd16(edi - 0x14u) != 0u)
    {
        eax = 2u;
        esi = (esi & 0xffff0000u) | rd16(edi);
L_101e2242: ;
        if (rd16(eax * 2u + sp0 - 0x28u) == (uint16_t)esi) goto L_101e2285;
        if ((int32_t)(eax + 1u) < 10)
        {
            eax = eax + 1u;
            goto L_101e2242;
        }
        eax = eax + 1u;
        if ((int32_t)edx >= 10)
        {
            ebx = 0u;
        }
        else
        {
            eax = 0xau - edx;
            ecx = edi;
            ebx = 0u;
L_101e225d: ;
            if (rd16(ecx) == (uint16_t)esi)
            {
                ebx = ebx + 1u;
            }
            if (eax != 1u)
            {
                eax = eax - 1u;
                ecx = ecx + 2u;
                goto L_101e225d;
            }
            eax = eax - 1u;
        }
        t25 = rd16(edi - 0x14u);
        wr16(ebp + sp0 - 0x28u, (uint16_t)esi);
        wr16(ebp + sp0 - 0x14u, (uint16_t)t25);
        t26 = rd32(sp0 + 4u);
        wr8(t26, (uint8_t)ebx);
        wr32(sp0 + 4u, t26 + 1u);
        ebp = ebp + 2u;
L_101e2285: ;
        ebx = self;
    }
    if ((int32_t)(edx + 1u) < 10)
    {
        edx = edx + 1u;
        edi = edi + 2u;
        goto L_101e2231;
    }
    edx = edx + 1u;
    t27 = rd32(ebx);
    wr16(t27 + 0xcu, loc_14 >> 0x10u);
    wr8(rd32(ebx), (uint8_t)(loc_28 >> 0x10u));
    eax = 0xeu;
    ecx = 0u;
L_101e22b8: ;
    t28 = rd32(ebx);
    t29 = rd16(eax + sp0 - 0x1eu);
    wr32(sp0 + 4u, eax);
    wr16(eax + t28, (uint16_t)t29);
    t30 = rd8(eax + sp0 - 0x32u);
    wr8(ecx + rd32(ebx) + 1u, (uint8_t)t30);
    wr8(ecx + rd32(ebx) + 0x22u, rd8(ecx + sp0 - 0x32u));
    if ((int32_t)(rd32(sp0 + 4u) + 2u) < 30)
    {
        eax = rd32(sp0 + 4u) + 2u;
        ecx = ecx + 1u;
        ebp = (ebp & 0xffff0000u) | t29;
        goto L_101e22b8;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e2040(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
