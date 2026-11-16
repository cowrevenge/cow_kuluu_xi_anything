/* f_0x10093e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10093e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    const uint32_t in_ebp = g->ebp;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = rd32(t1 + 0x170u);
    t5 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    t8 = cow_cdecl(g, COW_IMG(0x10103b10u), 1, t5);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd8(COW_IMG(0x10482f44u)) == 0u)
    {
        eax = (t8 & 0xffffff00u) | rd8(COW_IMG(0x10482f44u));
        edx = t10;
        ebx = t8;
        esi = t1;
        edi = t4;
        goto L_10093e95;
    }
    eax = (t8 & 0xffffff00u) | rd8(COW_IMG(0x10482f44u));
    ecx = t9;
    edx = t10;
    ebx = t8;
    esi = t1;
    edi = t4;
    if (rd8(COW_IMG(0x1048098du)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048098du));
        goto L_10093e95;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1048098du));
    ebx = 6u;
L_10093f7b: ;
    if (rd16(COW_IMG(0x10482f1cu)) != rd16(COW_IMG(0x10485fe4u) + ebx * 2u))
    {
        esi = (esi & 0xffff0000u) | rd16(COW_IMG(0x10485fe4u) + ebx * 2u);
        edi = COW_IMG(0x10485fe4u) + ebx * 2u;
        if (rd8(COW_IMG(0x10482f1fu)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f1fu));
            goto L_10093fa5;
        }
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10482f1fu));
        if ((uint8_t)eax != 1u) goto L_10093fb1;
L_10093fa5: ;
        wr8(COW_IMG(0x104807f4u), (uint8_t)eax);
        ebp = 1u;
L_10093fb5: ;
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x104807f4u)) != ebx)
        {
            edx = (uint32_t)(int8_t)rd8(COW_IMG(0x104807f4u));
            goto L_10093feb;
        }
        edx = (uint32_t)(int8_t)rd8(COW_IMG(0x104807f4u));
        if ((uint8_t)eax == 2u) goto L_10093fcc;
        if ((uint8_t)eax == 3u) goto L_10093fcc;
        if ((uint8_t)eax != 7u) goto L_10093feb;
L_10093fcc: ;
        t29 = (ecx & 0xffffff00u) | ebp != 0u;
        t30 = rd16(COW_IMG(0x1048558cu) + ebx * 2u);
        eax = t30;
        ecx = t29;
        loc_18 = t29;
        loc_20 = 0x3cu;
        loc_24 = t30;
        loc_28 = t30;
        loc_2c = (uint16_t)esi;
L_10094018: ;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10037350u), 7, loc_2c, loc_28, loc_24, loc_20, 0x3cu, loc_18, in_ebp);
        t35 = g->ecx;
        t36 = rd16(edi);
        wr8(COW_IMG(0x10482f1fu), (uint8_t)ebx);
        wr16(COW_IMG(0x10482f1cu), (uint16_t)t36);
    }
L_10094031: ;
    return;
L_10093e95: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x10097a60u), esi, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t13;
        goto L_10093eaa;
    }
    eax = t11;
    ecx = t12;
    ebx = 5u;
    goto L_10093f7b;
L_10093eaa: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x10095680u), esi, 1, 0xffu);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_10093eca;
    }
    eax = t14;
    edx = t16;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x100956a0u), esi, 1, 0xffu);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_10093ede;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
L_10093eca: ;
    if (rd16(COW_IMG(0x10485fecu)) == 0u) goto L_10093ede;
    ebx = 4u;
    goto L_10093f7b;
L_10093ede: ;
    if (edi == 0x26u) goto L_10093ee8;
    if (edi != 0x39u) goto L_10093ef9;
L_10093ee8: ;
    if ((rd16(esi + 0x10cu) & 0xfffu) != 0xcu)
    {
        eax = rd16(esi + 0x10cu) & 0xfffu;
        goto L_10093f68;
    }
    eax = rd16(esi + 0x10cu) & 0xfffu;
L_10093ef9: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_10093f12;
    }
    ecx = rd32(COW_IMG(0x10456a28u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        goto L_10093f19;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
L_10093f12: ;
    wr8(COW_IMG(0x10480aecu), 0u);
L_10093f19: ;
    if (edi == 1u) goto L_10093f3c;
    if (rd8(COW_IMG(0x10480aecu)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10480aecu));
        goto L_10093f3c;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10480aecu));
    if ((int32_t)ebx < 6) goto L_10093f35;
    if ((int32_t)ebx >= 18) goto L_10093f35;
    ebx = 0u;
    goto L_10093f7b;
L_10093f35: ;
    ebx = 1u;
    goto L_10093f7b;
L_10093f3c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), ecx, 1, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        ecx = t24;
        esi = 0u;
        goto L_10093f61;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    esi = 0u;
L_10093f4b: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        esi = esi + 1u;
        goto L_10093f4b;
    }
    eax = t26;
    ecx = t27;
    esi = esi + 1u;
    if (esi != 1u) goto L_10093f61;
    ebx = 2u;
    goto L_10093f7b;
L_10093f61: ;
    ebx = 3u;
    goto L_10093f7b;
L_10093f68: ;
    if (rd16(COW_IMG(0x10485ff2u)) == 0u) goto L_10094031;
    ebx = 7u;
    goto L_10093f7b;
L_10093fb1: ;
    ebp = 0u;
    goto L_10093fb5;
L_10093feb: ;
    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1046393cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1046393cu));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_stdcall(g, COW_IMG(0x10246810u), 1, 0xffffffffu);
        t31 = g->ecx;
        t32 = g->edx;
        ecx = t31;
        edx = t32;
    }
    t33 = (edx & 0xffffff00u) | ebp != 0u;
    t34 = rd16(COW_IMG(0x1048558cu) + ebx * 2u);
    eax = rd16(edi);
    edx = t33;
    loc_18 = t33;
    loc_20 = 0u;
    loc_24 = t34;
    loc_28 = t34;
    loc_2c = rd16(edi);
    goto L_10094018;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10093e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10093e50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
