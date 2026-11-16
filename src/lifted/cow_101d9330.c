/* f_0x101d9330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101d9330(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10663428u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101d94ea;
    }
    ecx = rd32(COW_IMG(0x10663428u));
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_101d94ea;
    }
    ecx = t2;
    edx = t3;
    ebx = rd32(COW_IMG(0x10663428u));
    esi = t1;
    edi = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
    if ((uint32_t)(int16_t)arg1 == 1u) goto L_101d9494;
    if ((uint32_t)(int16_t)arg1 == 2u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10140d90u), rd32(COW_IMG(0x1057824cu)), 4, 0u, 0u, COW_IMG(0x101d9500u), esi);
        t26 = g->edx;
        g->edx = t26;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f718u), 1u, 0u);
        t27 = g->edx;
        if (rd32(esi) != 4u)
        {
            eax = rd32(esi);
            ecx = rd32(COW_IMG(0x10578204u));
            edx = t27;
            g->esp = sp0 - 0x10u;
            t30 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, ecx, edx, 0, 4, 2u, 0u, 0u, 0u);
            t31 = g->edx;
            eax = t30;
            edx = t31;
        }
        else
        {
            eax = rd32(esi);
            ecx = rd32(COW_IMG(0x10578204u));
            edx = t27;
            g->esp = sp0 - 0x10u;
            t28 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, ecx, edx, 0, 4, 2u, 0u, 1u, 0u);
            t29 = g->edx;
            eax = t28;
            edx = t29;
        }
    }
    else
    {
        if ((uint32_t)(int16_t)arg1 != 3u)
        {
            eax = (uint32_t)(int16_t)arg1 - 3u;
        }
        else
        {
            if ((uint32_t)(int8_t)rd8(self + 0x15u) == 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t24 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ee64u), 1u, 0u);
                t25 = g->edx;
                eax = t24;
                edx = t25;
            }
            else
            {
                eax = (uint32_t)(int8_t)rd8(self + 0x15u);
                if (eax == 1u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t22 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ee50u), 1u, 0u);
                    t23 = g->edx;
                    eax = t22;
                    edx = t23;
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
                        g->ecx = rd32(COW_IMG(0x10663448u));
                        g->edx = edx;
                        t4 = rd32(COW_IMG(0x10663448u));
                        g->esp = sp0 - 0x10u;
                        t5 = cow_stdcall(g, COW_IMG(0x101d7760u), 1, edi);
                        t6 = g->ecx;
                        t7 = g->edx;
                        if ((uint8_t)t5 == 0u)
                        {
                            ecx = t6;
                            edx = t7;
                            g->esi = esi;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t14 = cow_cdecl(g, COW_IMG(0x10104170u), 3, ebx + 0x7ecu, 9u, 0u);
                            t15 = g->edx;
                            if (rd32(COW_IMG(0x10663448u)) == 0u)
                            {
                                eax = t14;
                                edx = t15;
                            }
                            else
                            {
                                ecx = rd32(COW_IMG(0x10663448u));
                                ebx = ebx + 0x7ecu;
                                t16 = rd16(rd32(COW_IMG(0x10663428u)) + 0x8c8u);
                                g->ebx = ebx;
                                g->eax = t16;
                                g->edx = rd32(COW_IMG(0x10663428u));
                                t17 = rd32(COW_IMG(0x10663428u));
                                g->esp = sp0 - 0x10u;
                                t18 = cow_thiscall(g, COW_IMG(0x101d76f0u), ecx, 3, t16, 9u, 0u);
                                t19 = g->edx;
                                eax = t18;
                                edx = t19;
                            }
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t20 = cow_call_regs(g, COW_IMG(0x101d8140u), eax, rd32(COW_IMG(0x10663428u)), g->edx, 0, 2, 0u, 0u);
                            t21 = g->edx;
                            eax = t20;
                            edx = t21;
                        }
                        else
                        {
                            eax = t5;
                            ecx = t6;
                            edx = t7;
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t8 = cow_stdcall(g, COW_IMG(0x101d7660u), 1, edi);
                            t9 = g->edx;
                            g->edx = t9;
                            t10 = cow_stdcall(g, COW_IMG(0x101da6a0u), 1, edi);
                            t11 = g->edx;
                            g->edx = t11;
                            t12 = cow_call_regs(g, COW_IMG(0x101d8140u), t10, rd32(COW_IMG(0x10663428u)), g->edx, 0, 2, 0u, 0u);
                            t13 = g->edx;
                            eax = t12;
                            edx = t13;
                        }
                    }
                }
            }
        }
    }
L_101d94da: ;
    t45 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t46 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t45, 1u);
    t47 = g->edx;
    eax = t46;
    edx = t47;
L_101d94ea: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101d9494: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_call_regs(g, COW_IMG(0x1020a410u), (uint32_t)(int16_t)arg1 - 1u, g->ecx, g->edx, 1, 0);
    t33 = g->ecx;
    t34 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        edx = t34;
        goto L_101d94a9;
    }
    eax = t32;
    ecx = t33;
    edx = t34;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t36 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t36;
    return t35;
L_101d94a9: ;
    if (rd32(COW_IMG(0x1066342cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066342cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1066342cu));
        g->eax = eax;
        t37 = rd32(esi);
        t38 = rd16(esi + 4u);
        g->esp = sp0 - 0x10u;
        t39 = cow_fastcall(g, COW_IMG(0x1020b3a0u), rd32(COW_IMG(0x10663428u)), edx, 0);
        t40 = g->edx;
        t41 = (t39 & 0xffffff00u) | t37 == 4u;
        t42 = (edi & 0xffff0000u) | t38;
        t43 = cow_call_regs(g, COW_IMG(0x101d8800u), t41, rd32(COW_IMG(0x1066342cu)), t40, 0, 4, t42, 0u, t41, 1u);
        t44 = g->edx;
        eax = t43;
        edx = t44;
    }
    goto L_101d94da;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d9330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d9330(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
