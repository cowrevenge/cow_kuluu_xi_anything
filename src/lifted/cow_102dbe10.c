/* f_0x102dbe10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dbe10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if (rd32(sp0 + 8u) >= 0x12u)
    {
        if ((rd8(rd32(sp0 + 4u) + 1u) & 0xfeu) != 0u)
        {
            edx = in_edx;
            goto L_102dc2ab;
        }
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 1u);
        ebx = rd32(sp0 + 4u);
        if ((rd8(ebx + 2u) & 0xfffffff4u) != 0u)
        {
            edx = rd8(ebx + 2u);
            goto L_102dc2ab;
        }
        edx = rd8(ebx + 2u);
        if (rd16(ebx + 0xcu) == 0u) goto L_102dc2ab;
        if (rd16(ebx + 0xeu) == 0u) goto L_102dc2ab;
        if ((uint8_t)ecx == 0u)
        {
            edi = (rd8(ebx + 7u) + 7u) >> 3u;
            loc_18 = 0u;
            goto L_102dbead;
        }
        eax = rd8(ebx + 7u);
        edi = (rd8(ebx + 7u) + 7u) >> 3u;
        if (eax == 0xfu) goto L_102dbea6;
        eax = eax - 0xfu;
        if (eax == 1u) goto L_102dbe9d;
        eax = eax - 1u;
        if (eax == 8u) goto L_102dbe94;
        eax = eax - 8u;
        if (eax != 8u) goto L_102dc2ab;
        loc_18 = 0x15u;
L_102dbead: ;
        t1 = (rd8(ebx + 0x10u) + 7u) >> 3u;
        if ((edx & 3u) == 1u)
        {
            eax = (edx & 3u) - 1u;
            ecx = rd8(ebx + 0x10u);
            loc_c = t1;
            goto L_102dbf19;
        }
        eax = (edx & 3u) - 1u;
        ecx = rd8(ebx + 0x10u);
        loc_c = t1;
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_102dbedf;
        }
        eax = eax - 1u;
        if (eax != 1u) goto L_102dc2ab;
        eax = eax - 1u;
        if (rd8(ebx + 0x10u) != 8u) goto L_102dc2ab;
        loc_10 = 0x32u;
L_102dbf34: ;
        t2 = -((uint8_t)((rd8(ebx + 0x11u) & 0x20u) - 0x20u) != 0u) + 1u;
        t3 = rd8(ebx);
        t4 = rd8(ebx + 0x11u);
        wr32(sp0 + 8u, rd32(sp0 + 8u) - 0x12u);
        t5 = (t4 & 0x10u) != 0x10u;
        if (rd32(sp0 + 8u) < t3)
        {
            edx = edx & 8u;
            goto L_102dc2ab;
        }
        eax = t3;
        loc_2c = edx & 8u;
        edx = edx & 8u;
        loc_28 = t2;
        loc_24 = t5;
        wr32(sp0 + 8u, rd32(sp0 + 8u) - eax);
        t6 = eax + ebx + 0x12u;
        t7 = rd16(ebx + 5u);
        if (rd32(sp0 + 8u) < t7 * edi) goto L_102dc2ab;
        ecx = t7;
        loc_8 = t6;
        loc_34 = t7 * edi;
        if (rd32(self + 0x40u) == 0u) goto L_102dc118;
        if (loc_10 != 0x29u) goto L_102dc118;
        if ((int32_t)(ecx + rd16(ebx + 3u)) > 256) goto L_102dc2ab;
        g->esp = sp0 - 0x3cu;
        t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x400u, in_ebx, in_edi);
        wr32(self + 8u, t8);
        if (t8 != 0u)
        {
            eax = t8;
            edx = t8;
            goto L_102dbfcd;
        }
        edx = t8;
L_102dbfc3: ;
        eax = 0x8007000eu;
L_102dc2b0: ;
    }
    else
    {
        eax = 0x80004005u;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
L_102dbe94: ;
    loc_18 = 0x14u;
    goto L_102dbead;
L_102dbe9d: ;
    loc_18 = 0x19u;
    goto L_102dbead;
L_102dbea6: ;
    loc_18 = 0x18u;
    goto L_102dbead;
L_102dbedf: ;
    if (ecx == 0xfu)
    {
        ecx = ecx - 0xfu;
        goto L_102dbf10;
    }
    ecx = ecx - 0xfu;
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_102dbf07;
    }
    ecx = ecx - 1u;
    if (ecx == 8u)
    {
        ecx = ecx - 8u;
        goto L_102dbefe;
    }
    ecx = ecx - 8u;
    if (ecx != 8u) goto L_102dc2ab;
    ecx = ecx - 8u;
    loc_10 = 0x15u;
    goto L_102dbf34;
L_102dbefe: ;
    loc_10 = 0x14u;
    goto L_102dbf34;
L_102dbf07: ;
    loc_10 = 0x19u;
    goto L_102dbf34;
L_102dbf10: ;
    loc_10 = 0x18u;
    goto L_102dbf34;
L_102dbf19: ;
    if (rd8(ebx + 1u) == 0u) goto L_102dc2ab;
    if (rd8(ebx + 0x10u) != 8u) goto L_102dc2ab;
    loc_10 = 0x29u;
    goto L_102dbf34;
L_102dbfcd: ;
    wr32(self + 0x3cu, 1u);
    edi = edx;
    eax = 0xffffffffu;
    ecx = 0x100u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t9 = rd32(self + 8u);
    wr32(sp0 + 4u, loc_8);
    t10 = t9 + rd16(ebx + 3u) * 4u;
    t11 = t9 + rd16(ebx + 3u) * 4u + rd16(ebx + 5u) * 4u;
    if (t9 + rd16(ebx + 3u) * 4u < t9 + rd16(ebx + 3u) * 4u + rd16(ebx + 5u) * 4u)
    {
        loc_14 = t10;
        loc_30 = t11;
        eax = rd32(sp0 + 8u);
        ecx = rd32(sp0 + 8u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
L_102dc008: ;
        if (loc_18 == 0x14u) goto L_102dc0d9;
        edx = loc_1c;
        edi = loc_18 - 0x14u;
        if (edi == 1u) goto L_102dc0b6;
        edi = edi - 1u;
        if (edi == 3u) goto L_102dc077;
        edi = edi - 3u;
        if (edi != 1u) goto L_102dc0f7;
        t12 = rd16(rd32(sp0 + 4u));
        t13 = (t12 >> 0xfu) * 0xffu;
        t14 = t12 >> 0xau & 0x1fu;
        t15 = t12 >> 5u & 0x1fu;
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 2u);
        eax = t14 >> 2u | t14 << 3u;
        ecx = t15 >> 2u | t15 << 3u;
        edx = (t12 & 0x1fu) >> 2u | (t12 & 0x1fu) << 3u;
        loc_20 = t13;
L_102dc0f4: ;
        loc_1c = edx;
L_102dc0f7: ;
        wr8(loc_14 + 2u, (uint8_t)edx);
        wr8(loc_14 + 3u, (uint8_t)loc_20);
        wr8(loc_14, (uint8_t)eax);
        wr8(loc_14 + 1u, (uint8_t)ecx);
        if (loc_14 + 4u < loc_30)
        {
            loc_14 = loc_14 + 4u;
            goto L_102dc008;
        }
    }
L_102dc118: ;
    t24 = rd16(ebx + 0xcu);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - loc_34);
    t25 = rd16(ebx + 0xeu);
    wr32(self, loc_10);
    wr32(self + 4u, loc_34 + loc_8);
    t26 = rd16(ebx + 0xcu) * loc_c;
    t27 = rd32(self + 0x40u);
    wr32(self + 0x30u, t26);
    wr32(self + 0x34u, 0u);
    t28 = rd16(ebx + 0xcu);
    wr32(self + 0xcu, t28);
    t29 = rd16(ebx + 0xeu);
    wr32(self + 0x10u, t29);
    wr32(self + 0x14u, 1u);
    if (t27 == 0u)
    {
        edx = t29;
        goto L_102dc2a7;
    }
    eax = t25 * t24 * loc_c;
    ecx = loc_34 + loc_8;
    edx = t29;
    loc_8 = loc_34 + loc_8;
    if (loc_2c != 0u) goto L_102dc18e;
    if (loc_28 == 0u) goto L_102dc18e;
    if (loc_24 == 0u) goto L_102dc18e;
    if (rd32(sp0 + 8u) < eax) goto L_102dc2ab;
    wr32(self + 4u, ecx);
    wr32(self + 0x38u, 0u);
L_102dc2a7: ;
    eax = 0u;
    goto L_102dc2b0;
L_102dc077: ;
    t16 = rd16(rd32(sp0 + 4u));
    t17 = t16 >> 0xau & 0x1fu;
    t18 = t16 >> 5u & 0x1fu;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 2u);
    eax = t17 >> 2u | t17 << 3u;
    ecx = t18 >> 2u | t18 << 3u;
    edx = (t16 & 0x1fu) >> 2u | (t16 & 0x1fu) << 3u;
L_102dc0ed: ;
    loc_20 = 0xffu;
    goto L_102dc0f4;
L_102dc0b6: ;
    t19 = rd32(rd32(sp0 + 4u));
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 4u);
    eax = (uint8_t)(t19 >> 0x10u);
    ecx = (uint8_t)(t19 >> 8u);
    edx = (uint8_t)t19;
    loc_20 = t19 >> 0x18u;
    goto L_102dc0f4;
L_102dc0d9: ;
    t20 = rd32(sp0 + 4u) + 3u;
    t21 = rd8(rd32(sp0 + 4u) + 2u);
    t22 = rd8(rd32(sp0 + 4u) + 1u);
    t23 = rd8(rd32(sp0 + 4u));
    wr32(sp0 + 4u, t20);
    eax = t21;
    ecx = t22;
    edx = t23;
    goto L_102dc0ed;
L_102dc18e: ;
    g->esp = sp0 - 0x3cu;
    t30 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, in_ebx, in_edi);
    t31 = g->edx;
    wr32(self + 4u, t30);
    if (t30 == 0u)
    {
        edx = t31;
        goto L_102dbfc3;
    }
    eax = t30;
    wr32(self + 0x38u, 1u);
    if (loc_28 == 0u)
    {
        edx = eax + (rd16(ebx + 0xeu) - 1u) * rd32(self + 0x30u);
    }
    else
    {
        edx = eax;
    }
    if (rd16(ebx + 0xeu) == 0u) goto L_102dc2a7;
    loc_18 = 0u;
L_102dc1c8: ;
    if (loc_24 == 0u)
    {
        t32 = edx + rd32(self + 0x30u) - loc_c;
        wr32(sp0 + 4u, t32);
    }
    else
    {
        wr32(sp0 + 4u, edx);
    }
    if (rd16(ebx + 0xcu) == 0u) goto L_102dc28a;
    eax = rd16(ebx + 0xcu);
    loc_1c = 0u;
L_102dc1ec: ;
    if (loc_2c == 0u) goto L_102dc218;
    if (rd32(sp0 + 8u) < 1u) goto L_102dc2ab;
    t33 = rd8(loc_8);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
    eax = (t33 & 0x7fu) + 1u;
    loc_8 = loc_8 + 1u;
    loc_20 = t33 & 0x80u;
L_102dc21b: ;
    if (eax == 0u)
    {
        loc_1c = eax + loc_1c;
        goto L_102dc26c;
    }
    loc_1c = eax + loc_1c;
L_102dc222: ;
    if (rd32(sp0 + 8u) < loc_c) goto L_102dc2ab;
    loc_34 = eax - 1u;
    t34 = rd32(sp0 + 4u);
    esi = loc_8;
    edi = t34;
    ecx = loc_c >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = loc_c & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (loc_20 == 0u)
    {
        eax = loc_c;
        wr32(sp0 + 8u, rd32(sp0 + 8u) - eax);
        loc_8 = eax + loc_8;
    }
    if (loc_24 == 0u)
    {
        eax = loc_c;
        wr32(sp0 + 4u, rd32(sp0 + 4u) - eax);
    }
    else
    {
        eax = loc_c;
        wr32(sp0 + 4u, eax + rd32(sp0 + 4u));
    }
    if (loc_34 != 0u)
    {
        eax = loc_34;
        goto L_102dc222;
    }
L_102dc26c: ;
    if (loc_20 != 0u)
    {
        wr32(sp0 + 8u, rd32(sp0 + 8u) - loc_c);
        loc_8 = loc_8 + loc_c;
    }
    if (loc_1c < rd16(ebx + 0xcu))
    {
        eax = rd16(ebx + 0xcu);
        goto L_102dc1ec;
    }
L_102dc28a: ;
    if (loc_28 == 0u)
    {
        edx = edx - rd32(self + 0x30u);
    }
    else
    {
        edx = edx + rd32(self + 0x30u);
    }
    if (loc_18 + 1u < rd16(ebx + 0xeu))
    {
        loc_18 = loc_18 + 1u;
        goto L_102dc1c8;
    }
    goto L_102dc2a7;
L_102dc218: ;
    loc_20 = 0u;
    goto L_102dc21b;
L_102dc2ab: ;
    eax = 0x80004005u;
    goto L_102dc2b0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dbe10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dbe10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
