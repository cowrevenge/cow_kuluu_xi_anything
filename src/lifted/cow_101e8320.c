/* f_0x101e8320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e8320(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_94;
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
    cow_frame(g, sp0, 156u);

    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    wr32(sp0 - 0x90u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x8cu;
    t1 = cow_cdecl(g, COW_IMG(0x101e8500u), 1, 0u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101efb20u), self, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        edx = t4;
        ebx = t1;
        edi = t3;
        goto L_101e838e;
    }
    eax = t3;
    edx = t4;
    ebx = t1;
    edi = t3;
    wr32(self + 0x16cu, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t5 = cow_thiscall(g, COW_IMG(0x101e6f70u), self, 0);
    t6 = g->edx;
    wr32(sp0 - 0x90u, COW_IMG(0x10381f34u));
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f34u));
    t8 = g->edx;
    if (ebx == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        wr32(sp0 - 0x90u, edi);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, COW_IMG(0x10381f20u));
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x8cu;
        t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381f20u), 1u, edi);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    wr32(sp0 - 0x90u, 2u);
    wr32(sp0 - 0x94u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t11 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    loc_84 = rd32(sp0 - 0x84u);
    loc_88 = rd32(sp0 - 0x88u);
    loc_8c = rd32(sp0 - 0x8cu);
L_101e84d1: ;
    if (ebx != 0u)
    {
        wr32(sp0 - 0x90u, 0u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, COW_IMG(0x10381e94u));
        g->ebx = ebx;
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381e94u), 1u, 0u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
    }
L_101e84e8: ;
    g->ebx = loc_84;
    g->esi = loc_88;
    g->edi = loc_8c;
    return;
L_101e838e: ;
    if (rd16(rd32(edi + 0x1cu) + 2u) != 0xffffu)
    {
        eax = rd32(edi + 0x1cu);
        loc_84 = in_ebx;
        loc_88 = in_esi;
        loc_8c = in_edi;
        goto L_101e84d1;
    }
    eax = rd32(edi + 0x1cu);
    if (rd32(self + 0x16cu) == (uint32_t)(int16_t)rd16(eax))
    {
        loc_84 = in_ebx;
        loc_88 = in_esi;
        loc_8c = in_edi;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(eax);
        wr32(sp0 - 0x90u, eax);
        wr32(self + 0x16cu, eax);
        g->edx = edx;
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, COW_IMG(0x101e6eb0u), self, 1, eax);
        t13 = g->edx;
        if (rd32(self + 0x16cu) != rd32(self + 0x170u))
        {
            ecx = rd32(self + 0x170u);
            edx = t13;
        }
        else
        {
            eax = rd32(self + 0x16cu);
            edx = t13;
            t14 = rd32(self + 0x174u);
            wr32(sp0 - 0x90u, t14);
            g->edx = edx;
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, COW_IMG(0x101e6e50u), self, 1, t14);
            t15 = g->ecx;
            t16 = g->edx;
            ecx = t15;
            edx = t16;
        }
        if ((int32_t)((uint32_t)(int8_t)rd8(edi + 2u) - 4u) < 0)
        {
            eax = (uint32_t)(int8_t)rd8(edi + 2u) - 4u;
            ecx = (ecx & 0xffffff00u) | rd8(edi + 2u);
            goto L_101e8416;
        }
        eax = (uint32_t)(int8_t)rd8(edi + 2u) - 4u;
        ecx = (ecx & 0xffffff00u) | rd8(edi + 2u);
        if ((int32_t)eax >= 3) goto L_101e8416;
        wr32(sp0 - 0x90u, eax);
        wr32(sp0 - 0x94u, 0x13u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x8cu;
        t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x13u, eax);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x90u, t17);
        wr32(sp0 - 0x94u, 8u);
        wr32(sp0 - 0x98u, 0xau);
        g->ecx = t18;
        g->esp = sp0 - 0x90u;
        t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 8u);
        t21 = g->ecx;
        wr32(sp0 - 0x94u, t20);
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        g->ebx = ebx;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x84u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t20, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
        t22 = g->edx;
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        eax = sp0 - 0x80u;
        edx = t22;
        loc_94 = sp0 - 0x80u;
L_101e848b: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x8cu;
        t35 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, loc_94, 2u);
        t36 = g->edx;
        wr32(sp0 - 0x90u, COW_IMG(0x10381f20u));
        g->edx = t36;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381f20u));
        t37 = g->edx;
        edx = t37;
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
    }
    if (rd32(self + 0x16cu) == 0xffffffffu)
    {
        eax = rd32(self + 0x16cu);
        goto L_101e84d1;
    }
    eax = rd32(self + 0x16cu);
    if ((int32_t)eax <= (int16_t)rd16(self + 0x164u)) goto L_101e84d1;
    if (ebx == 0u) goto L_101e84e8;
    if (rd32(rd32(COW_IMG(0x10663650u)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663650u)) + 8u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10663650u)) + 8u);
        ecx = rd32(COW_IMG(0x10663650u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        t38 = cow_thiscall_cdecl(g, COW_IMG(0x101e9110u), ecx, 9, loc_8c, loc_88, loc_84, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
        t39 = g->edx;
        eax = t38;
        edx = t39;
        loc_84 = rd32(sp0 - 0x84u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_8c = rd32(sp0 - 0x8cu);
    }
    goto L_101e84d1;
L_101e8416: ;
    if ((uint8_t)ecx != 2u)
    {
        wr32(sp0 - 0x90u, 2u);
        if ((uint8_t)ecx != 7u)
        {
            if ((uint8_t)ecx != 3u)
            {
                if ((uint8_t)ecx != 9u)
                {
                    wr32(sp0 - 0x94u, 0u);
                    loc_94 = 0u;
                }
                else
                {
                    wr32(sp0 - 0x94u, 4u);
                    wr32(sp0 - 0x98u, 9u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x90u;
                    t33 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 4u);
                    t34 = g->edx;
                    wr32(sp0 - 0x94u, t33);
                    eax = t33;
                    edx = t34;
                    loc_94 = t33;
                }
            }
            else
            {
                wr32(sp0 - 0x94u, 2u);
                wr32(sp0 - 0x98u, 9u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x90u;
                t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 2u);
                t32 = g->edx;
                wr32(sp0 - 0x94u, t31);
                eax = t31;
                edx = t32;
                loc_94 = t31;
            }
        }
        else
        {
            wr32(sp0 - 0x94u, 3u);
            wr32(sp0 - 0x98u, 9u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x90u;
            t29 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 3u);
            t30 = g->edx;
            wr32(sp0 - 0x94u, t29);
            eax = t29;
            edx = t30;
            loc_94 = t29;
        }
    }
    else
    {
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 0x13u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x8cu;
        t23 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x13u, 3u);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp0 - 0x90u, t23);
        wr32(sp0 - 0x94u, 8u);
        wr32(sp0 - 0x98u, 0xau);
        g->edx = t25;
        g->esp = sp0 - 0x90u;
        t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 8u);
        t27 = g->edx;
        wr32(sp0 - 0x94u, t26);
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        g->ebx = ebx;
        g->esp = sp0 - 0x84u;
        t28 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t26, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        eax = t28;
        edx = sp0 - 0x80u;
        loc_94 = sp0 - 0x80u;
    }
    goto L_101e848b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e8320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
