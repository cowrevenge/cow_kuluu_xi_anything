/* f_0x100e0d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e0d50(Guest* g)
{
    uint32_t eax;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_100e139b;
    }
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd16(arg1 + 0xcu) > 3u)
    {
        ecx = t2;
        goto L_100e1344;
    }
    eax = rd16(arg1 + 0xcu);
    ecx = t2;
    edx = t3;
    loc_4 = t1;
    t4 = rd32(COW_IMG(0x100e13a8u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x100e0d84u: goto L_100e0d84;
    case 0x100e0e44u: goto L_100e0e44;
    case 0x100e0e89u: goto L_100e0e89;
    case 0x100e1040u: goto L_100e1040;
    default: rt_fatal(g, COW_IMG(0x100e0d7du), "switch");
    }
    return 0;
L_100e0d84: ;
    edx = 0u;
L_100e0d8c: ;
    if (rd32(arg1 + (uint16_t)edx * 0x7d4u + 0x1f20u) != 0u) goto L_100e0dd1;
    eax = (uint16_t)edx * 0x1f5u;
    if ((uint16_t)(edx + 1u) < 2u)
    {
        edx = edx + 1u;
        goto L_100e0d8c;
    }
    if (rd16(arg1 + 0x1ea0u) == 0u) goto L_100e139b;
    wr16(arg1 + 0x1ea0u, 0u);
    wr16(arg1 + 0x1ea2u, 2u);
    wr16(arg1 + 0xcu, 1u);
    return (eax & 0xffffff00u) | 1u;
L_100e0dd1: ;
    if (rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u) == 0u)
    {
        eax = rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u);
        goto L_100e0e1c;
    }
    eax = rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u);
    ecx = rd16(arg1 + 0x1ea0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t33 = cow_thiscall_cdecl(g, eax, ecx, 3, arg1 + 0x1ea0u, 0u, arg1);
    t34 = g->edx;
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        goto L_100e0e1c;
    }
    eax = t33;
    edx = t34;
    wr16(arg1 + 0x1ea0u, 0u);
    wr16(arg1 + 0x1ea2u, 2u);
    esi = arg1 + 0x1f0cu;
    edi = 2u;
L_100e0dfe: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t35 = cow_fastcall(g, COW_IMG(0x100e13c0u), esi, edx, 0);
    t36 = g->edx;
    if (edi != 1u)
    {
        eax = t35;
        edx = t36;
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e0dfe;
    }
    eax = t35;
    wr16(arg1 + 0xcu, 2u);
    return (eax & 0xffffff00u) | 1u;
L_100e0e1c: ;
    if (rd32(arg1 + rd16(arg1 + 0x1ea0u) * 4u + 0x1ea4u) != 0u) goto L_100e139b;
    wr16(arg1 + 0x1ea0u, 0u);
    wr16(arg1 + 0x1ea2u, 2u);
    wr16(arg1 + 0xcu, 3u);
    return (eax & 0xffffff00u) | 1u;
L_100e0e44: ;
    if (rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu) == 0u)
    {
        eax = rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu);
        goto L_100e0e63;
    }
    eax = rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t32 = cow_thiscall_cdecl(g, eax, ecx, 3, arg1 + 0x1ee8u, 0u, arg1);
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        goto L_100e0e72;
    }
    eax = t32;
L_100e0e63: ;
    if (rd32(arg1 + rd16(arg1 + 0x1ee8u) * 4u + 0x1eecu) != 0u) goto L_100e139b;
L_100e0e72: ;
    wr16(arg1 + 0x1ee8u, 0u);
    wr16(arg1 + 0x1eeau, 2u);
    wr16(arg1 + 0xcu, 0u);
    return (eax & 0xffffff00u) | 1u;
L_100e0e89: ;
    loc_c = rd32(sp0 - 0xcu) & 0xffffffu;
    loc_8 = 0u;
L_100e0e91: ;
    if (rd32(arg1 + (uint16_t)loc_8 * 0x7d4u + 0x1f20u) == 0u)
    {
        ecx = (uint16_t)loc_8 * 0x19u;
        goto L_100e0f72;
    }
    eax = rd32(arg1 + (uint16_t)loc_8 * 0x7d4u + 0x1f20u);
    ecx = (uint16_t)loc_8 * 0x19u;
    edx = (uint16_t)loc_8 * 0x7du;
    esi = arg1 + (uint16_t)loc_8 * 0x7d4u;
    edi = arg1 + (uint16_t)loc_8 * 0x7d4u + 0x26bcu;
    if (rd16(edi) == 0u) goto L_100e0f72;
    eax = (eax & 0xffff0000u) | rd16(edi);
    if (rd32(edi + (uint16_t)eax * 4u + 4u) == 0u) goto L_100e0ef2;
    eax = rd32(edi + (uint16_t)eax * 4u + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t21 = cow_thiscall(g, eax, esi + 0x1f0cu, 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        edx = t23;
        goto L_100e0fe5;
    }
    ecx = t22;
L_100e0ef2: ;
    if (loc_4 > rd32(esi + 0x1f0cu) + 0x1eu)
    {
        eax = loc_4;
        edx = rd32(esi + 0x1f0cu) + 0x1eu;
        goto L_100e0fe5;
    }
    edx = rd32(esi + 0x1f0cu) + 0x1eu;
    if (rd32(edi + rd16(edi) * 4u + 4u) == 0u)
    {
        if (rd32(esi + 0x1f20u) != 0u)
        {
            eax = rd32(esi + 0x1f20u);
            t24 = rd32(esi + 0x1f24u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall_cdecl(g, eax, t24, 2, t24, 0u);
            t25 = g->ecx;
            ecx = t25;
        }
        wr8(esi + 0x1f10u, 0u);
        wr32(esi + 0x1f0cu, 0u);
        wr32(esi + 0x1f20u, 0u);
        wr32(esi + 0x1f24u, 0u);
        wr16(esi + 0x1f28u, 0u);
        wr8(esi + 0x1f11u, 0u);
        wr16(esi + 0x1f12u, 0u);
        wr16(esi + 0x26bcu, 0u);
        wr16(esi + 0x26beu, 2u);
        wr32(esi + 0x26c0u, 0u);
    }
    else
    {
        loc_c = (loc_c & 0xffffffu) | 0x1000000u;
    }
L_100e0f72: ;
    if ((uint16_t)(loc_8 + 1u) < 2u)
    {
        loc_8 = loc_8 + 1u;
        goto L_100e0e91;
    }
    if (rd32(arg1 + rd16(arg1 + 0xcu) * 0x24u + rd16(arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u) * 4u + 0x1ea4u) == 0u)
    {
        eax = rd32(arg1 + rd16(arg1 + 0xcu) * 0x24u + rd16(arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u) * 4u + 0x1ea4u);
        esi = arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u;
        goto L_100e1010;
    }
    eax = rd32(arg1 + rd16(arg1 + 0xcu) * 0x24u + rd16(arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u) * 4u + 0x1ea4u);
    edx = rd16(arg1 + 0xcu) * 9u;
    esi = arg1 + rd16(arg1 + 0xcu) * 0x24u + 0x1ea0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t28 = cow_thiscall_cdecl(g, eax, ecx, 3, esi, 0u, arg1);
    t29 = g->edx;
    if ((uint8_t)t28 != 0u)
    {
        eax = t28;
        goto L_100e1010;
    }
    eax = t28;
    edx = t29;
    wr16(esi, 0u);
    wr16(esi + 2u, 2u);
    esi = arg1 + 0x1f0cu;
    edi = 2u;
L_100e0fc7: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t30 = cow_fastcall(g, COW_IMG(0x100e13c0u), esi, edx, 0);
    t31 = g->edx;
    if (edi != 1u)
    {
        eax = t30;
        edx = t31;
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e0fc7;
    }
    eax = t30;
    wr16(arg1 + 0xcu, 2u);
    return (eax & 0xffffff00u) | 1u;
L_100e0fe5: ;
    esi = arg1 + 0x1f0cu;
    edi = 2u;
L_100e0ff0: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t26 = cow_fastcall(g, COW_IMG(0x100e13c0u), esi, edx, 0);
    t27 = g->edx;
    if (edi != 1u)
    {
        eax = t26;
        edx = t27;
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e0ff0;
    }
    eax = t26;
    wr16(arg1 + 0xcu, 2u);
    return (eax & 0xffffff00u) | 1u;
L_100e1010: ;
    if (loc_c >> 0x18u != 0u) goto L_100e139b;
    if (rd32(esi + rd16(esi) * 4u + 4u) != 0u) goto L_100e139b;
    wr16(esi, 0u);
    wr16(esi + 2u, 2u);
    wr16(arg1 + 0xcu, 0u);
    return (eax & 0xffffff00u) | 1u;
L_100e1040: ;
    eax = 2u;
    esi = arg1 + 0x1f0cu;
    loc_c = rd32(sp0 - 0xcu) & 0xffffffu;
L_100e104f: ;
    if (rd32(esi + 0x14u) == 0u)
    {
        loc_8 = eax - 1u;
        goto L_100e10fa;
    }
    loc_8 = eax - 1u;
    if (rd16(esi + 0x7b2u) != 1u) goto L_100e10fa;
    if (rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u) == 0u)
    {
        edx = rd16(esi + 0x7b0u);
        edi = esi + 0x7b0u;
        goto L_100e1094;
    }
    eax = rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u);
    edx = rd16(esi + 0x7b0u);
    edi = esi + 0x7b0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t5 = cow_thiscall(g, eax, ecx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_100e11e4;
    }
    edx = t6;
L_100e1094: ;
    if (loc_4 > rd32(esi) + 0x1eu) goto L_100e11e4;
    if (rd32(edi + rd16(edi) * 4u + 4u) != 0u)
    {
        ecx = rd16(edi);
        if (rd16(esi + 0x7b2u) == 1u)
        {
            loc_c = (loc_c & 0xffffffu) | 0x1000000u;
        }
    }
    else
    {
        ecx = rd16(edi);
        if (rd32(esi + 0x14u) != 0u)
        {
            eax = rd32(esi + 0x14u);
            t7 = rd32(esi + 0x18u);
            g->edx = t7;
            g->esp = sp0 - 0x1cu;
            cow_thiscall_cdecl(g, eax, ecx, 2, t7, 0u);
            t8 = g->ecx;
            t9 = g->edx;
            ecx = t8;
            edx = t9;
        }
        wr8(esi + 4u, 0u);
        wr32(esi, 0u);
        wr32(esi + 0x14u, 0u);
        wr32(esi + 0x18u, 0u);
        wr16(esi + 0x1cu, 0u);
        wr8(esi + 5u, 0u);
        wr16(esi + 6u, 0u);
        wr16(edi, 0u);
        wr16(esi + 0x7b2u, 2u);
        wr32(esi + 0x7b4u, 0u);
    }
L_100e10fa: ;
    if ((int32_t)loc_8 > 0)
    {
        eax = loc_8;
        esi = esi + 0x7d4u;
        goto L_100e104f;
    }
    if (loc_c >> 0x18u != 0u) goto L_100e1290;
    eax = arg1 + 0x1f0cu;
    ecx = 2u;
    esi = 0u;
L_100e1123: ;
    if (rd32(eax + 0x14u) != 0u)
    {
        if (rd16(eax + 0x7b2u) != 1u)
        {
            if (esi == 0u) goto L_100e113e;
            if (rd32(esi) <= rd32(eax))
            {
                edx = rd32(esi);
                goto L_100e1140;
            }
            edx = rd32(esi);
L_100e113e: ;
            esi = eax;
        }
    }
L_100e1140: ;
    if (ecx != 1u)
    {
        eax = eax + 0x7d4u;
        ecx = ecx - 1u;
        goto L_100e1123;
    }
    ecx = ecx - 1u;
    if (esi == 0u) goto L_100e1290;
    if (rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u) == 0u)
    {
        edi = esi + 0x7b0u;
        goto L_100e1252;
    }
    eax = rd32(esi + rd16(esi + 0x7b0u) * 4u + 0x7b4u);
    edi = esi + 0x7b0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t13 = cow_thiscall_cdecl(g, eax, ecx, 3, edi, esi, arg1);
    t14 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        edx = t14;
        goto L_100e124e;
    }
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    ecx = arg1;
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e118f: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        t15 = rd32(esi + 4u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, eax, ecx, 2, t15, 0u);
        t16 = g->ecx;
        ecx = t16;
    }
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e118f;
    }
    wr16(arg1 + 0xcu, 2u);
    return (arg1 & 0xffffff00u) | 1u;
L_100e11e4: ;
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e11f8: ;
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        t10 = rd32(esi + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t11 = cow_thiscall_cdecl(g, eax, t10, 2, t10, 0u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e11f8;
    }
    wr16(arg1 + 0xcu, 2u);
    return (eax & 0xffffff00u) | 1u;
L_100e124e: ;
L_100e1252: ;
    if (rd32(edi + rd16(edi) * 4u + 4u) != 0u) goto L_100e12cd;
    ecx = rd16(edi);
    if (rd32(esi + 0x14u) != 0u)
    {
        eax = rd32(esi + 0x14u);
        t17 = rd32(esi + 0x18u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, eax, ecx, 2, t17, 0u);
    }
    wr8(esi + 4u, 0u);
    wr32(esi, 0u);
    wr32(esi + 0x14u, 0u);
    wr32(esi + 0x18u, 0u);
    wr16(esi + 0x1cu, 0u);
    wr8(esi + 5u, 0u);
    wr16(esi + 6u, 0u);
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    wr32(edi + 4u, 0u);
L_100e1290: ;
    eax = arg1 + 0x26beu;
    ecx = 2u;
    edx = 0u;
L_100e129d: ;
    if (rd32(eax - 0x79eu) != 0u)
    {
        if (rd16(eax) != 3u)
        {
            edx = edx + 1u;
        }
    }
    if (ecx != 1u)
    {
        eax = eax + 0x7d4u;
        ecx = ecx - 1u;
        goto L_100e129d;
    }
    eax = eax + 0x7d4u;
    if ((uint16_t)edx != 0u) goto L_100e139b;
    wr16(arg1 + 0xcu, 1u);
    return (eax & 0xffffff00u) | 1u;
L_100e12cd: ;
    if (loc_4 <= rd32(esi) + 0x1eu) goto L_100e1290;
    wr16(edi, 0u);
    wr16(edi + 2u, 2u);
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e12ee: ;
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        t18 = rd32(esi + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall_cdecl(g, eax, t18, 2, t18, 0u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e12ee;
    }
    wr16(arg1 + 0xcu, 2u);
    return (eax & 0xffffff00u) | 1u;
L_100e1344: ;
    esi = arg1 + 0x1f20u;
    edi = 2u;
L_100e134f: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        t37 = rd32(esi + 4u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, eax, ecx, 2, t37, 0u);
        t38 = g->ecx;
        ecx = t38;
    }
    wr8(esi - 0x10u, 0u);
    wr32(esi - 0x14u, 0u);
    wr32(esi, 0u);
    wr32(esi + 4u, 0u);
    wr16(esi + 8u, 0u);
    wr8(esi - 0xfu, 0u);
    wr16(esi - 0xeu, 0u);
    wr16(esi + 0x79cu, 0u);
    wr16(esi + 0x79eu, 2u);
    wr32(esi + 0x7a0u, 0u);
    if (edi != 1u)
    {
        esi = esi + 0x7d4u;
        edi = edi - 1u;
        goto L_100e134f;
    }
    wr16(arg1 + 0xcu, 2u);
    eax = 2u;
L_100e139b: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0d50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
