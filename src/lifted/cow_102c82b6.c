/* f_0x102c82b6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
void cow_fn_102c82b6(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
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
    uint32_t t4;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            t1 = rd32(sp0 + 0xcu);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            t2 = cow_call_regs(g, COW_IMG(0x10317480u), in_eax, g->ecx, g->edx, 1, 1, t1);
            t3 = g->ecx;
            t4 = g->edx;
            g->ecx = t3;
            g->edx = t4;
            g->esp = sp0 - 4u;
            t5 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, arg1, t2 + 1u, t1, in_edi, in_esi, in_ebx);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(arg2 + 0xa0u, t5);
            if (t5 != 0u)
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                edi = t2 + 1u;
                goto L_102c82fc;
            }
            eax = t5;
            ecx = t6;
            edx = t7;
            loc_14 = COW_IMG(0x103c9944u);
L_102c83f5: ;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_14);
        }
    }
L_102c83eb: ;
    return;
L_102c82fc: ;
    t8 = rd32(sp0 + 0xcu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, eax, t8, edi, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(arg2 + 0xa4u, arg4);
    wr8(arg2 + 0xb5u, (uint8_t)arg7);
    wr32(arg2 + 0xa8u, arg5);
    wr8(arg2 + 0xb4u, (uint8_t)arg6);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x10317480u), (arg5 & 0xffffff00u) | (uint8_t)arg6, g->ecx, g->edx, 1, 1, arg8);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, arg1, t11 + 1u, arg8, eax, t8, edi);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(arg2 + 0xacu, t14);
    if (t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        edi = t11 + 1u;
        goto L_102c8355;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    loc_14 = COW_IMG(0x103c9920u);
    goto L_102c83f5;
L_102c8355: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, eax, arg8, edi, in_edi, in_esi);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = arg7 * 4u + 4u;
    g->eax = t19;
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, arg1, t19, eax, arg8, edi, in_edi);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(arg2 + 0xb0u, t20);
    if (t20 != 0u)
    {
        eax = t20;
        edx = t22;
        goto L_102c8383;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    loc_14 = COW_IMG(0x103c98f8u);
    goto L_102c83f5;
L_102c8383: ;
    wr32(arg7 * 4u + eax, 0u);
    wr32(sp0 + 0xcu, 0u);
    if ((int32_t)arg7 <= 0) goto L_102c83e0;
L_102c838f: ;
    t23 = rd32(arg9 + rd32(sp0 + 0xcu) * 4u);
    g->ecx = rd32(sp0 + 0xcu);
    g->edx = edx;
    t24 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x10u;
    t25 = cow_call_regs(g, COW_IMG(0x10317480u), arg9, g->ecx, g->edx, 1, 1, t23);
    t26 = g->ecx;
    t27 = g->edx;
    g->esp = sp0 - 4u;
    t28 = cow_cdecl(g, COW_IMG(0x102c44bfu), 6, arg1, t25 + 1u, t23, in_edi, in_esi, in_ebx);
    t29 = rd32(sp0 + 0xcu);
    wr32(rd32(arg2 + 0xb0u) + t29 * 4u, t28);
    if (rd32(t29 * 4u + rd32(arg2 + 0xb0u)) == 0u)
    {
        eax = rd32(t29 * 4u + rd32(arg2 + 0xb0u));
        ecx = t29;
        edx = t29;
        goto L_102c83f0;
    }
    eax = rd32(t29 * 4u + rd32(arg2 + 0xb0u));
    ecx = t29;
    edx = t29;
    ebx = arg9 + t24 * 4u;
    edi = t25 + 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, eax, rd32(ebx), edi, in_edi, in_esi);
    t30 = g->edx;
    wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 1u);
    if ((int32_t)rd32(sp0 + 0xcu) < (int32_t)arg7)
    {
        edx = t30;
        goto L_102c838f;
    }
L_102c83e0: ;
    wr8(arg2 + 9u, rd8(arg2 + 9u) | 4u);
    wr8(arg2 + 0xb8u, rd8(arg2 + 0xb8u) | 0x80u);
    goto L_102c83eb;
L_102c83f0: ;
    loc_14 = COW_IMG(0x103c98d0u);
    goto L_102c83f5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c82b6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c82b6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
