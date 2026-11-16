/* f_0x10081230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10081230(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10081246;
    return in_eax & 0xffffff00u;
L_10081246: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10080d00u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = (t1 & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        ecx = t2;
        edx = t3;
        ebx = t1;
        loc_4 = self & 0xffffffu;
    }
    else
    {
        eax = (t1 & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        ecx = t2;
        edx = t3;
        ebx = t1;
        if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) == 0u)
        {
            eax = (uint32_t)(int16_t)eax;
            loc_4 = self & 0xffffffu;
        }
        else
        {
            esi = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
            if ((int32_t)rd32(esi + 0x170u) < 2)
            {
                eax = rd32(esi + 0x170u);
                goto L_1008127c;
            }
            eax = rd32(esi + 0x170u);
            if ((int32_t)eax > 3) goto L_1008127c;
            ebx = ebx | 0x20u;
L_1008129d: ;
            if (!(rd32(esi + 0x12cu) >> 0xdu & 1u))
            {
                ecx = rd32(esi + 0x12cu) >> 0xdu;
                loc_4 = self & 0xffffffu;
            }
            else
            {
                ecx = rd32(esi + 0x12cu) >> 0xdu;
                loc_4 = (self & 0xffffffu) | 0x1000000u;
            }
        }
    }
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t10 = g->ecx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        ecx = t10;
    }
    else
    {
        eax = t9;
        ecx = t10;
        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x80u);
    }
    t11 = (eax & 0xffff0000u) | rd16(arg1 + 0x16u);
    if ((t11 & 0x1000u) != 0u)
    {
        eax = t11;
        edx = t11 & 0x1000u;
        goto L_10081372;
    }
    eax = t11;
    if (((uint16_t)ebx & ~(uint16_t)eax) == 0u)
    {
        ecx = ~(uint16_t)eax;
        edx = (uint16_t)ebx;
        goto L_10081372;
    }
    ecx = ~(uint16_t)eax;
    edx = (uint16_t)ebx;
    if ((ebx & 0x20u) == 0u) goto L_10081309;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0xcu);
    g->ebx = in_ebx;
    return t12 & 0xffffff00u;
L_1008127c: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x10095680u), esi, 1, eax);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_1008129a;
    }
    edx = t5;
    t6 = rd32(esi + 0x170u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x100956a0u), esi, 1, t6);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_1008129d;
    }
    eax = t7;
    edx = t8;
L_1008129a: ;
    ebx = ebx | 0x40u;
    goto L_1008129d;
L_10081309: ;
    if ((ebx & 0x40u) == 0u) goto L_10081321;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 9u);
    g->ebx = in_ebx;
    return t13 & 0xffffff00u;
L_10081321: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x101cbe70u), eax, g->ecx, g->edx, 1, 0);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_1008133d;
    }
    edx = t15;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0xbu);
    g->ebx = in_ebx;
    return t16 & 0xffffff00u;
L_1008133d: ;
    if ((int8_t)ebx >= 0) goto L_1008136c;
    if (loc_4 >> 0x18u == 0u) goto L_1008135f;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x97u);
    g->ebx = in_ebx;
    return t17 & 0xffffff00u;
L_1008135f: ;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 1u);
    eax = t18;
L_1008136c: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10081372: ;
    if ((eax & 0x10u) == 0u) goto L_100813f0;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall_cdecl(g, COW_IMG(0x10081480u), ecx, 1, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        ecx = t20;
        edx = t21;
        goto L_100813f0;
    }
    edx = t21;
    if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_100813a7;
    eax = rd32(COW_IMG(0x1057876cu));
    if (rd16(eax + 0x68u) == 0u) goto L_100813a7;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0u);
    g->ebx = in_ebx;
    return t22 & 0xffffff00u;
L_100813a7: ;
    if (rd32(COW_IMG(0x106631d4u)) == 0u) goto L_100813ca;
    eax = rd32(COW_IMG(0x106631d4u));
    if (rd16(eax + 0x1cu) != 1u) goto L_100813ca;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0xdu);
    g->ebx = in_ebx;
    return t23 & 0xffffff00u;
L_100813ca: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        ecx = t25;
        edx = t26;
        goto L_100813f0;
    }
    edx = t26;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
    g->ebx = in_ebx;
    return t27 & 0xffffff00u;
L_100813f0: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 == 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        goto L_1008140a;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t31 = cow_call_regs(g, COW_IMG(0x10080d20u), eax, g->ecx, g->edx, 1, 1, arg1);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        goto L_1008140a;
    }
    eax = t31;
    g->ebx = in_ebx;
    return eax;
L_1008140a: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_call_regs(g, COW_IMG(0x10201f00u), eax, ecx, g->edx, 1, 0);
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 == 0u)
    {
        eax = t34;
        goto L_10081436;
    }
    ecx = t35;
    edx = t36;
    g->esp = sp0 - 0xcu;
    t37 = cow_call_regs(g, COW_IMG(0x10080d90u), g->eax, g->ecx, edx, 1, 1, arg1);
    t38 = g->edx;
    if ((uint8_t)t37 != 0u)
    {
        eax = t37;
        goto L_10081436;
    }
    edx = t38;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t39 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9eu);
    g->ebx = in_ebx;
    return t39 & 0xffffff00u;
L_10081436: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10081230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
