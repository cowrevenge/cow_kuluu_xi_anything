/* f_0x101ca6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101ca6c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q22;
    int64_t q40;
    int64_t q7;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 3u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        loc_4 = t1;
        goto L_101ca6e2;
    }
    loc_4 = t1;
    return (uint32_t)(int16_t)arg1;
L_101ca6e2: ;
    if (arg5 & 1u)
    {
        if (rd32(rd32(eax)) != 0u)
        {
            ecx = rd32(rd32(eax));
            g->edx = (uint32_t)(int16_t)arg2;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
            t3 = g->edx;
            edx = t3;
        }
    }
    if ((rd8(arg3) & 0x40u) == 0u)
    {
        esi = arg1;
    }
    else
    {
        if ((rd32(arg3 + 0x30u) >> 8u & 0x40u) != 0u)
        {
            esi = arg1;
        }
        else
        {
            eax = rd32(arg3 + 0x30u);
            if (!(arg5 & 1u))
            {
                esi = arg1;
            }
            else
            {
                if (rd8(arg3 + 0x20u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x20u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x20u);
                    if ((uint8_t)eax < 0x17u)
                    {
                        if (rd32(rd32(loc_4) + (uint8_t)eax * 4u) == 0u)
                        {
                            edx = rd32(loc_4);
                        }
                        else
                        {
                            eax = rd32(rd32(loc_4) + (uint8_t)eax * 4u);
                            t4 = (uint32_t)(int16_t)arg2 + 1u;
                            t5 = (uint32_t)(int16_t)arg1 + 4u;
                            g->edx = t5;
                            g->esp = sp0 - 0x14u;
                            cow_thiscall(g, COW_IMG(0x1011fc80u), eax, 8, t5, t4, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                            t6 = g->edx;
                            edx = t6;
                        }
                        q7 = (int64_t)cow_muls(0x66666667u, rd8(arg3 + 0x22u));
                        t8 = (uint32_t)((int32_t)cow_qhi(q7) >> 2u);
                        t9 = cow_divs(g, t8 + (t8 >> 0x1fu), 0xau);
                        t10 = cow_mods(g, t8 + (t8 >> 0x1fu), 0xau);
                        if (rd32(t10 * 4u + rd32(loc_4) + 0x78u) != 0u)
                        {
                            ecx = rd32(t10 * 4u + rd32(loc_4) + 0x78u);
                            t11 = (uint32_t)(int16_t)arg2 + 1u;
                            t12 = (uint32_t)(int16_t)arg1 + 0x1bu;
                            g->esp = sp0 - 0x14u;
                            cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t12, t11, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                        }
                        t13 = cow_divs(g, rd8(arg3 + 0x22u), 0xau);
                        t14 = cow_mods(g, rd8(arg3 + 0x22u), 0xau);
                        if (rd32(t14 * 4u + rd32(loc_4) + 0x78u) == 0u)
                        {
                            eax = loc_4;
                            edx = t14;
                        }
                        else
                        {
                            ecx = rd32(t14 * 4u + rd32(loc_4) + 0x78u);
                            t15 = (uint32_t)(int16_t)arg2 + 1u;
                            t16 = (uint32_t)(int16_t)arg1 + 0x22u;
                            g->eax = t16;
                            g->edx = t15;
                            g->esp = sp0 - 0x14u;
                            t17 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t16, t15, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                            t18 = g->edx;
                            eax = t17;
                            edx = t18;
                        }
                    }
                }
                if (rd8(arg3 + 0x21u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x21u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x21u);
                    if ((uint8_t)eax < 0x17u)
                    {
                        if (rd32(rd32(loc_4) + (uint8_t)eax * 4u) == 0u)
                        {
                            edx = rd32(loc_4);
                        }
                        else
                        {
                            eax = rd32(rd32(loc_4) + (uint8_t)eax * 4u);
                            t19 = (uint32_t)(int16_t)arg2 + 1u;
                            t20 = (uint32_t)(int16_t)arg1 + 0x2du;
                            g->edx = t20;
                            g->esp = sp0 - 0x14u;
                            cow_thiscall(g, COW_IMG(0x1011fc80u), eax, 8, t20, t19, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                            t21 = g->edx;
                            edx = t21;
                        }
                        q22 = (int64_t)cow_muls(0x66666667u, rd8(arg3 + 0x23u));
                        t23 = (uint32_t)((int32_t)cow_qhi(q22) >> 2u);
                        t24 = cow_divs(g, t23 + (t23 >> 0x1fu), 0xau);
                        t25 = cow_mods(g, t23 + (t23 >> 0x1fu), 0xau);
                        if (rd32(t25 * 4u + rd32(loc_4) + 0x78u) != 0u)
                        {
                            ecx = rd32(t25 * 4u + rd32(loc_4) + 0x78u);
                            t26 = (uint32_t)(int16_t)arg2 + 1u;
                            t27 = (uint32_t)(int16_t)arg1 + 0x44u;
                            g->esp = sp0 - 0x14u;
                            cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t27, t26, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                        }
                        t28 = cow_divs(g, rd8(arg3 + 0x23u), 0xau);
                        t29 = cow_mods(g, rd8(arg3 + 0x23u), 0xau);
                        if (rd32(t29 * 4u + rd32(loc_4) + 0x78u) == 0u)
                        {
                            eax = loc_4;
                            edx = t29;
                        }
                        else
                        {
                            ecx = rd32(t29 * 4u + rd32(loc_4) + 0x78u);
                            t30 = (uint32_t)(int16_t)arg2 + 1u;
                            t31 = (uint32_t)(int16_t)arg1 + 0x4bu;
                            g->eax = t31;
                            g->edx = t30;
                            g->esp = sp0 - 0x14u;
                            t32 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t31, t30, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                            t33 = g->edx;
                            eax = t32;
                            edx = t33;
                        }
                    }
                }
                esi = arg1 + 0x55u;
            }
            if ((arg5 & 2u) != 0u)
            {
                if (rd8(arg3 + 0x1du) >= 9u)
                {
                    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1du);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1du);
                    if (rd8(arg3 + 0x20u) != 0x17u)
                    {
                        if (rd8(arg3 + 0x21u) != 0x17u)
                        {
                            if (rd32(rd32(loc_4) + (uint32_t)(int8_t)rd8(COW_IMG(0x1037d36fu) + (uint8_t)eax) * 4u + 0xa0u) == 0u)
                            {
                                eax = rd32(loc_4);
                                edx = loc_4;
                            }
                            else
                            {
                                ecx = rd32(rd32(loc_4) + (uint32_t)(int8_t)rd8(COW_IMG(0x1037d36fu) + (uint8_t)eax) * 4u + 0xa0u);
                                t34 = (uint32_t)(int16_t)arg2 + 1u;
                                g->eax = (uint32_t)(int16_t)esi;
                                g->edx = t34;
                                g->esp = sp0 - 0x14u;
                                t35 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, (uint32_t)(int16_t)esi, t34, 0x80808080u, 0u, 0u);
                                t36 = g->edx;
                                eax = t35;
                                edx = t36;
                            }
                        }
                    }
                }
                esi = esi + 0x12u;
            }
            if ((arg5 & 4u) != 0u)
            {
                if (rd32(rd32(loc_4) + rd8(arg3 + 0x1cu) * 4u + 0x6cu) == 0u)
                {
                    eax = rd32(loc_4);
                    edx = loc_4;
                }
                else
                {
                    ecx = rd32(rd32(loc_4) + rd8(arg3 + 0x1cu) * 4u + 0x6cu);
                    t37 = (uint32_t)(int16_t)arg2 + 1u;
                    g->eax = (uint32_t)(int16_t)esi;
                    g->edx = t37;
                    g->esp = sp0 - 0x14u;
                    t38 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, (uint32_t)(int16_t)esi, t37, 0x80808080u, 0u, 0u);
                    t39 = g->edx;
                    eax = t38;
                    edx = t39;
                }
                esi = esi + 0xcu;
            }
            if ((arg5 & 8u) != 0u)
            {
                if (rd8(arg3 + 0x1eu) == 0u)
                {
                    wr8(arg3 + 0x1eu, 1u);
                }
                q40 = (int64_t)cow_muls(0x66666667u, rd8(arg3 + 0x1eu));
                t41 = (uint32_t)((int32_t)cow_qhi(q40) >> 2u);
                if (t41 + (t41 >> 0x1fu) != 0u)
                {
                    edx = t41 + (t41 >> 0x1fu);
                    if (rd32(edx * 4u + rd32(loc_4) + 0x78u) != 0u)
                    {
                        ecx = rd32(edx * 4u + rd32(loc_4) + 0x78u);
                        t42 = (uint32_t)(int16_t)arg2 + 3u;
                        g->esp = sp0 - 0x14u;
                        cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, (uint32_t)(int16_t)esi, t42, 0x80808080u, 0u, 0u);
                    }
                }
                t43 = cow_divs(g, rd8(arg3 + 0x1eu), 0xau);
                t44 = cow_mods(g, rd8(arg3 + 0x1eu), 0xau);
                if (rd32(t44 * 4u + rd32(loc_4) + 0x78u) != 0u)
                {
                    ecx = rd32(t44 * 4u + rd32(loc_4) + 0x78u);
                    t45 = (uint32_t)(int16_t)arg2 + 3u;
                    t46 = (uint32_t)(int16_t)esi + 6u;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t46, t45, 0x80808080u, 0u, 0u);
                }
                esi = esi + 0x12u;
            }
        }
    }
    return (uint32_t)(int16_t)esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca6c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
