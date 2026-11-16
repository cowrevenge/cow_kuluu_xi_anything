/* f_0x1031c405 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031c405(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_150;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 344u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x144u, in_ebx);
    wr32(sp0 - 0x148u, in_esi);
    wr32(sp0 - 0x14cu, in_edi);
    t1 = rd32(COW_IMG(0x109f83f8u)) * 0x14u;
    wr32(sp0 - 0x150u, t1);
    wr32(sp0 - 0x154u, rd32(COW_IMG(0x109f83fcu)));
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x14cu;
    t2 = cow_thiscall(g, rd32(COW_IMG(0x103290b8u)), self, 2, rd32(COW_IMG(0x109f83fcu)), t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109f83fcu)));
        wr32(sp0 - 0x24u, 0u);
        if ((int32_t)rd32(COW_IMG(0x109f83f8u)) <= 0) goto L_1031c6f0;
        ebx = rd32(COW_IMG(0x109f83fcu));
        loc_3c = rd32(COW_IMG(0x109f83fcu));
        loc_24 = 0u;
L_1031c453: ;
        wr32(sp0 - 0x150u, 0x41c4u);
        t5 = rd32(ebx + 0x10u);
        wr32(sp0 - 0x154u, t5);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14cu;
        t6 = cow_thiscall(g, rd32(COW_IMG(0x103290b8u)), ecx, 2, t5, 0x41c4u);
        t7 = g->edx;
        if (t6 != 0u)
        {
            edx = t7;
            goto L_1031c6f7;
        }
        edx = t7;
        esi = t5;
        wr32(sp0 - 0x30u, 0u);
        t8 = rd32(ebx + 0xcu);
        wr32(sp0 - 0x10u, t8);
        wr32(sp0 - 0x2cu, esi + 0x144u);
        t9 = rd32(ebx + 8u);
        wr32(sp0 - 0x18u, t9);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x40u, esi + 0xc4u);
        loc_30 = 0u;
        loc_10 = t8;
        loc_2c = esi + 0x144u;
        loc_18 = t9;
        loc_1c = 0u;
        loc_34 = 0u;
        loc_40 = esi + 0xc4u;
        esi = esi + 0xc4u;
L_1031c495: ;
        wr32(sp0 - 0x150u, 0x40u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 8u, 0u);
        edi = sp0 - 0x140u;
        eax = 0u;
        ecx = 0x40u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if ((int32_t)loc_18 < 0)
        {
            loc_28 = 0u;
            loc_20 = 0u;
            goto L_1031c68e;
        }
        wr32(sp0 - 0x150u, 0x8000u);
        wr32(sp0 - 0x154u, loc_10);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14cu;
        t10 = cow_thiscall(g, rd32(COW_IMG(0x103290b8u)), ecx, 2, loc_10, 0x8000u);
        t11 = g->edx;
        if (t10 != 0u)
        {
            edx = t11;
            goto L_1031c6fb;
        }
        edx = rd32(sp0 - 0x10u) + 0xffcu;
        ebx = 0u;
L_1031c4d5: ;
        if (rd32(edx - 0xff4u) != 0xffffffffu) goto L_1031c70b;
        esi = edx - 0xff0u;
        if (rd32(edx) != 0xffffffffu) goto L_1031c70b;
L_1031c4f1: ;
        if (!(rd32(esi) & 1u))
        {
            ecx = rd32(esi);
            edi = rd32(esi);
            goto L_1031c50c;
        }
        ecx = rd32(esi);
        edi = rd32(esi);
        if ((int32_t)(ecx - 1u) > 1024) goto L_1031c6ff;
        ecx = ecx - 1u;
        wr32(sp0 - 8u, loc_8 + 1u);
        loc_8 = loc_8 + 1u;
L_1031c528: ;
        if ((int32_t)ecx < 16) goto L_1031c707;
        if ((ecx & 0xfu) != 0u) goto L_1031c707;
        if ((int32_t)ecx > 4080) goto L_1031c707;
        if (rd32(ecx + esi - 4u) != edi) goto L_1031c703;
        eax = ecx + esi;
        if (eax < edx)
        {
            esi = eax;
            goto L_1031c4f1;
        }
        zf = eax == edx;
        if (!zf) goto L_1031c703;
        if ((int32_t)(ebx + 1u) < 8)
        {
            edx = edx + 0x1000u;
            ebx = ebx + 1u;
            goto L_1031c4d5;
        }
        edx = edx + 0x1000u;
        if (rd32(rd32(sp0 - 0x2cu)) != loc_8) goto L_1031c70f;
        esi = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, sp0 - 0x140u);
        loc_8 = sp0 - 0x140u;
        loc_c = 0u;
L_1031c58a: ;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x38u, esi);
        if (rd32(esi + 4u) == esi)
        {
            edx = esi;
            edi = esi + 8u;
            loc_14 = 0u;
            goto L_1031c656;
        }
        eax = rd32(esi + 4u);
        edx = esi;
        edi = esi + 8u;
        loc_14 = 0u;
        loc_38 = esi;
L_1031c5a1: ;
        if (loc_14 == rd32(loc_8)) goto L_1031c629;
        if (eax < rd32(sp0 - 0x10u)) goto L_1031c71f;
        ecx = rd32(sp0 - 0x10u);
        if (eax >= ecx + 0x8000u) goto L_1031c71f;
        if (((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xcu == ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xffcu)
        {
            edx = ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xffcu;
            goto L_1031c713;
        }
        ecx = ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xcu;
        edx = ((eax & 0xffff0000u) | (eax & 0xf000u)) + 0xffcu;
L_1031c5dc: ;
        if (ecx == eax) goto L_1031c5eb;
        if (ecx + (rd32(ecx) & 0xfffffffeu) != edx)
        {
            ecx = ecx + (rd32(ecx) & 0xfffffffeu);
            goto L_1031c5dc;
        }
        ecx = ecx + (rd32(ecx) & 0xfffffffeu);
L_1031c5eb: ;
        if (ecx == edx) goto L_1031c713;
        if ((int32_t)((uint32_t)((int32_t)rd32(eax) >> 4u) - 1u) <= 63)
        {
            ecx = (uint32_t)((int32_t)rd32(eax) >> 4u) - 1u;
        }
        else
        {
            wr32(sp0 - 0x150u, 0x3fu);
            ecx = 0x3fu;
        }
        if (ecx != loc_c) goto L_1031c717;
        if (rd32(eax + 8u) != loc_38) goto L_1031c71b;
        wr32(sp0 - 0x14u, loc_14 + 1u);
        wr32(sp0 - 0x38u, eax);
        if (rd32(eax + 4u) != esi)
        {
            edx = eax;
            loc_14 = loc_14 + 1u;
            loc_38 = eax;
            eax = rd32(eax + 4u);
            goto L_1031c5a1;
        }
        edx = eax;
        loc_14 = loc_14 + 1u;
L_1031c629: ;
        if (loc_14 != 0u)
        {
            if ((int32_t)loc_c >= 32)
            {
                ecx = loc_c;
                t14 = loc_20 | 0x80000000u >> (ecx - 0x20u & 0x1fu);
                wr32(sp0 - 0x20u, t14);
                t15 = loc_1c | 0x80000000u >> (ecx - 0x20u & 0x1fu);
                wr32(sp0 - 0x1cu, t15);
                loc_20 = t14;
                loc_1c = t15;
            }
            else
            {
                ecx = loc_c;
                cf = loc_c < 0x20u;
                pf = PARITY((uint8_t)(loc_c - 0x20u));
                zf = loc_c == 0x20u;
                sf = (int32_t)(loc_c - 0x20u) < 0;
                of = ((loc_c ^ 0x20u) & (loc_c ^ loc_c - 0x20u)) >> 0x1fu;
                t12 = loc_28 | 0x80000000u >> (ecx & 0x1fu);
                wr32(sp0 - 0x28u, t12);
                t13 = loc_30 | 0x80000000u >> (ecx & 0x1fu);
                wr32(sp0 - 0x30u, t13);
                loc_28 = t12;
                loc_30 = t13;
            }
        }
L_1031c656: ;
        if (rd32(edx + 4u) != esi) goto L_1031c727;
        if (loc_14 != rd32(loc_8)) goto L_1031c727;
        ecx = loc_8;
        if (rd32(edi) != edx) goto L_1031c723;
        wr32(sp0 - 0xcu, loc_c + 1u);
        wr32(sp0 - 8u, loc_8 + 4u);
        if ((int32_t)(loc_c + 1u) < 64)
        {
            esi = edi;
            loc_8 = loc_8 + 4u;
            loc_c = loc_c + 1u;
            goto L_1031c58a;
        }
        loc_c = loc_c + 1u;
        ebx = rd32(sp0 - 0x3cu);
        esi = rd32(sp0 - 0x40u);
L_1031c68e: ;
        if (loc_28 != rd32(esi - 0x80u)) goto L_1031c72b;
        if (loc_20 != rd32(esi)) goto L_1031c72b;
        wr32(sp0 - 0x10u, loc_10 + 0x8000u);
        wr32(sp0 - 0x2cu, loc_2c + 0x204u);
        wr32(sp0 - 0x18u, loc_18 << 1u);
        wr32(sp0 - 0x34u, loc_34 + 1u);
        wr32(sp0 - 0x40u, esi + 4u);
        if ((int32_t)(loc_34 + 1u) < 32)
        {
            loc_10 = loc_10 + 0x8000u;
            loc_2c = loc_2c + 0x204u;
            loc_18 = loc_18 << 1u;
            loc_34 = loc_34 + 1u;
            loc_40 = esi + 4u;
            esi = esi + 4u;
            goto L_1031c493;
        }
        if (loc_30 != rd32(ebx)) goto L_1031c72f;
        if (loc_1c != rd32(ebx + 4u)) goto L_1031c72f;
        t16 = rd32(sp0 - 0x24u) + 1u;
        wr32(sp0 - 0x24u, t16);
        wr32(sp0 - 0x3cu, ebx + 0x14u);
        if ((int32_t)t16 < (int32_t)rd32(COW_IMG(0x109f83f8u)))
        {
            eax = t16;
            loc_24 = t16;
            loc_3c = ebx + 0x14u;
            ebx = ebx + 0x14u;
            goto L_1031c451;
        }
L_1031c6f0: ;
        eax = 0u;
    }
    else
    {
        eax = t2;
        edx = t4;
        eax = 0xffffffffu;
    }
L_1031c6f2: ;
    g->edx = edx;
    return eax;
L_1031c451: ;
    goto L_1031c453;
L_1031c493: ;
    goto L_1031c495;
L_1031c50c: ;
    if ((int32_t)((uint32_t)((int32_t)ecx >> 4u) - 1u) <= 63)
    {
        eax = (uint32_t)((int32_t)ecx >> 4u) - 1u;
    }
    else
    {
        wr32(sp0 - 0x150u, 0x3fu);
        eax = 0x3fu;
    }
    wr32(eax * 4u + sp0 - 0x140u, rd32(eax * 4u + sp0 - 0x140u) + 1u);
    goto L_1031c528;
L_1031c6f7: ;
    wr32(sp0 - 0x150u, 0xfffffffeu);
    loc_150 = 0xfffffffeu;
L_1031c731: ;
    eax = loc_150;
    goto L_1031c6f2;
L_1031c6fb: ;
    wr32(sp0 - 0x150u, 0xfffffffcu);
    loc_150 = 0xfffffffcu;
    goto L_1031c731;
L_1031c6ff: ;
    wr32(sp0 - 0x150u, 0xfffffffau);
    loc_150 = 0xfffffffau;
    goto L_1031c731;
L_1031c703: ;
    wr32(sp0 - 0x150u, 0xfffffff8u);
    loc_150 = 0xfffffff8u;
    goto L_1031c731;
L_1031c707: ;
    wr32(sp0 - 0x150u, 0xfffffff9u);
    loc_150 = 0xfffffff9u;
    goto L_1031c731;
L_1031c70b: ;
    wr32(sp0 - 0x150u, 0xfffffffbu);
    loc_150 = 0xfffffffbu;
    goto L_1031c731;
L_1031c70f: ;
    wr32(sp0 - 0x150u, 0xfffffff7u);
    loc_150 = 0xfffffff7u;
    goto L_1031c731;
L_1031c713: ;
    wr32(sp0 - 0x150u, 0xfffffff5u);
    loc_150 = 0xfffffff5u;
    goto L_1031c731;
L_1031c717: ;
    wr32(sp0 - 0x150u, 0xfffffff4u);
    loc_150 = 0xfffffff4u;
    goto L_1031c731;
L_1031c71b: ;
    wr32(sp0 - 0x150u, 0xfffffff3u);
    loc_150 = 0xfffffff3u;
    goto L_1031c731;
L_1031c71f: ;
    wr32(sp0 - 0x150u, 0xfffffff6u);
    loc_150 = 0xfffffff6u;
    goto L_1031c731;
L_1031c723: ;
    wr32(sp0 - 0x150u, 0xfffffff1u);
    loc_150 = 0xfffffff1u;
    goto L_1031c731;
L_1031c727: ;
    wr32(sp0 - 0x150u, 0xfffffff2u);
    loc_150 = 0xfffffff2u;
    goto L_1031c731;
L_1031c72b: ;
    wr32(sp0 - 0x150u, 0xfffffff0u);
    loc_150 = 0xfffffff0u;
    goto L_1031c731;
L_1031c72f: ;
    wr32(sp0 - 0x150u, 0xffffffefu);
    loc_150 = 0xffffffefu;
    goto L_1031c731;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031c405(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031c405(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
