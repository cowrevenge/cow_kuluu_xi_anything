/* f_0x102c80a9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
void cow_fn_102c80a9(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            if (arg3 == 0u) goto L_102c80d0;
            if (arg4 != 0u)
            {
                ecx = self;
                edx = in_edx;
                goto L_102c80dd;
            }
L_102c80d0: ;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c98a8u), in_edi, in_esi);
            t1 = g->edx;
            ecx = COW_IMG(0x103c98a8u);
            edx = t1;
L_102c80dd: ;
            if (arg3 > 0x7fffffffu) goto L_102c80ec;
            if (arg4 <= 0x7fffffffu) goto L_102c80f9;
L_102c80ec: ;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c988cu), in_edi, in_esi);
            t2 = g->edx;
            ecx = COW_IMG(0x103c988cu);
            edx = t2;
L_102c80f9: ;
            if (arg5 == 1u)
            {
                eax = arg5;
            }
            else
            {
                if (arg5 == 2u)
                {
                    eax = arg5;
                }
                else
                {
                    if (arg5 == 4u)
                    {
                        eax = arg5;
                    }
                    else
                    {
                        if (arg5 == 8u)
                        {
                            eax = arg5;
                        }
                        else
                        {
                            if (arg5 == 0x10u)
                            {
                                eax = arg5;
                            }
                            else
                            {
                                g->eax = arg5;
                                g->esp = sp0 - 4u;
                                t3 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9870u), in_edi, in_esi);
                                t4 = g->edx;
                                eax = t3;
                                ecx = COW_IMG(0x103c9870u);
                                edx = t4;
                            }
                        }
                    }
                }
            }
            if ((int32_t)arg6 < 0) goto L_102c8139;
            if (arg6 == 1u) goto L_102c8139;
            if (arg6 == 5u) goto L_102c8139;
            if ((int32_t)arg6 <= 6) goto L_102c8146;
L_102c8139: ;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t5 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9854u), in_ebx, in_edi);
            t6 = g->edx;
            eax = t5;
            ecx = COW_IMG(0x103c9854u);
            edx = t6;
L_102c8146: ;
            if (arg6 != 3u) goto L_102c8151;
            if ((int32_t)arg5 > 8) goto L_102c8166;
L_102c8151: ;
            if (arg6 == 2u) goto L_102c8160;
            if (arg6 == 4u) goto L_102c8160;
            if (arg6 != 6u) goto L_102c8173;
L_102c8160: ;
            if ((int32_t)arg5 >= 8) goto L_102c8173;
L_102c8166: ;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t7 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9820u), in_ebx, in_edi);
            t8 = g->edx;
            eax = t7;
            ecx = COW_IMG(0x103c9820u);
            edx = t8;
L_102c8173: ;
            if ((int32_t)arg7 >= 2)
            {
                g->eax = eax;
                g->esp = sp0 - 8u;
                t9 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c97fcu), in_ebx, in_edi);
                t10 = g->edx;
                eax = t9;
                ecx = COW_IMG(0x103c97fcu);
                edx = t10;
            }
            if (arg8 != 0u)
            {
                g->esp = sp0 - 8u;
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c97d8u), in_ebx, in_edi);
                t11 = g->edx;
                ecx = COW_IMG(0x103c97d8u);
                edx = t11;
            }
            if ((rd32(arg1 + 0x68u) & 0x1000u) != 0u)
            {
                if (rd32(arg1 + 0x230u) != 0u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c97a4u));
                    t12 = g->edx;
                    ecx = COW_IMG(0x103c97a4u);
                    edx = t12;
                }
            }
            if (arg9 != 0u)
            {
                if ((rd8(arg1 + 0x230u) & 4u) == 0u) goto L_102c81e3;
                if (arg9 != 0x40u) goto L_102c81e3;
                if ((rd32(arg1 + 0x68u) & 0x1000u) != 0u) goto L_102c81e3;
                if (arg6 == 2u) goto L_102c81f3;
                if (arg6 == 6u) goto L_102c81f3;
L_102c81e3: ;
                g->esp = sp0 - 8u;
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c9784u), in_ebx, in_edi);
                t13 = g->edx;
                ecx = COW_IMG(0x103c9784u);
                edx = t13;
L_102c81f3: ;
                if ((rd32(arg1 + 0x68u) & 0x1000u) != 0u)
                {
                    g->esp = sp0 - 0x10u;
                    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c9764u));
                    ecx = COW_IMG(0x103c9764u);
                }
            }
            wr32(arg2 + 4u, arg4);
            wr8(arg2 + 0x1au, (uint8_t)arg8);
            wr8(arg2 + 0x1bu, (uint8_t)arg9);
            wr32(arg2, arg3);
            wr8(arg2 + 0x18u, (uint8_t)arg5);
            wr8(arg2 + 0x19u, (uint8_t)arg6);
            wr8(arg2 + 0x1cu, (uint8_t)arg7);
            if ((uint8_t)arg6 == 3u)
            {
                ecx = (ecx & 0xffffff00u) | (uint8_t)arg5;
                goto L_102c823b;
            }
            ecx = (ecx & 0xffffff00u) | (uint8_t)arg5;
            if ((arg6 & 2u) == 0u) goto L_102c823b;
            wr8(arg2 + 0x1du, 3u);
L_102c823f: ;
            if ((arg6 & 4u) != 0u)
            {
                wr8(arg2 + 0x1du, (uint8_t)(rd8(arg2 + 0x1du) + 1u));
            }
            t14 = rd8(arg2 + 0x1du);
            eax = (arg4 & 0xffffff00u) | t14;
            cf = 0u;
            of = 0u;
            { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
            wr8(arg2 + 0x1eu, (uint8_t)eax);
            t15 = cow_divu(g, 0x7fffffffu, (uint32_t)((int32_t)((uint8_t)eax + 7u) >> 3u));
            t16 = cow_modu(g, 0x7fffffffu, (uint32_t)((int32_t)((uint8_t)eax + 7u) >> 3u));
            if (arg3 <= t15 - 0x40u)
            {
                ecx = (uint8_t)eax;
                t17 = (ecx * arg3 + 7u) >> 3u;
                wr32(arg2 + 0xcu, t17);
            }
            else
            {
                ecx = (uint8_t)eax;
                eax = t15 - 0x40u;
                edx = t16;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c9724u));
                wr32(arg2 + 0xcu, 0u);
            }
        }
    }
    return;
L_102c823b: ;
    wr8(arg2 + 0x1du, 1u);
    goto L_102c823f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c80a9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c80a9(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
