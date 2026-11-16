/* f_0x101caa10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101caa10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q21;
    int64_t q36;
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 3u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        ebx = t1;
        goto L_101caa2e;
    }
    return (uint32_t)(int16_t)arg1;
L_101caa2e: ;
    if (rd32(rd32(ebx) + 0xb4u) != 0u)
    {
        ecx = rd32(rd32(ebx) + 0xb4u);
        g->edx = (uint32_t)(int16_t)arg2;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, (uint32_t)(int16_t)arg1, (uint32_t)(int16_t)arg2, 0x80808080u, 0u, 0u);
        t3 = g->edx;
        edx = t3;
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
            if (rd8(arg3 + 0x20u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(arg3 + 0x20u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(arg3 + 0x20u);
                if ((uint8_t)eax < 0x17u)
                {
                    if (rd32(rd32(ebx) + (uint8_t)eax * 4u) != 0u)
                    {
                        eax = rd32(rd32(ebx) + (uint8_t)eax * 4u);
                        t4 = (uint32_t)(int16_t)arg2 + 1u;
                        t5 = (uint32_t)(int16_t)arg1 + 0x11u;
                        g->edx = t5;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), eax, 8, t5, t4, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                        t6 = g->edx;
                        edx = t6;
                    }
                    if (!(rd8(arg3 + 0x25u) & 1u)) goto L_101cab3b;
                    q7 = (int64_t)cow_muls(0x66666667u, rd8(arg3 + 0x24u));
                    t8 = (uint32_t)((int32_t)cow_qhi(q7) >> 2u);
                    t9 = cow_divs(g, t8 + (t8 >> 0x1fu), 0xau);
                    t10 = cow_mods(g, t8 + (t8 >> 0x1fu), 0xau);
                    if (rd32(t10 * 4u + rd32(ebx) + 0x78u) != 0u)
                    {
                        ecx = rd32(t10 * 4u + rd32(ebx) + 0x78u);
                        t11 = (uint32_t)(int16_t)arg2 + 1u;
                        t12 = (uint32_t)(int16_t)arg1 + 0x28u;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t12, t11, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                    }
                    t13 = cow_divs(g, rd8(arg3 + 0x24u), 0xau);
                    t14 = cow_mods(g, rd8(arg3 + 0x24u), 0xau);
                    if (rd32(t14 * 4u + rd32(ebx) + 0x78u) == 0u)
                    {
                        eax = rd32(ebx);
                        edx = t14;
                        goto L_101cab6d;
                    }
                    ecx = rd32(t14 * 4u + rd32(ebx) + 0x78u);
                    edx = (uint32_t)(int16_t)arg1 + 0x2fu;
L_101cab58: ;
                    t15 = (uint32_t)(int16_t)arg2 + 1u;
                    g->eax = t15;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t16 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, edx, t15, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                    t17 = g->edx;
                    eax = t16;
                    edx = t17;
                }
            }
L_101cab6d: ;
            if (rd8(arg3 + 0x21u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(arg3 + 0x21u);
                if ((uint8_t)eax < 0x17u)
                {
                    if (rd32(rd32(ebx) + (uint8_t)eax * 4u) != 0u)
                    {
                        eax = rd32(rd32(ebx) + (uint8_t)eax * 4u);
                        t18 = (uint32_t)(int16_t)arg2 + 1u;
                        t19 = (uint32_t)(int16_t)arg1 + 0x3bu;
                        g->edx = t19;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), eax, 8, t19, t18, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                        t20 = g->edx;
                        edx = t20;
                    }
                    q21 = (int64_t)cow_muls(0x66666667u, rd8(arg3 + 0x23u));
                    t22 = (uint32_t)((int32_t)cow_qhi(q21) >> 2u);
                    t23 = cow_divs(g, t22 + (t22 >> 0x1fu), 0xau);
                    t24 = cow_mods(g, t22 + (t22 >> 0x1fu), 0xau);
                    if (rd32(t24 * 4u + rd32(ebx) + 0x78u) != 0u)
                    {
                        ecx = rd32(t24 * 4u + rd32(ebx) + 0x78u);
                        t25 = (uint32_t)(int16_t)arg2 + 1u;
                        t26 = (uint32_t)(int16_t)arg1 + 0x52u;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t26, t25, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                    }
                    t27 = cow_divs(g, rd8(arg3 + 0x23u), 0xau);
                    t28 = cow_mods(g, rd8(arg3 + 0x23u), 0xau);
                    if (rd32(t28 * 4u + rd32(ebx) + 0x78u) == 0u)
                    {
                        edx = t28;
                    }
                    else
                    {
                        ecx = rd32(t28 * 4u + rd32(ebx) + 0x78u);
                        t29 = (uint32_t)(int16_t)arg2 + 1u;
                        t30 = (uint32_t)(int16_t)arg1 + 0x59u;
                        g->edx = t30;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t30, t29, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
                        t31 = g->edx;
                        edx = t31;
                    }
                }
            }
            if (rd32(rd32(ebx) + rd8(arg3 + 0x1cu) * 4u + 0x6cu) == 0u)
            {
                eax = rd8(arg3 + 0x1cu);
            }
            else
            {
                ecx = rd32(rd32(ebx) + rd8(arg3 + 0x1cu) * 4u + 0x6cu);
                t32 = (uint32_t)(int16_t)arg2 + 1u;
                t33 = (uint32_t)(int16_t)(arg1 + 0x67u);
                g->eax = t33;
                g->edx = t32;
                g->esp = sp0 - 0x10u;
                t34 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t33, t32, 0x80808080u, 0u, 0u);
                t35 = g->edx;
                eax = t34;
                edx = t35;
            }
            if (rd8(arg3 + 0x1eu) == 0u)
            {
                wr8(arg3 + 0x1eu, 1u);
            }
            q36 = (int64_t)cow_muls(0x66666667u, rd8(arg3 + 0x1eu));
            t37 = (uint32_t)((int32_t)cow_qhi(q36) >> 2u);
            if (t37 + (t37 >> 0x1fu) != 0u)
            {
                edx = t37 + (t37 >> 0x1fu);
                if (rd32(edx * 4u + rd32(ebx) + 0x78u) != 0u)
                {
                    ecx = rd32(edx * 4u + rd32(ebx) + 0x78u);
                    t38 = (uint32_t)(int16_t)arg2 + 3u;
                    t39 = (uint32_t)(int16_t)(arg1 + 0x73u);
                    g->esp = sp0 - 0x10u;
                    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t39, t38, 0x80808080u, 0u, 0u);
                }
            }
            t40 = cow_divs(g, rd8(arg3 + 0x1eu), 0xau);
            t41 = cow_mods(g, rd8(arg3 + 0x1eu), 0xau);
            if (rd32(t41 * 4u + rd32(ebx) + 0x78u) != 0u)
            {
                edx = rd32(t41 * 4u + rd32(ebx) + 0x78u);
                t42 = (uint32_t)(int16_t)arg2 + 3u;
                t43 = (uint32_t)(int16_t)(arg1 + 0x73u) + 6u;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), edx, 5, t43, t42, 0x80808080u, 0u, 0u);
            }
            esi = arg1 + 0x85u;
        }
    }
    return (uint32_t)(int16_t)esi;
L_101cab3b: ;
    if (rd32(rd32(ebx) + 0xb8u) == 0u)
    {
        eax = rd32(ebx);
        goto L_101cab6d;
    }
    ecx = rd32(rd32(ebx) + 0xb8u);
    edx = (uint32_t)(int16_t)arg1 + 0x28u;
    goto L_101cab58;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101caa10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101caa10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
