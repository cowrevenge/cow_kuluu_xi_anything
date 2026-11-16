/* f_0x102a6970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102a6970(Guest* g)
{
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if ((int32_t)(rd32(arg1 + 0x20u) * rd32(arg1 + 0x1cu) * rd32(arg1 + 0x24u)) > 0)
    {
        eax = rd32(arg2 + 8u) >> 3u;
        edx = rd32(arg1 + 0x20u) * rd32(arg1 + 0x1cu) * rd32(arg1 + 0x24u);
        goto L_102a699a;
    }
    eax = rd32(arg2 + 8u) >> 3u;
    return eax & 0xffffff00u;
L_102a699a: ;
    if (rd32(sp0 + 0xcu) == 0u)
    {
        ecx = arg1;
        edi = rd32(sp0 + 0x10u);
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_102a6d4b;
    }
    ebp = rd32(sp0 + 0xcu);
    edi = rd32(sp0 + 0x10u);
    if (rd32(arg1 + 0x28u) == 0u)
    {
        ecx = arg1;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_102a6d4b;
    }
    esi = rd32(arg1 + 0x28u);
    if ((int32_t)eax <= 0)
    {
        ecx = arg1;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_102a6d4b;
    }
    wr32(sp0 - 4u, eax);
    ecx = arg1;
    loc_4 = eax;
    loc_8 = in_ebx;
    loc_c = in_ebp;
    loc_10 = in_esi;
    loc_14 = in_edi;
L_102a69c5: ;
    if (rd8(arg2 + 0x13u) - 1u > 4u)
    {
        edx = arg2;
        goto L_102a6d39;
    }
    eax = rd8(arg2 + 0x13u) - 1u;
    t1 = rd32(COW_IMG(0x102a6f8cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102a69dfu: goto L_102a69df;
    case 0x102a6a50u: goto L_102a6a50;
    case 0x102a6a63u: goto L_102a6a63;
    case 0x102a6a76u: goto L_102a6a76;
    case 0x102a6beeu: goto L_102a6bee;
    default: rt_fatal(g, COW_IMG(0x102a69d8u), "switch");
    }
    return 0;
L_102a69df: ;
    edx = arg2;
    ebx = 0u;
L_102a69e1: ;
    t43 = (eax & 0xffff0000u) | rd16(ebp + ebx * 2u);
    wr32(sp0 + 0xcu, t43);
    g->eax = t43;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t44 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t45 = g->ecx;
    t46 = g->edx;
    if (t44 == 0u)
    {
        ecx = t45;
        edx = t46;
    }
    else
    {
        eax = t44;
        edx = t46;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 2u);
        wr32(sp0 - 0x20u, sp0 + 0xcu);
        g->ecx = sp0 + 0xcu;
        g->edx = edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 + 0xcu, 2u, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t47 = g->ecx;
        t48 = g->edx;
        ecx = t47;
        edx = t48;
    }
    wr8(esi, (uint8_t)(rd8(sp0 + 0xcu) << 3u));
    wr8(esi + 1u, (uint8_t)(rd32(sp0 + 0xcu) >> 5u << 3u));
    t49 = rd16(sp0 + 0xcu);
    wr8(esi + 2u, (uint8_t)(t49 >> 0xau << 3u));
    if ((int32_t)rd32(arg1 + 0x24u) <= 3)
    {
        eax = rd32(arg1 + 0x24u);
        ecx = (ecx & 0xffff0000u) | (uint8_t)(t49 >> 0xau << 3u);
        esi = esi + 3u;
    }
    else
    {
        eax = rd32(arg1 + 0x24u);
        ecx = (ecx & 0xffff0000u) | (uint8_t)(t49 >> 0xau << 3u);
        esi = esi + 3u;
        t50 = rd16(sp0 + 0xcu);
        wr8(esi, (uint8_t)(t50 >> 0xfu << 7u));
        eax = (eax & 0xffff0000u) | t50 >> 0xfu << 7u;
        esi = esi + 1u;
    }
    if ((int32_t)(ebx + 1u) < 4)
    {
        edx = arg1;
        ebx = ebx + 1u;
        goto L_102a69e1;
    }
    edx = arg1;
L_102a6d39: ;
    wr32(sp0 - 4u, loc_4 - 1u);
    if (loc_4 != 1u)
    {
        ebp = ebp + 8u;
        loc_4 = loc_4 - 1u;
        goto L_102a69c5;
    }
    loc_4 = loc_4 - 1u;
L_102a6d4b: ;
    if (rd32(arg1 + 0x24u) != 1u)
    {
        eax = arg1;
        goto L_102a6f6d;
    }
    if (edi == 0u)
    {
        eax = arg1;
        goto L_102a6f6d;
    }
    if (rd32(arg1 + 0x38u) != 0u)
    {
        esi = rd32(arg1 + 0x38u);
        goto L_102a6d7d;
    }
    wr32(sp0 - 0x18u, COW_IMG(0x103be294u));
    g->eax = arg1;
    g->esp = sp0 - 0x10u;
    t51 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be294u), loc_14);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return t51 & 0xffffff00u;
L_102a6a50: ;
    eax = 0u;
L_102a6a52: ;
    t42 = rd8(eax + ebp);
    wr8(esi, (uint8_t)t42);
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t42;
        esi = esi + 1u;
        goto L_102a6a52;
    }
    ecx = (ecx & 0xffffff00u) | t42;
    esi = esi + 1u;
    edx = arg2;
    goto L_102a6d39;
L_102a6a63: ;
    eax = 0u;
    edx = arg2;
L_102a6a65: ;
    t41 = rd8(eax + ebp);
    wr8(esi, (uint8_t)t41);
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t41;
        esi = esi + 1u;
        goto L_102a6a65;
    }
    edx = (edx & 0xffffff00u) | t41;
    esi = esi + 1u;
    goto L_102a6d39;
L_102a6a76: ;
    if ((rd8(arg2 + 0x12u) & 0x3fu) == 1u)
    {
        edx = arg2;
        ebx = 0u;
L_102a6b31: ;
        wr32(sp0 + 0x10u, 0u);
L_102a6b39: ;
        if (rd32(sp0 + 0x10u) != 0u)
        {
            eax = rd8(ebp + ebx) >> 4u;
        }
        else
        {
            eax = rd32(sp0 + 0x10u);
            eax = rd8(ebp + ebx) & 0xfu;
        }
        if (rd32(arg1 + 0x24u) != 1u) goto L_102a6b5f;
        wr8(esi, (uint8_t)eax);
        ecx = arg1;
L_102a6bcc: ;
        esi = esi + 1u;
L_102a6bcd: ;
        t39 = rd32(sp0 + 0x10u) + 1u;
        t40 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t39);
        if ((int32_t)(t40 + 1u) < 2) goto L_102a6b39;
        if ((int32_t)(ebx + 1u) < 8)
        {
            ebx = ebx + 1u;
            goto L_102a6b31;
        }
    }
    else
    {
        eax = (rd8(arg2 + 0x12u) & 0x3fu) - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            ecx = 0u;
L_102a6ae5: ;
            edx = 0u;
L_102a6ae7: ;
            if (edx != 0u)
            {
                eax = rd8(ebp + ecx) >> 4u;
            }
            else
            {
                eax = rd8(ebp + ecx) & 0xfu;
            }
            if (rd32(arg1 + 0x24u) != 1u)
            {
                t30 = rd8(eax * 3u + edi);
                wr8(esi, (uint8_t)t30);
                wr8(esi + 1u, rd8(eax * 3u + edi + 1u));
                eax = (eax * 3u & 0xffffff00u) | rd8(eax * 3u + edi + 2u);
                esi = esi + 2u;
            }
            wr8(esi, (uint8_t)eax);
            if ((int32_t)(edx + 1u) < 2)
            {
                edx = edx + 1u;
                esi = esi + 1u;
                goto L_102a6ae7;
            }
            edx = edx + 1u;
            esi = esi + 1u;
            if ((int32_t)(ecx + 1u) < 8)
            {
                ecx = ecx + 1u;
                goto L_102a6ae5;
            }
            ecx = ecx + 1u;
        }
        else
        {
            eax = eax - 1u;
            if (eax != 1u)
            {
                edx = arg2;
            }
            else
            {
                eax = eax - 1u;
                ecx = 0u;
L_102a6a93: ;
                edx = 0u;
L_102a6a95: ;
                if (edx != 0u)
                {
                    eax = rd8(ebp + ecx) >> 4u;
                }
                else
                {
                    eax = rd8(ebp + ecx) & 0xfu;
                }
                if (rd32(arg1 + 0x24u) != 1u)
                {
                    t28 = rd8(eax * 4u + edi);
                    wr8(esi, (uint8_t)t28);
                    t29 = rd8(eax * 4u + edi + 1u);
                    wr8(esi + 1u, (uint8_t)t29);
                    wr8(esi + 2u, rd8(eax * 4u + edi + 2u));
                    eax = (eax << 2u & 0xffffff00u) | rd8(eax * 4u + edi + 3u);
                    esi = esi + 3u;
                }
                wr8(esi, (uint8_t)eax);
                if ((int32_t)(edx + 1u) < 2)
                {
                    edx = edx + 1u;
                    esi = esi + 1u;
                    goto L_102a6a95;
                }
                edx = edx + 1u;
                esi = esi + 1u;
                if ((int32_t)(ecx + 1u) < 8)
                {
                    ecx = ecx + 1u;
                    goto L_102a6a93;
                }
                ecx = ecx + 1u;
            }
        }
    }
    goto L_102a6d39;
L_102a6b5f: ;
    t31 = (arg1 & 0xffff0000u) | rd16(edi + (eax & 3u) * 2u + (uint32_t)((int32_t)eax >> 2u) * 8u);
    wr32(sp0 + 0xcu, t31);
    g->eax = (eax & 3u) + (uint32_t)((int32_t)eax >> 2u) * 4u;
    g->ecx = t31;
    g->edx = (uint32_t)((int32_t)eax >> 2u);
    g->esp = sp0 - 0x14u;
    t32 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 == 0u)
    {
        eax = t32;
        edx = t34;
    }
    else
    {
        eax = t32;
        ecx = t33;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 2u);
        wr32(sp0 - 0x20u, sp0 + 0xcu);
        g->eax = eax;
        g->edx = sp0 + 0xcu;
        g->esp = sp0;
        t35 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 + 0xcu, 2u, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t36 = g->edx;
        eax = t35;
        edx = t36;
    }
    wr8(esi, (uint8_t)(rd8(sp0 + 0xcu) << 3u));
    wr8(esi + 1u, (uint8_t)(rd32(sp0 + 0xcu) >> 5u << 3u));
    t37 = rd16(sp0 + 0xcu);
    wr8(esi + 2u, (uint8_t)(t37 >> 0xau << 3u));
    if ((int32_t)rd32(arg1 + 0x24u) <= 3)
    {
        ecx = rd32(arg1 + 0x24u);
        edx = (edx & 0xffff0000u) | (uint8_t)(t37 >> 0xau << 3u);
        esi = esi + 3u;
        goto L_102a6bcd;
    }
    ecx = rd32(arg1 + 0x24u);
    edx = (edx & 0xffff0000u) | (uint8_t)(t37 >> 0xau << 3u);
    esi = esi + 3u;
    t38 = rd16(sp0 + 0xcu);
    wr8(esi, (uint8_t)(t38 >> 0xfu << 7u));
    ecx = (ecx & 0xffff0000u) | t38 >> 0xfu << 7u;
    goto L_102a6bcc;
L_102a6bee: ;
    if ((rd8(arg2 + 0x12u) & 0x3fu) == 1u)
    {
        edx = arg2;
        ebx = 0u;
L_102a6c9a: ;
        if (rd32(arg1 + 0x24u) != 1u) goto L_102a6cae;
        t16 = rd8(ebp + ebx);
        wr8(esi, (uint8_t)t16);
        ecx = arg1;
        edx = (edx & 0xffffff00u) | t16;
L_102a6d2e: ;
        esi = esi + 1u;
L_102a6d2f: ;
        if ((int32_t)(ebx + 1u) < 8)
        {
            ebx = ebx + 1u;
            goto L_102a6c9a;
        }
    }
    else
    {
        eax = (rd8(arg2 + 0x12u) & 0x3fu) - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            edx = 0u;
L_102a6c57: ;
            if (rd32(arg1 + 0x24u) != 1u)
            {
                t10 = rd8(ebp + edx);
                wr32(sp0 - 0x18u, t10);
                wr32(sp0 - 0x1cu, arg2);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t11 = cow_thiscall_cdecl(g, COW_IMG(0x102a5ff0u), t10, 2, arg2, t10);
                t12 = g->ecx;
                t13 = g->edx;
                t14 = rd8(edi + t11 * 3u);
                wr8(esi, (uint8_t)t14);
                t15 = rd8(edi + t11 * 3u + 1u);
                wr8(esi + 1u, (uint8_t)t15);
                eax = (t11 * 3u & 0xffffff00u) | rd8(edi + t11 * 3u + 2u);
                ecx = ((t12 | t14) & 0xffffff00u) | t15;
                edx = t13;
                esi = esi + 2u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(ebp + edx);
                ecx = arg1;
            }
            wr8(esi, (uint8_t)eax);
            if ((int32_t)(edx + 1u) < 8)
            {
                edx = edx + 1u;
                esi = esi + 1u;
                goto L_102a6c57;
            }
            edx = edx + 1u;
            esi = esi + 1u;
        }
        else
        {
            eax = eax - 1u;
            if (eax != 1u)
            {
                edx = arg2;
            }
            else
            {
                edx = 0u;
L_102a6c0b: ;
                if (rd32(arg1 + 0x24u) != 1u)
                {
                    t3 = rd8(ebp + edx);
                    wr32(sp0 - 0x18u, t3);
                    wr32(sp0 - 0x1cu, arg2);
                    g->eax = t3;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t4 = cow_thiscall_cdecl(g, COW_IMG(0x102a5ff0u), ecx, 2, arg2, t3);
                    t5 = g->ecx;
                    t6 = g->edx;
                    t7 = rd8(edi + t4 * 4u);
                    wr8(esi, (uint8_t)t7);
                    t8 = rd8(edi + t4 * 4u + 1u);
                    wr8(esi + 1u, (uint8_t)t8);
                    t9 = rd8(edi + t4 * 4u + 2u);
                    wr8(esi + 2u, (uint8_t)t9);
                    wr8(esi + 3u, rd8(edi + t4 * 4u + 3u));
                    ecx = ((t5 | t7 | t8) & 0xffffff00u) | t9;
                    edx = t6;
                    esi = esi + 3u;
                }
                else
                {
                    t2 = rd8(ebp + edx);
                    wr8(esi, (uint8_t)t2);
                    ecx = (ecx & 0xffffff00u) | t2;
                }
                if ((int32_t)(edx + 1u) < 8)
                {
                    edx = edx + 1u;
                    esi = esi + 1u;
                    goto L_102a6c0b;
                }
                edx = edx + 1u;
                esi = esi + 1u;
            }
        }
    }
    goto L_102a6d39;
L_102a6cae: ;
    t17 = rd8(ebp + ebx);
    wr32(sp0 - 0x18u, t17);
    wr32(sp0 - 0x1cu, arg2);
    g->eax = t17;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x102a5ff0u), arg2, 2, arg2, t17);
    t19 = g->ecx;
    t20 = (t19 & 0xffff0000u) | rd16(edi + (t18 & 3u) * 2u + (uint32_t)((int32_t)t18 >> 2u) * 8u);
    wr32(sp0 + 0xcu, t20);
    g->eax = (t18 & 3u) + (uint32_t)((int32_t)t18 >> 2u) * 4u;
    g->ecx = t20;
    g->edx = (uint32_t)((int32_t)t18 >> 2u);
    t21 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        edx = t23;
    }
    else
    {
        eax = t21;
        ecx = t22;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, 2u);
        wr32(sp0 - 0x20u, sp0 + 0xcu);
        g->eax = eax;
        g->edx = sp0 + 0xcu;
        g->esp = sp0;
        t24 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 + 0xcu, 2u, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    wr8(esi, (uint8_t)(rd8(sp0 + 0xcu) << 3u));
    wr8(esi + 1u, (uint8_t)(rd32(sp0 + 0xcu) >> 5u << 3u));
    t26 = rd16(sp0 + 0xcu);
    wr8(esi + 2u, (uint8_t)(t26 >> 0xau << 3u));
    if ((int32_t)rd32(arg1 + 0x24u) <= 3)
    {
        ecx = rd32(arg1 + 0x24u);
        edx = (edx & 0xffff0000u) | (uint8_t)(t26 >> 0xau << 3u);
        esi = esi + 3u;
        goto L_102a6d2f;
    }
    ecx = rd32(arg1 + 0x24u);
    edx = (edx & 0xffff0000u) | (uint8_t)(t26 >> 0xau << 3u);
    esi = esi + 3u;
    t27 = rd16(sp0 + 0xcu);
    wr8(esi, (uint8_t)(t27 >> 0xfu << 7u));
    ecx = (ecx & 0xffff0000u) | t27 >> 0xfu << 7u;
    goto L_102a6d2e;
L_102a6d7d: ;
    if (rd8(arg2 + 0x13u) != 4u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(arg2 + 0x13u);
        goto L_102a6d8f;
    }
    eax = (arg1 & 0xffffff00u) | rd8(arg2 + 0x13u);
    ebp = 0x10u;
L_102a6d9c: ;
    if ((rd8(arg2 + 0x12u) & 0x3fu) == 1u)
    {
        eax = (rd8(arg2 + 0x12u) & 0x3fu) - 1u;
        if ((int32_t)ebp <= 0) goto L_102a6efd;
        ebx = 0u;
L_102a6e78: ;
        wr32(sp0 - 0x18u, ebx);
        wr32(sp0 - 0x1cu, arg2);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t65 = cow_thiscall_cdecl(g, COW_IMG(0x102a5ff0u), arg2, 2, arg2, ebx);
        t66 = g->ecx;
        t67 = (t66 & 0xffff0000u) | rd16(edi + (t65 & 3u) * 2u + (uint32_t)((int32_t)t65 >> 2u) * 8u);
        wr32(sp0 + 0xcu, t67);
        g->eax = (t65 & 3u) + (uint32_t)((int32_t)t65 >> 2u) * 4u;
        g->ecx = t67;
        g->edx = (uint32_t)((int32_t)t65 >> 2u);
        t68 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
        t69 = g->ecx;
        t70 = g->edx;
        if (t68 == 0u)
        {
            eax = t68;
            edx = t70;
        }
        else
        {
            eax = t68;
            ecx = t69;
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, 2u);
            wr32(sp0 - 0x20u, sp0 + 0xcu);
            g->eax = eax;
            g->edx = sp0 + 0xcu;
            g->esp = sp0;
            t71 = cow_cdecl(g, COW_IMG(0x10292150u), 8, sp0 + 0xcu, 2u, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
            t72 = g->edx;
            eax = t71;
            edx = t72;
        }
        wr8(esi, (uint8_t)(rd8(sp0 + 0xcu) << 3u));
        wr8(esi + 1u, (uint8_t)(rd32(sp0 + 0xcu) >> 5u << 3u));
        t73 = rd16(sp0 + 0xcu);
        wr8(esi + 2u, (uint8_t)(t73 >> 0xau << 3u));
        if (rd32(arg1 + 0x30u) != 4u)
        {
            edx = (edx & 0xffff0000u) | (uint8_t)(t73 >> 0xau << 3u);
            esi = esi + 3u;
        }
        else
        {
            ecx = rd32(arg1 + 0x30u);
            edx = (edx & 0xffff0000u) | (uint8_t)(t73 >> 0xau << 3u);
            esi = esi + 3u;
            wr8(esi, rd16(sp0 + 0xcu) >> 0xfu << 7u);
            esi = esi + 1u;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)ebp)
        {
            eax = arg1;
            ebx = ebx + 1u;
            goto L_102a6e78;
        }
        eax = arg1;
L_102a6efd: ;
        if ((int32_t)ebp < 256)
        {
            ecx = 0x100u - ebp;
L_102a6f15: ;
            wr8(esi, 0xffu);
            wr8(esi + 1u, 0u);
            wr8(esi + 2u, 0xffu);
            if (rd32(arg1 + 0x30u) != 4u)
            {
                esi = esi + 3u;
            }
            else
            {
                esi = esi + 3u;
                wr8(esi, 0x80u);
                esi = esi + 1u;
            }
            if (ecx != 1u)
            {
                ecx = ecx - 1u;
                goto L_102a6f15;
            }
            eax = arg1;
        }
    }
    else
    {
        eax = (rd8(arg2 + 0x12u) & 0x3fu) - 1u;
        if (eax == 1u)
        {
            eax = eax - 1u;
            if ((int32_t)ebp > 0)
            {
                ecx = arg2;
                edx = 0u;
L_102a6e20: ;
                wr32(sp0 - 0x18u, edx);
                wr32(sp0 - 0x1cu, arg2);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t59 = cow_thiscall_cdecl(g, COW_IMG(0x102a5ff0u), ecx, 2, arg2, edx);
                t60 = g->ecx;
                t61 = g->edx;
                t62 = rd8(edi + t59 * 3u);
                wr8(esi, (uint8_t)t62);
                t63 = rd8(edi + t59 * 3u + 1u);
                wr8(esi + 1u, (uint8_t)t63);
                t64 = rd8(edi + t59 * 3u + 2u);
                wr8(esi + 2u, (uint8_t)t64);
                if ((int32_t)(t61 + 1u) < (int32_t)ebp)
                {
                    eax = (t59 * 3u & 0xffffff00u) | t64;
                    ecx = ((t60 | t62) & 0xffffff00u) | t63;
                    edx = t61 + 1u;
                    esi = esi + 3u;
                    goto L_102a6e20;
                }
                eax = (t59 * 3u & 0xffffff00u) | t64;
                esi = esi + 3u;
            }
            if ((int32_t)ebp < 256)
            {
                eax = 0x100u - ebp;
L_102a6e5a: ;
                wr8(esi, 0xffu);
                wr8(esi + 1u, 0u);
                wr8(esi + 2u, 0xffu);
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    esi = esi + 3u;
                    goto L_102a6e5a;
                }
                eax = eax - 1u;
            }
        }
        else
        {
            eax = eax - 1u;
            if (eax != 1u)
            {
                eax = eax - 1u;
            }
            else
            {
                eax = eax - 1u;
                if ((int32_t)ebp > 0)
                {
                    ecx = arg2;
                    edx = 0u;
L_102a6dbd: ;
                    wr32(sp0 - 0x18u, edx);
                    wr32(sp0 - 0x1cu, arg2);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t52 = cow_thiscall_cdecl(g, COW_IMG(0x102a5ff0u), ecx, 2, arg2, edx);
                    t53 = g->ecx;
                    t54 = g->edx;
                    t55 = rd8(edi + t52 * 4u);
                    wr8(esi, (uint8_t)t55);
                    t56 = rd8(edi + t52 * 4u + 1u);
                    wr8(esi + 1u, (uint8_t)t56);
                    t57 = rd8(edi + t52 * 4u + 2u);
                    wr8(esi + 2u, (uint8_t)t57);
                    t58 = rd8(edi + t52 * 4u + 3u);
                    wr8(esi + 3u, (uint8_t)t58);
                    if ((int32_t)(t54 + 1u) < (int32_t)ebp)
                    {
                        eax = (t52 << 2u & 0xffffff00u) | t58;
                        ecx = ((t53 | t55 | t56) & 0xffffff00u) | t57;
                        edx = t54 + 1u;
                        esi = esi + 4u;
                        goto L_102a6dbd;
                    }
                    eax = (t52 << 2u & 0xffffff00u) | t58;
                    esi = esi + 4u;
                }
                if ((int32_t)ebp < 256)
                {
                    eax = 0x100u - ebp;
L_102a6dfe: ;
                    wr8(esi, 0xffu);
                    wr8(esi + 1u, 0u);
                    wr8(esi + 2u, 0xffu);
                    wr8(esi + 3u, 0x80u);
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        esi = esi + 4u;
                        goto L_102a6dfe;
                    }
                    eax = eax - 1u;
                }
            }
        }
    }
    if (rd32(arg1 + 0x30u) == 4u)
    {
        ecx = 0u;
L_102a6f3b: ;
        if ((int32_t)(rd8(ecx + rd32(arg1 + 0x38u) + 3u) * 2u - 1u) <= 255)
        {
            eax = rd8(ecx + rd32(arg1 + 0x38u) + 3u) * 2u - 1u;
            edx = ecx + rd32(arg1 + 0x38u) + 3u;
            if ((int32_t)eax < 0)
            {
                eax = 0u;
            }
        }
        else
        {
            edx = ecx + rd32(arg1 + 0x38u) + 3u;
            eax = 0xffu;
        }
        wr8(edx, (uint8_t)eax);
        if ((int32_t)(ecx + 4u) < 1024)
        {
            ecx = ecx + 4u;
            goto L_102a6f3b;
        }
    }
L_102a6f6d: ;
    g->ebx = loc_8;
    g->esi = loc_10;
    g->edi = loc_14;
    g->ebp = loc_c;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_102a6d8f: ;
    if ((uint8_t)eax != 5u) goto L_102a6f75;
    ebp = 0x100u;
    goto L_102a6d9c;
L_102a6f75: ;
    wr32(sp0 - 0x18u, COW_IMG(0x103be260u));
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t74 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be260u), loc_14);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return t74 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a6970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a6970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
