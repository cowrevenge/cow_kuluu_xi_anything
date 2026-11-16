/* f_0x10123a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_10123a70(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x104e1c3cu)) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104e1c3cu));
        goto L_10123a89;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104e1c3cu));
    if (arg3 != 4u)
    {
        edx = in_edx;
        goto L_10123d89;
    }
L_10123a89: ;
    if (rd32(sp0 + 8u) == 0xffffffffu)
    {
        edx = in_edx;
        goto L_10123d89;
    }
    edi = rd32(sp0 + 8u);
    if (rd16(COW_IMG(0x1036cf60u) + edi * 2u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x1036cf60u) + edi * 2u);
        edx = in_edx;
        goto L_10123d89;
    }
    eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x1036cf60u) + edi * 2u);
    if (((uint16_t)eax & rd32(COW_IMG(0x1036e3a0u))) == 0u)
    {
        edx = rd32(COW_IMG(0x1036e3a0u));
        goto L_10123d89;
    }
    edx = rd32(COW_IMG(0x1036e3a0u));
    if ((eax & 0x41u) == 0u) goto L_10123ad8;
    if (rd32(COW_IMG(0x10662d40u)) == 0u) goto L_10123ad8;
    ecx = rd32(COW_IMG(0x10662d40u));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10123d89;
    }
    edx = t2;
L_10123ad8: ;
    t3 = rd32(sp0 + 0x10u);
    wr8(sp0 + 8u, 0u);
    if (t3 == 0xffffffffu)
    {
        ecx = t3;
        goto L_10123af9;
    }
    ecx = t3;
    if (rd32(COW_IMG(0x1036db18u) + ecx * 4u + edi * 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x1036db18u) + ecx * 4u + edi * 8u);
        edx = ecx + edi * 2u;
        goto L_10123b0e;
    }
    eax = rd32(COW_IMG(0x1036db18u) + ecx * 4u + edi * 8u);
    edx = ecx + edi * 2u;
    zf = ecx == 1u;
L_10123b02: ;
    if (!zf)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall_cdecl(g, eax, ecx, 1, arg3);
        t5 = g->edx;
        wr8(sp0 + 8u, (uint8_t)t4);
        eax = t4;
        edx = t5;
    }
L_10123b0e: ;
    wr32(sp0 + 0x10u, 0u);
    ebx = in_ebx;
    loc_4 = COW_IMG(0x1036da22u);
L_10123b1f: ;
    if (rd8(sp0 + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 8u);
        goto L_10123cbe;
    }
    if (rd16(COW_IMG(0x1036d6b0u) + edi * 6u + rd32(sp0 + 0x10u) * 2u) == 0u)
    {
        edx = edi * 3u + rd32(sp0 + 0x10u);
    }
    else
    {
        eax = (rd32(sp0 + 0x10u) & 0xffff0000u) | rd16(COW_IMG(0x1036d6b0u) + edi * 6u + rd32(sp0 + 0x10u) * 2u);
        ecx = edi * 2u + rd32(sp0 + 0x10u);
        edx = edi * 3u + rd32(sp0 + 0x10u);
        esi = COW_IMG(0x1036d6b0u) + edi * 6u + rd32(sp0 + 0x10u) * 2u;
        if ((eax >> 8u & 0x40u) == 0u)
        {
            ebx = (ebx & 0xffffff00u) | 1u;
        }
        else
        {
            ebx = (ebx & 0xffffff00u) | 1u;
            if (rd32(COW_IMG(0x10662d40u)) == 0u)
            {
                ecx = rd32(COW_IMG(0x10662d40u));
                ebx = ebx & 0xffffff00u;
                goto L_10123b6a;
            }
            ecx = rd32(COW_IMG(0x10662d40u));
            ebx = ebx & 0xffffff00u;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t6 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
            t7 = g->ecx;
            t8 = g->edx;
            if ((uint8_t)t6 != 0u)
            {
                eax = t6;
                ecx = t7;
                edx = t8;
                goto L_10123b6c;
            }
            eax = t6;
            ecx = t7;
            edx = t8;
L_10123b6a: ;
            ebx = (ebx & 0xffffff00u) | 1u;
        }
L_10123b6c: ;
        if ((rd8(esi + 1u) & 0x80u) != 0u)
        {
            if ((uint8_t)ebx != 0u)
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_stdcall(g, COW_IMG(0x10123dc0u), 0);
                t10 = g->ecx;
                t11 = g->edx;
                if ((uint8_t)t9 != 0u)
                {
                    eax = t9;
                    ecx = t10;
                    edx = t11;
                    ebx = ebx & 0xffffff00u;
                }
                else
                {
                    ecx = t10;
                    edx = t11;
                    ebx = ebx & 0xffffff00u;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t12 = cow_stdcall(g, COW_IMG(0x10123df0u), 0);
                    t13 = g->ecx;
                    t14 = g->edx;
                    if ((uint8_t)t12 != 0u)
                    {
                        eax = t12;
                        ecx = t13;
                        edx = t14;
                    }
                    else
                    {
                        eax = t12;
                        ecx = t13;
                        edx = t14;
                        ebx = (ebx & 0xffffff00u) | 1u;
                    }
                }
            }
        }
        if (rd8(esi + 1u) & 1u)
        {
            if ((uint8_t)ebx != 0u)
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t15 = cow_stdcall(g, COW_IMG(0x10123e20u), 0);
                t16 = g->ecx;
                t17 = g->edx;
                if ((uint8_t)t15 == 0u)
                {
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                    ebx = ebx & 0xffffff00u;
                }
                else
                {
                    eax = t15;
                    ecx = t16;
                    edx = t17;
                    ebx = ebx & 0xffffff00u;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
            }
        }
        if ((rd8(esi + 1u) & 2u) != 0u)
        {
            if ((uint8_t)ebx != 0u)
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t18 = cow_stdcall(g, COW_IMG(0x10123dc0u), 0);
                t19 = g->ecx;
                t20 = g->edx;
                if ((uint8_t)t18 == 0u)
                {
                    eax = t18;
                    ecx = t19;
                    edx = t20;
                    ebx = ebx & 0xffffff00u;
                }
                else
                {
                    eax = t18;
                    ecx = t19;
                    edx = t20;
                    ebx = ebx & 0xffffff00u;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
            }
        }
        if ((rd8(esi + 1u) & 4u) != 0u)
        {
            if ((uint8_t)ebx != 0u)
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t21 = cow_stdcall(g, COW_IMG(0x10123df0u), 0);
                t22 = g->ecx;
                t23 = g->edx;
                if ((uint8_t)t21 == 0u)
                {
                    eax = t21;
                    ecx = t22;
                    edx = t23;
                    ebx = ebx & 0xffffff00u;
                }
                else
                {
                    eax = t21;
                    ecx = t22;
                    edx = t23;
                    ebx = ebx & 0xffffff00u;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
            }
        }
        if ((rd8(esi + 1u) & 8u) != 0u)
        {
            if ((uint8_t)ebx != 0u)
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t24 = cow_stdcall(g, COW_IMG(0x10123dc0u), 0);
                t25 = g->ecx;
                t26 = g->edx;
                if ((uint8_t)t24 == 0u)
                {
                    eax = t24;
                    ecx = t25;
                    edx = t26;
                    ebx = ebx & 0xffffff00u;
                }
                else
                {
                    ecx = t25;
                    edx = t26;
                    ebx = ebx & 0xffffff00u;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t27 = cow_stdcall(g, COW_IMG(0x10123df0u), 0);
                    t28 = g->ecx;
                    t29 = g->edx;
                    if ((uint8_t)t27 == 0u)
                    {
                        eax = t27;
                        ecx = t28;
                        edx = t29;
                    }
                    else
                    {
                        eax = t27;
                        ecx = t28;
                        edx = t29;
                        ebx = (ebx & 0xffffff00u) | 1u;
                    }
                }
            }
        }
        if ((rd8(esi + 1u) & 0x10u) != 0u)
        {
            if ((uint8_t)ebx != 0u)
            {
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t30 = cow_stdcall(g, COW_IMG(0x10123dc0u), 0);
                t31 = g->ecx;
                t32 = g->edx;
                if ((uint8_t)t30 != 0u)
                {
                    eax = t30;
                    ecx = t31;
                    edx = t32;
                    ebx = ebx & 0xffffff00u;
                    goto L_10123c0f;
                }
                ecx = t31;
                edx = t32;
                ebx = ebx & 0xffffff00u;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t33 = cow_stdcall(g, COW_IMG(0x10123df0u), 0);
                t34 = g->ecx;
                t35 = g->edx;
                if ((uint8_t)t33 == 0u)
                {
                    eax = t33;
                    ecx = t34;
                    edx = t35;
                    goto L_10123c1a;
                }
                eax = t33;
                ecx = t34;
                edx = t35;
L_10123c0f: ;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t36 = cow_call_regs(g, COW_IMG(0x10123ee0u), eax, g->ecx, g->edx, 1, 0);
                t37 = g->ecx;
                t38 = g->edx;
                if ((uint8_t)t36 == 0u)
                {
                    eax = t36;
                    ecx = t37;
                    edx = t38;
                }
                else
                {
                    eax = t36;
                    ecx = t37;
                    edx = t38;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
            }
        }
L_10123c1a: ;
        if ((rd8(esi + 1u) & 0x20u) == 0u) goto L_10123ce6;
        if ((uint8_t)ebx == 0u) goto L_10123c35;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t39 = cow_stdcall(g, COW_IMG(0x10123e20u), 0);
        t40 = g->ecx;
        t41 = g->edx;
        if ((uint8_t)t39 == 0u)
        {
            eax = t39;
            ecx = t40;
            edx = t41;
            goto L_10123cee;
        }
        eax = t39;
        ecx = t40;
        edx = t41;
L_10123c35: ;
        if (edi == 0x93u)
        {
            if ((rd16(loc_4) >> 8u & 0x10u) == 0u)
            {
                edx = loc_4;
            }
            else
            {
                eax = (eax & 0xffff0000u) | rd16(loc_4);
                edx = loc_4;
                if ((uint8_t)eax == 0x15u)
                {
                    if (arg3 == 5u)
                    {
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t50 = cow_cdecl(g, COW_IMG(0x10123380u), 2, 0x38u, 5u);
                        t51 = g->ecx;
                        t52 = g->edx;
                        if ((uint8_t)t50 != 0u)
                        {
                            edx = t52;
                            goto L_10123c9a;
                        }
                        ecx = t51;
                        edx = t52;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t53 = cow_cdecl(g, COW_IMG(0x10123380u), 2, 0xb8u, 5u);
                        t54 = g->ecx;
                        t55 = g->edx;
                        if ((uint8_t)t53 != 0u)
                        {
                            edx = t55;
                            goto L_10123c9a;
                        }
                        ecx = t54;
                        edx = t55;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t56 = cow_cdecl(g, COW_IMG(0x10123380u), 2, 0x1du, 5u);
                        t57 = g->ecx;
                        t58 = g->edx;
                        if ((uint8_t)t56 != 0u)
                        {
                            edx = t58;
                            goto L_10123c9a;
                        }
                        ecx = t57;
                        edx = t58;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t59 = cow_cdecl(g, COW_IMG(0x10123380u), 2, 0x9du, 5u);
                        t60 = g->edx;
                        if ((uint8_t)t59 == 0u)
                        {
                            edx = t60;
                            goto L_10123c9f;
                        }
                        edx = t60;
L_10123c9a: ;
                        wr8(sp0 + 8u, 1u);
                    }
                }
            }
        }
    }
L_10123c9f: ;
    t61 = rd32(sp0 + 0x10u) + 1u;
    wr32(sp0 + 0x10u, t61);
    if ((int32_t)(loc_4 + 2u) < (int32_t)COW_IMG(0x1036da28u))
    {
        eax = loc_4 + 2u;
        loc_4 = loc_4 + 2u;
        goto L_10123b1f;
    }
    eax = loc_4 + 2u;
    loc_4 = loc_4 + 2u;
L_10123cbe: ;
    if (rd8(sp0 + 8u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 8u);
        goto L_10123d81;
    }
    if (edi - 0x76u > 0x20u)
    {
        eax = edi - 0x76u;
        goto L_10123d74;
    }
    eax = edi - 0x76u;
    t62 = rd32(COW_IMG(0x10123d90u) + rd8(COW_IMG(0x10123d9cu) + eax) * 4u);
    switch (t62 - RD)
    {
    case 0x10123d5fu: goto L_10123d5f;
    case 0x10123d74u: goto L_10123d74;
    case 0x10123d81u: goto L_10123d81;
    default: rt_fatal(g, COW_IMG(0x10123cdfu), "switch");
    }
    return 0;
L_10123af9: ;
    eax = rd32(COW_IMG(0x1036db18u) + edi * 8u);
    zf = rd32(COW_IMG(0x1036db18u) + edi * 8u) == 0u;
    goto L_10123b02;
L_10123ce6: ;
    if ((uint8_t)ebx == 0u) goto L_10123c35;
L_10123cee: ;
    if (rd8(esi) == 0x1du)
    {
        if (arg3 == 4u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t48 = cow_stdcall(g, COW_IMG(0x10120bb0u), 0);
            t49 = g->edx;
            wr8(sp0 + 8u, (uint8_t)t48);
            edx = t49;
        }
    }
    else
    {
        eax = rd8(esi);
        if (eax == 0x2au)
        {
            if (arg3 == 4u)
            {
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t46 = cow_stdcall(g, COW_IMG(0x10120be0u), 0);
                t47 = g->edx;
                wr8(sp0 + 8u, (uint8_t)t46);
                edx = t47;
            }
        }
        else
        {
            if (eax == 0x38u)
            {
                if (arg3 == 4u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t44 = cow_stdcall(g, COW_IMG(0x10120b80u), 0);
                    t45 = g->edx;
                    wr8(sp0 + 8u, (uint8_t)t44);
                    edx = t45;
                }
            }
            else
            {
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t42 = cow_cdecl(g, COW_IMG(0x10123380u), 2, eax, arg3);
                t43 = g->edx;
                wr8(sp0 + 8u, (uint8_t)t42);
                edx = t43;
            }
        }
    }
    goto L_10123c9f;
L_10123d5f: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t63 = cow_call_regs(g, COW_IMG(0x10125f70u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 1, 1u);
    t64 = g->edx;
    g->edx = t64;
    return (t63 & 0xffffff00u) | rd8(sp0 + 8u);
L_10123d74: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t65 = cow_call_regs(g, COW_IMG(0x10125f70u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 1, 0u);
    t66 = g->edx;
    eax = t65;
    edx = t66;
L_10123d81: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | rd8(sp0 + 8u);
L_10123d89: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10123a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
