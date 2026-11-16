/* f_0x102234b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_102234b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(arg6, 0u);
    wr8(arg2, 0u);
    wr8(arg3, 0u);
    wr8(arg4, 0u);
    wr16(arg5, 0u);
    wr32(sp0 - 0x30u, in_esi);
    wr8(arg7, 0u);
    wr8(arg8, 0u);
    g->edx = arg7;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        edx = t2;
        t3 = rd32(sp0 + 4u);
        wr32(sp0 - 0x34u, t3);
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t4 = cow_thiscall(g, COW_IMG(0x10224160u), rd32(COW_IMG(0x10667148u)), 1, t3);
        t5 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
            ebp = in_ebp;
            edi = in_edi;
        }
        else
        {
            esi = t4;
            wr32(sp0 - 0x34u, in_ebp);
            wr32(sp0 - 0x38u, in_edi);
            wr32(sp0 - 0x3cu, 0x246u);
            t6 = rd8(esi + 0x11u);
            wr32(sp0 - 0x28u, t6);
            t7 = rd8(esi + 0x12u);
            wr32(sp0 - 0x24u, t7);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x1cu, 0x10u);
            t8 = rd8(esi + 0x13u);
            wr32(sp0 - 0x18u, t8);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x10u, 0u);
            g->edx = t6;
            g->esp = sp0 - 0x38u;
            t9 = cow_thiscall_cdecl(g, COW_IMG(0x1021e670u), t8, 1, 0x246u);
            t10 = g->ecx;
            t11 = g->edx;
            if ((uint8_t)t9 == 0u)
            {
                eax = t9;
                ecx = t10;
                edx = t11;
            }
            else
            {
                eax = t9;
                ecx = t10;
                edx = t11;
                if (rd16(esi) == 0x2c2u)
                {
                    wr32(sp0 - 0x24u, 1u);
                    wr32(sp0 - 0x28u, 8u);
                    loc_24 = 1u;
                    loc_28 = 8u;
                }
            }
            if (rd32(COW_IMG(0x105781acu)) != 0u)
            {
                wr8(sp0 + 4u, 0u);
                edi = 0u;
L_102235a1: ;
                if (rd8(sp0 + 4u) != 0u) goto L_102235f5;
                wr32(sp0 - 0x3cu, edi);
                g->edx = edx;
                t12 = rd32(COW_IMG(0x105781acu));
                g->esp = sp0 - 0x38u;
                t13 = cow_thiscall(g, COW_IMG(0x101304a0u), t12, 1, edi);
                t14 = g->ecx;
                t15 = g->edx;
                if (t13 == 0u)
                {
                    eax = t13;
                    ecx = t14;
                    edx = t15;
                }
                else
                {
                    eax = t13;
                    ecx = t14;
                    t16 = rd8(eax + 9u);
                    if (t16 == 2u)
                    {
                        eax = t16 - 2u;
                        edx = t16;
                        goto L_102235d7;
                    }
                    eax = t16 - 2u;
                    edx = t16;
                    if (eax != 1u)
                    {
                        eax = eax - 1u;
                        goto L_102235ef;
                    }
                    eax = eax - 1u;
                    if (rd16(esi + 0x1cu) != 0x25u) goto L_102235ef;
                    wr32(sp0 - 0x28u, 0xbu);
                    loc_28 = 0xbu;
L_102235ea: ;
                    wr8(sp0 + 4u, 1u);
                }
L_102235ef: ;
                if ((int32_t)(edi + 1u) < 16)
                {
                    edi = edi + 1u;
                    goto L_102235a1;
                }
            }
L_102235f5: ;
            if (rd8(esi + 2u) != 2u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 2u);
                ebp = rd32(sp0 - 0x34u);
                edi = rd32(sp0 - 0x38u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(esi + 2u);
                ebp = rd32(sp0 - 0x34u);
                edi = rd32(sp0 - 0x38u);
                loc_c = (rd32(sp0 - 0xcu) & 0xffffff00u) | 1u;
            }
            if ((uint8_t)eax == 0x12u)
            {
                loc_c = (loc_c & 0xffffff00u) | 1u;
                loc_8 = (rd32(sp0 - 8u) & 0xffff00ffu) | 0x100u;
            }
            if ((uint8_t)eax == 6u)
            {
                loc_c = (loc_c & 0xffffff00u) | 1u;
            }
            if (rd16(esi + 0x1cu) == 0x2bu)
            {
                if (rd16(esi + 0x1eu) == 6u)
                {
                    if (rd16(esi + 0x22u) == 0xbe5u) goto L_1022364c;
                    eax = rd16(esi + 0x22u);
                    if (eax == 0xbebu) goto L_1022364c;
                    if (eax != 0xbecu) goto L_10223651;
L_1022364c: ;
                }
            }
L_10223651: ;
            wr32(sp0 - 0x34u, sp0 - 0x28u);
            g->ebx = 0u;
            g->esp = sp0 - 0x20u;
            t17 = cow_call_regs(g, COW_IMG(0x1022d370u), g->eax, ecx, edx, 1, 5, sp0 - 0x28u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), loc_28, loc_24);
            t18 = g->ecx;
            t19 = g->edx;
            if (rd8(esi + 0x15u) != 0u)
            {
                eax = t17;
                ecx = (t18 & 0xffffff00u) | rd8(esi + 0x15u);
            }
            else
            {
                eax = t17;
                ecx = (t18 & 0xffffff00u) | rd8(esi + 0x15u);
                edx = t19;
                if ((uint8_t)eax == 2u) goto L_10223683;
                if ((uint8_t)eax == 3u) goto L_10223683;
                wr32(sp0 - 0x34u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t20 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
                t21 = g->ecx;
                t22 = g->edx;
                if (t20 == 0u)
                {
                    ecx = t21;
                    edx = t22;
                    eax = 0u;
                }
                else
                {
                    eax = t20;
                    ecx = t21;
                    edx = t22;
                    eax = rd32(eax + 0x28u);
                }
L_10223688: ;
                wr32(sp0 - 0x34u, esi + 0x16u);
                wr32(sp0 - 0x38u, eax);
                g->esp = sp0 - 0x30u;
                t26 = cow_cdecl(g, COW_IMG(0x102236e0u), 2, eax, esi + 0x16u);
                wr16(arg5, (uint16_t)t26);
                eax = t26;
                ecx = arg5;
            }
            wr32(sp0 - 0x34u, sp0 - 0x28u);
            g->esp = sp0 - 0x20u;
            cow_call_regs(g, COW_IMG(0x1022d510u), eax, ecx, sp0 - 0x28u, 1, 5, sp0 - 0x28u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
            wr32(sp0 - 0x38u, arg8);
            wr32(sp0 - 0x3cu, arg7);
            wr32(sp0 - 0x40u, arg6);
            wr32(sp0 - 0x44u, arg5);
            wr32(sp0 - 0x48u, arg4);
            wr32(sp0 - 0x4cu, arg3);
            wr32(sp0 - 0x50u, arg2);
            wr32(sp0 - 0x54u, sp0 - 0x28u);
            g->eax = arg2;
            g->edx = arg3;
            g->esp = sp0 - 0x34u;
            t27 = cow_thiscall_cdecl(g, COW_IMG(0x1022d290u), sp0 - 0x28u, 8, sp0 - 0x28u, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            t28 = g->edx;
            eax = t27;
            edx = t28;
        }
    }
    g->ebx = in_ebx;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_102235d7: ;
    if (rd16(esi) != 0x375u) goto L_102235ef;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 8u);
    loc_28 = 8u;
    loc_24 = 1u;
    goto L_102235ea;
L_10223683: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t23 = cow_call_regs(g, COW_IMG(0x10087610u), eax, g->ecx, g->edx, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    goto L_10223688;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102234b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102234b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
