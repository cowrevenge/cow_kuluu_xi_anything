/* f_0x102c6b68 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102c6b68(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(arg1 + 0xe4u, rd32(arg1 + 0xe4u) + 1u);
    if (rd32(arg1 + 0xe4u) >= rd32(arg1 + 0xd0u))
    {
        ecx = rd32(arg1 + 0xe4u);
        if (rd8(arg1 + 0x123u) == 0u)
        {
            eax = arg1 + 0xe4u;
            edx = in_edx;
            ebx = in_ebx;
            goto L_102c6c37;
        }
        wr32(arg1 + 0xe4u, 0u);
        t1 = rd32(arg1 + 0xd8u) + 1u;
        wr32(sp0 - 0x18u, t1);
        wr32(sp0 - 0x1cu, 0u);
        t2 = rd32(arg1 + 0xe8u);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 - 0x24u, arg1);
        g->eax = t1;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_cdecl(g, COW_IMG(0x102c44f9u), 6, arg1, t2, 0u, t1, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
        ebx = in_ebx;
L_102c6bb1: ;
        wr8(arg1 + 0x124u, (uint8_t)(rd8(arg1 + 0x124u) + 1u));
        if (rd8(arg1 + 0x124u) >= 7u)
        {
            ebx = (ebx & 0xffffff00u) | rd8(arg1 + 0x124u);
            goto L_102c6c37;
        }
        ebx = (ebx & 0xffffff00u) | rd8(arg1 + 0x124u);
        t6 = cow_divu(g, rd32(arg1 + 0xc8u) + rd32(COW_IMG(0x10342ec8u) + (uint8_t)ebx * 4u) - rd32(COW_IMG(0x10342eacu) + (uint8_t)ebx * 4u) - 1u, rd32(COW_IMG(0x10342ec8u) + (uint8_t)ebx * 4u));
        t7 = cow_modu(g, rd32(arg1 + 0xc8u) + rd32(COW_IMG(0x10342ec8u) + (uint8_t)ebx * 4u) - rd32(COW_IMG(0x10342eacu) + (uint8_t)ebx * 4u) - 1u, rd32(COW_IMG(0x10342ec8u) + (uint8_t)ebx * 4u));
        t8 = rd8(arg1 + 0x129u);
        wr32(arg1 + 0xe0u, t6);
        t9 = ((t8 * t6 + 7u) >> 3u) + 1u;
        t10 = rd8(arg1 + 0x70u);
        wr32(arg1 + 0xdcu, t9);
        if ((t10 & 2u) != 0u)
        {
            eax = t6;
            ecx = (uint8_t)ebx << 2u;
            edx = t9;
            goto L_102c6c2e;
        }
        ecx = (uint8_t)ebx << 2u;
        t11 = cow_divu(g, rd32(arg1 + 0xccu) + rd32(COW_IMG(0x10342f00u) + ecx) - rd32(COW_IMG(0x10342ee4u) + ecx) - 1u, rd32(COW_IMG(0x10342f00u) + ecx));
        t12 = cow_modu(g, rd32(arg1 + 0xccu) + rd32(COW_IMG(0x10342f00u) + ecx) - rd32(COW_IMG(0x10342ee4u) + ecx) - 1u, rd32(COW_IMG(0x10342f00u) + ecx));
        t13 = rd32(arg1 + 0xe0u);
        wr32(arg1 + 0xd0u, t11);
        if (t13 == 0u)
        {
            eax = t11;
            edx = t12;
            goto L_102c6bb1;
        }
        eax = t11;
        edx = t12;
L_102c6c2e: ;
        if ((uint8_t)ebx < 7u) goto L_102c6d7e;
L_102c6c37: ;
        if ((rd8(arg1 + 0x6cu) & 0x20u) == 0u)
        {
            wr32(arg1 + 0x84u, 1u);
            wr32(arg1 + 0x80u, sp0 + 7u);
            eax = sp0 + 7u;
L_102c6c57: ;
            if (rd32(arg1 + 0x78u) == 0u)
            {
                if (rd32(arg1 + 0x10cu) == 0u)
                {
L_102c6c70: ;
                    wr32(sp0 - 0x18u, 0u);
                    wr32(sp0 - 0x1cu, arg1);
                    g->ecx = ecx;
                    g->esp = sp0 - 8u;
                    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, in_edi, in_esi, in_ebx);
                    t14 = g->ecx;
                    t15 = g->edx;
                    wr32(sp0 - 0x20u, 4u);
                    wr32(sp0 - 0x24u, sp0 - 8u);
                    wr32(sp0 - 0x28u, arg1);
                    g->ecx = t14;
                    g->esp = sp0 - 0x1cu;
                    cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, t15, 1, 3, arg1, sp0 - 8u, 4u);
                    t16 = g->ecx;
                    t17 = g->edx;
                    wr32(sp0 - 0x2cu, sp0 - 8u);
                    g->eax = sp0 - 8u;
                    g->ecx = t16;
                    g->edx = t17;
                    g->esp = sp0 - 0x28u;
                    t18 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 - 8u);
                    t19 = g->ecx;
                    t20 = g->edx;
                    wr32(sp0 - 0x30u, arg1);
                    wr32(arg1 + 0x10cu, t18);
                    g->ecx = t19;
                    g->edx = t20;
                    g->esp = sp0 - 0x2cu;
                    t21 = cow_cdecl(g, COW_IMG(0x102c3647u), 1, arg1);
                    t22 = g->ecx;
                    t23 = g->edx;
                    wr32(sp0 - 0x34u, 4u);
                    wr32(sp0 - 0x38u, arg1 + 0x11cu);
                    wr32(sp0 - 0x3cu, arg1);
                    g->ecx = t22;
                    g->esp = sp0 - 0x28u;
                    t24 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, t23, 1, 5, arg1, arg1 + 0x11cu, 4u, arg1, sp0 - 8u);
                    t25 = g->ecx;
                    t26 = g->edx;
                    wr32(sp0 - 0x40u, 4u);
                    wr32(sp0 - 0x44u, COW_IMG(0x10342e0cu));
                    wr32(sp0 - 0x48u, arg1 + 0x11cu);
                    g->edx = t26;
                    g->esp = sp0 - 0x3cu;
                    t27 = cow_thiscall_cdecl(g, COW_IMG(0x10317270u), t25, 3, arg1 + 0x11cu, COW_IMG(0x10342e0cu), 4u);
                    t28 = g->ecx;
                    t29 = g->edx;
                    if (t27 == 0u)
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
                        wr32(sp0 - 0x18u, COW_IMG(0x103c7f04u));
                        wr32(sp0 - 0x1cu, arg1);
                        g->eax = eax;
                        g->esp = sp0 - 0xcu;
                        t30 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7f04u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                        t31 = g->edx;
                        eax = t30;
                        ecx = COW_IMG(0x103c7f04u);
                        edx = t31;
                    }
                    if (rd32(arg1 + 0x10cu) == 0u) goto L_102c6c70;
                }
                t32 = rd32(arg1 + 0xb0u);
                t33 = rd32(arg1 + 0xacu);
                t34 = rd32(arg1 + 0x10cu);
                t35 = rd32(arg1 + 0xb0u);
                wr32(arg1 + 0x78u, t32);
                wr32(arg1 + 0x74u, t33);
                if (t35 <= t34)
                {
                    eax = t32;
                    ecx = t33;
                    edx = t34;
                }
                else
                {
                    eax = t32;
                    ecx = t33;
                    edx = t34;
                    wr32(arg1 + 0x78u, edx);
                }
                t36 = rd32(arg1 + 0x78u);
                wr32(sp0 - 0x18u, t36);
                wr32(sp0 - 0x1cu, ecx);
                wr32(sp0 - 0x20u, arg1);
                g->ecx = ecx;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, ecx, t36, in_edi, in_esi);
                t37 = g->ecx;
                t38 = g->edx;
                t39 = rd32(arg1 + 0x78u);
                wr32(arg1 + 0x10cu, rd32(arg1 + 0x10cu) - t39);
                eax = t39;
                ecx = t37;
                edx = t38;
            }
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, arg1 + 0x74u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t40 = cow_cdecl(g, COW_IMG(0x102c3e9eu), 3, arg1 + 0x74u, 1u, in_edi);
            t41 = g->edx;
            if (t40 == 1u)
            {
                eax = t40;
                edx = t41;
                goto L_102c6d83;
            }
            eax = t40;
            edx = t41;
            if (eax == 0u)
            {
                ecx = 1u;
            }
            else
            {
                if (rd32(arg1 + 0x8cu) != 0u)
                {
                    eax = rd32(arg1 + 0x8cu);
                }
                else
                {
                    eax = COW_IMG(0x103c94ecu);
                }
                wr32(sp0 - 0x18u, eax);
                wr32(sp0 - 0x1cu, arg1);
                g->eax = eax;
                g->esp = sp0 - 0xcu;
                t42 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, eax, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                t43 = g->edx;
                eax = t42;
                ecx = rd32(sp0 - 0x18u);
                edx = t43;
            }
            if (rd32(arg1 + 0x84u) != 0u) goto L_102c6c57;
            wr32(sp0 - 0x18u, COW_IMG(0x103c94d4u));
            loc_18 = COW_IMG(0x103c94d4u);
L_102c6d3e: ;
            wr32(sp0 - 0x1cu, arg1);
            g->ebx = 0u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t44 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_18);
            t45 = g->edx;
            eax = t44;
            ecx = rd32(sp0 - 0x18u);
            edx = t45;
L_102c6d46: ;
            wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 8u);
            wr32(arg1 + 0x6cu, rd32(arg1 + 0x6cu) | 0x20u);
            wr32(arg1 + 0x84u, 0u);
            ebx = 0u;
        }
        if (rd32(arg1 + 0x10cu) != 0u) goto L_102c6d63;
        if (rd32(arg1 + 0x78u) == 0u) goto L_102c6d70;
L_102c6d63: ;
        wr32(sp0 - 0x18u, COW_IMG(0x103c94bcu));
        wr32(sp0 - 0x1cu, arg1);
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c94bcu));
        t46 = g->edx;
        ecx = COW_IMG(0x103c94bcu);
        edx = t46;
L_102c6d70: ;
        wr32(sp0 - 0x18u, arg1 + 0x74u);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102c3d20u), 1, arg1 + 0x74u);
        wr32(arg1 + 0x68u, rd32(arg1 + 0x68u) | 8u);
    }
L_102c6d7e: ;
    g->ebx = in_ebx;
    return;
L_102c6d83: ;
    if (rd32(arg1 + 0x84u) == 0u) goto L_102c6d98;
    if (rd32(arg1 + 0x78u) != 0u) goto L_102c6d98;
    if (rd32(arg1 + 0x10cu) == 0u)
    {
        ecx = 1u;
        goto L_102c6d46;
    }
L_102c6d98: ;
    wr32(sp0 - 0x18u, COW_IMG(0x103c7ed8u));
    ecx = 1u;
    loc_18 = COW_IMG(0x103c7ed8u);
    goto L_102c6d3e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c6b68(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c6b68(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
