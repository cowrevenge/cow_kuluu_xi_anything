/* f_0x10198800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10198800(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10198b63;
    ebx = rd32(rd32(self + 8u) + 0x88u);
    edi = rd32(self + 8u);
    t1 = rd32(COW_IMG(0x10198bb0u) + rd8(COW_IMG(0x10198bdcu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1019882cu: goto L_1019882c;
    case 0x1019888du: goto L_1019888d;
    case 0x101988b0u: goto L_101988b0;
    case 0x101988feu: ecx = rd8(COW_IMG(0x10198bdcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_101988fe;
    case 0x10198937u: goto L_10198937;
    case 0x10198976u: ecx = rd8(COW_IMG(0x10198bdcu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10198976;
    case 0x101989afu: goto L_101989af;
    case 0x10198a3au: goto L_10198a3a;
    case 0x10198af5u: goto L_10198af5;
    case 0x10198b4du: goto L_10198b4d;
    case 0x10198b63u: goto L_10198b63;
    default: rt_fatal(g, COW_IMG(0x10198825u), "switch");
    }
    return 0;
L_1019882c: ;
    if ((int32_t)((uint32_t)(int16_t)arg2 + rd32(self + 0x28u) - 1u) < (int32_t)rd32(self + 0x2cu))
    {
        eax = (uint32_t)(int16_t)arg2 + rd32(self + 0x28u);
        ecx = (uint32_t)(int16_t)arg2 + rd32(self + 0x28u) - 1u;
        t70 = rd32(eax * 0x10u + rd32(self + 0x18u) - 0x10u);
        g->eax = t70;
        g->esp = sp0 - 0xcu;
        t71 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t70);
        if (t71 != 0u)
        {
            t72 = (uint32_t)(int16_t)arg2 + rd32(self + 0x28u) - 1u;
            wr32(self + 0x1cu, t72);
            t73 = rd32(COW_IMG(0x10662738u));
            wr32(t73 + 0x20u, t72);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a780u), 1u, 0u);
        }
    }
L_10198b63: ;
    if (rd32(self + 0x1cu) == rd32(self + 0x28u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u)
    {
        eax = rd32(self + 0x1cu);
        edx = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 0x1cu);
        edx = rd32(self + 8u);
        edi = rd32(self + 0x28u) + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        if ((int32_t)edi >= 0)
        {
            if ((int32_t)edi < (int32_t)rd32(self + 0x2cu))
            {
                t74 = rd32(edi * 0x10u + rd32(self + 0x18u));
                g->eax = rd32(self + 0x18u);
                g->edx = edi << 4u;
                t75 = rd32(self + 0x18u);
                g->esp = sp0 - 0xcu;
                t76 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t74);
                t77 = g->edx;
                if (t76 == 0u)
                {
                    eax = t76;
                    edx = t77;
                }
                else
                {
                    eax = t76;
                    wr32(self + 0x1cu, edi);
                    t78 = rd32(COW_IMG(0x10662734u));
                    wr32(t78 + 0x24u, edi);
                    edx = t78;
                }
            }
        }
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1019888d: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a76cu));
    t69 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a758u));
    goto L_10198b63;
L_101988b0: ;
    if ((uint16_t)arg2 == 1u) goto L_101988c8;
    if ((int16_t)arg2 <= (int32_t)rd32(self + 0x2cu))
    {
        eax = (uint32_t)(int16_t)arg2;
        ecx = rd32(self + 0x2cu);
        edx = in_edx;
        goto L_10198b5e;
    }
L_101988c8: ;
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) >= (int32_t)rd32(self + 0x2cu))
    {
        eax = rd32(self + 0x28u);
        edx = rd32(self + 0x2cu);
    }
    else
    {
        eax = rd32(self + 0x28u);
        ecx = rd32(self + 0x28u) + 0xbu;
        edx = rd32(self + 0x2cu);
        wr32(self + 0x28u, eax + 1u);
        wr32(ebx + 0x14u, eax + 1u);
        g->eax = eax + 1u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t62 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t63 = g->edx;
        eax = t62;
        edx = t63;
    }
    t64 = (edx & 0xffff0000u) | rd16(self + 0x2cu);
    t65 = rd32(self + 8u);
    g->edx = t64;
    g->esp = sp0 - 0xcu;
    t66 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t65, g->edx, 0, 2, t64, 0u);
    t67 = g->edx;
    g->edi = t65;
    cow_thiscall(g, COW_IMG(0x101186a0u), t65, 0);
    goto L_10198b63;
L_101988fe: ;
    if ((uint16_t)arg2 != 0xbu)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10198b5e;
    }
    if ((int32_t)rd32(self + 0x28u) <= 0)
    {
        eax = rd32(self + 0x28u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x28u);
        wr32(self + 0x28u, eax - 1u);
        wr32(ebx + 0x14u, eax - 1u);
        g->eax = eax - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t57 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t58 = g->edx;
        eax = t57;
        edx = t58;
    }
    t59 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t60 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t59, g->edx, 0, 2, 1u, 0u);
    t61 = g->edx;
    g->edi = t59;
    cow_thiscall(g, COW_IMG(0x101186a0u), t59, 0);
    goto L_10198b63;
L_10198937: ;
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) < (int32_t)rd32(self + 0x2cu))
    {
        eax = rd32(self + 0x28u);
        ecx = rd32(self + 0x28u) + 0xbu;
        edx = rd32(self + 0x2cu);
        wr32(self + 0x28u, eax + 1u);
        g->eax = eax + 1u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t50 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t51 = g->edx;
        t52 = rd32(self + 8u);
        t53 = (t51 & 0xffff0000u) | (uint16_t)(rd16(t52 + 0x4cu) - 1u);
        g->edx = t53;
        t54 = cow_call_regs(g, COW_IMG(0x10118db0u), t50, t52, g->edx, 0, 2, t53, 0u);
        t55 = g->edx;
        g->edi = t52;
        cow_thiscall(g, COW_IMG(0x101186a0u), t52, 0);
        t56 = rd32(self + 0x28u);
        wr32(ebx + 0x14u, t56);
    }
    goto L_10198b63;
L_10198976: ;
    if ((int32_t)rd32(self + 0x28u) > 0)
    {
        eax = rd32(self + 0x28u);
        wr32(self + 0x28u, eax - 1u);
        g->eax = eax - 1u;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t42 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t43 = g->ecx;
        t44 = g->edx;
        t45 = (t43 & 0xffff0000u) | (uint16_t)(rd16(rd32(self + 8u) + 0x4cu) + 1u);
        t46 = rd32(self + 8u);
        g->edx = t44;
        t47 = cow_call_regs(g, COW_IMG(0x10118db0u), t42, t46, g->edx, 0, 2, t45, 0u);
        t48 = g->edx;
        g->edi = t46;
        cow_thiscall(g, COW_IMG(0x101186a0u), t46, 0);
        t49 = rd32(self + 0x28u);
        wr32(ebx + 0x14u, t49);
    }
    goto L_10198b63;
L_101989af: ;
    if ((int32_t)(rd32(self + 0x28u) - 0xbu) < 0)
    {
        eax = rd32(self + 0x28u) - 0xbu;
        ecx = rd32(self + 0x28u);
        goto L_101989eb;
    }
    eax = rd32(self + 0x28u) - 0xbu;
    wr32(self + 0x28u, eax);
    if ((uint16_t)arg2 == 0xbu)
    {
        ecx = edi;
        loc_14 = 1u;
    }
    else
    {
        ecx = edi;
        loc_14 = arg2;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_call_regs(g, COW_IMG(0x10118db0u), arg2, ecx, g->edx, 0, 2, loc_14, 0u);
    t26 = g->edx;
    g->edi = edi;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t28 = g->ecx;
    t29 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t28, 0);
    t30 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t30);
    goto L_10198b63;
L_101989eb: ;
    if ((int32_t)ecx <= 0) goto L_10198a19;
    wr32(self + 0x28u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, arg2, 0u);
    t32 = g->edx;
    g->edi = edi;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t34 = g->ecx;
    t35 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t34, 0);
    t36 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t36);
    goto L_10198b63;
L_10198a19: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, 1u, 0u);
    t38 = g->edx;
    g->edi = edi;
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint16_t)arg2 != 1u)
    {
        eax = t39;
        ecx = t40;
        edx = t41;
        goto L_10198b5e;
    }
    goto L_10198b63;
L_10198a3a: ;
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) >= (int32_t)(rd32(self + 0x2cu) - 0xcu))
    {
        eax = rd32(self + 0x2cu);
        edx = rd32(self + 0x28u);
        goto L_10198a74;
    }
    ecx = rd32(self + 0x28u) + 0xbu;
    edx = rd32(self + 0x28u);
    wr32(self + 0x28u, ecx);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), arg2, edi, g->edx, 0, 2, arg2, 0u);
    t7 = g->edx;
    g->edi = edi;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t9 = g->ecx;
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t9, 0);
    t11 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t11);
    goto L_10198b63;
L_10198a74: ;
    if ((int32_t)edx >= (int32_t)(eax - 0xbu)) goto L_10198aa3;
    ecx = eax - 0xbu;
    wr32(self + 0x28u, ecx);
    g->edx = arg2;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, arg2, 0u);
    t13 = g->edx;
    g->edi = edi;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t15 = g->ecx;
    t16 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b30u), t15, 0);
    t17 = rd32(self + 0x28u);
    wr32(ebx + 0x14u, t17);
    goto L_10198b63;
L_10198aa3: ;
    if ((int32_t)eax < 11)
    {
        ecx = eax;
    }
    else
    {
        ecx = 0xbu;
    }
    if ((uint32_t)(int16_t)arg2 == ecx) goto L_10198ad8;
    if ((int32_t)eax >= 11)
    {
        eax = 0xbu;
    }
    g->edx = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 0xcu;
    t18 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, eax, 0u);
    t19 = g->edx;
    g->edi = edi;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
L_10198b5e: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    goto L_10198b63;
L_10198ad8: ;
    if ((int32_t)eax >= 11)
    {
        eax = 0xbu;
    }
    g->edx = (uint32_t)(int16_t)arg2;
    g->esp = sp0 - 0xcu;
    t23 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, eax, 0u);
    t24 = g->edx;
    g->edi = edi;
    cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
    goto L_10198b63;
L_10198af5: ;
    if ((int32_t)rd32(self + 0x28u) >= (int32_t)rd32(ebx + 0x14u))
    {
        eax = rd32(self + 0x28u);
        ecx = (uint32_t)(int16_t)rd16(edi + 0x4cu);
        zf = rd32(self + 0x28u) == rd32(ebx + 0x14u);
        sf = (int32_t)(rd32(self + 0x28u) - rd32(ebx + 0x14u)) < 0;
        of = ((rd32(self + 0x28u) ^ rd32(ebx + 0x14u)) & (rd32(self + 0x28u) ^ rd32(self + 0x28u) - rd32(ebx + 0x14u))) >> 0x1fu;
        ebx = rd32(ebx + 0x14u);
        if (!(zf || sf != of))
        {
            if ((int32_t)(eax + ecx - ebx) <= 11)
            {
                ecx = eax + ecx - ebx;
                eax = eax - ebx;
            }
            else
            {
                eax = eax - ebx;
                ecx = 0xbu;
            }
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, ecx, 0u);
            t5 = g->edx;
            g->edi = edi;
            cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
            wr32(self + 0x28u, ebx);
        }
    }
    else
    {
        eax = rd32(self + 0x28u);
        ecx = (uint32_t)(int16_t)rd16(edi + 0x4cu);
        ebx = rd32(ebx + 0x14u);
        if ((int32_t)(eax + ecx - ebx) >= 1)
        {
            ecx = eax + ecx - ebx;
            eax = eax - ebx;
        }
        else
        {
            eax = eax - ebx;
            ecx = 1u;
        }
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, edi, g->edx, 0, 2, ecx, 0u);
        t3 = g->edx;
        g->edi = edi;
        cow_thiscall(g, COW_IMG(0x101186a0u), edi, 0);
        wr32(self + 0x28u, ebx);
    }
    goto L_10198b63;
L_10198b4d: ;
    if ((int32_t)(rd32(self + 0x28u) + 0xbu) > (int32_t)rd32(self + 0x2cu)) goto L_10198b63;
    eax = rd32(self + 0x28u);
    ecx = rd32(self + 0x28u) + 0xbu;
    edx = rd32(self + 0x2cu);
    if ((int32_t)eax < 0) goto L_10198b63;
    goto L_10198b5e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198800(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
