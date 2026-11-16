/* f_0x10134250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10134250(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 7u) goto L_10134501;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    ecx = (self & 0xffff0000u) | rd16(sp0 + 4u);
    t1 = rd32(COW_IMG(0x10134508u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1013426fu: goto L_1013426f;
    case 0x10134329u: goto L_10134329;
    case 0x10134369u: goto L_10134369;
    case 0x1013439bu: goto L_1013439b;
    case 0x10134401u: goto L_10134401;
    case 0x10134501u: goto L_10134501;
    default: rt_fatal(g, COW_IMG(0x10134268u), "switch");
    }
    return;
L_1013426f: ;
    if ((uint16_t)rd32(sp0 + 8u) != 0x11u)
    {
        ecx = rd32(sp0 + 8u);
        goto L_101342aa;
    }
    ecx = rd32(sp0 + 8u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe0u);
    t23 = g->edx;
    g->ebx = in_ebx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10134530u), 0u, t22, 0u, 0u, 1u, 0u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_101342aa: ;
    if (rd32(self + 0x1cu) != 2u)
    {
        eax = rd32(self + 0x1cu);
        goto L_101342ed;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_stdcall(g, COW_IMG(0x10131680u), 1, ecx);
    t25 = g->edx;
    if ((int16_t)t24 < 0)
    {
        eax = t24;
        edx = t25;
    }
    else
    {
        ecx = (uint32_t)(int16_t)t24;
        edx = t25;
        pf = PARITY((uint8_t)t24);
        zf = (uint32_t)(int16_t)t24 == 0u;
        sf = (int16_t)t24 < 0;
        t26 = 1u << (ecx & 0x1fu);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t27 = cow_thiscall(g, COW_IMG(0x1021c7e0u), rd32(COW_IMG(0x10666e34u)), 4, t26, 2u, 0x12u, 0u);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    t29 = rd32(COW_IMG(0x10663740u));
    wr16(t29 + 0x1eu, 0u);
    g->edi = in_edi;
    g->esp = sp0 - 0x10u;
    t30 = cow_call_regs(g, COW_IMG(0x101f66b0u), eax, t29, edx, 1, 0);
    eax = t30;
L_10134338: ;
    t37 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, t37);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t37;
    cow_tailcall(g, COW_IMG(0x1015db80u), eax, COW_IMG(0x10621838u), t37);
    return;
L_101342ed: ;
    if (eax != 1u) goto L_10134501;
    if (rd8(rd32(COW_IMG(0x105781b4u)) + 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781b4u));
        eax = rd32(eax + 0x10u);
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t31 = cow_thiscall(g, COW_IMG(0x10133410u), self, 1, eax);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        eax = t31;
        edx = t33;
    }
    else
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t34 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    }
    g->ebx = in_ebx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101316a0u), self, 3, 0u, 0u, 0u);
L_1013432f: ;
    t36 = rd32(COW_IMG(0x105781b4u));
    wr8(t36 + 4u, 0u);
    eax = t36;
    goto L_10134338;
L_10134329: ;
    if (rd32(self + 0x1cu) != 1u) goto L_1013435b;
    goto L_1013432f;
L_1013435b: ;
    g->ebx = in_ebx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10134760u), self, 0);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_10134369: ;
    if (rd32(self + 0x1cu) != 2u) goto L_10134501;
    wr32(self + 0x1cu, 1u);
    t17 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    g->eax = rd32(COW_IMG(0x10663740u));
    t18 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 0x10u;
    t19 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t17, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037e90u), t20, 0);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_1013439b: ;
    if (rd32(self + 0x1cu) != 2u) goto L_10134501;
    if (rd16(self + 0x148u) != 0x11u)
    {
        edi = rd32(sp0 + 8u);
        goto L_101343d9;
    }
    edi = rd32(sp0 + 8u);
    t16 = edi + ((in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14au) << 2u));
    edx = t16;
    loc_18 = t16;
L_101343c3: ;
    g->ebx = in_ebx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, loc_18, 0u);
    wr16(self + 0x148u, (uint16_t)edi);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_101343d9: ;
    if ((uint16_t)edi != 0x11u)
    {
        wr16(self + 0x14au, (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)edi + ((uint32_t)((int32_t)((uint32_t)(int16_t)edi - 1u) >> 0x1fu) & 3u) - 1u) >> 2u));
    }
    wr16(self + 0x148u, (uint16_t)edi);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_10134401: ;
    if (rd32(self + 0x1cu) != 2u)
    {
        eax = rd32(self + 0x1cu);
        goto L_10134429;
    }
    eax = rd32(self + 0x1cu);
    if (rd16(self + 0x148u) != 0x11u)
    {
        edi = rd32(sp0 + 8u);
        goto L_101343d9;
    }
    edi = rd32(sp0 + 8u);
    t2 = edi + ((eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x14au) << 2u));
    eax = t2;
    edx = in_edx;
    loc_18 = t2;
    goto L_101343c3;
L_10134429: ;
    if (eax != 1u) goto L_10134501;
    if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 0)
    {
        ebp = 0u;
        edi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
        eax = (uint32_t)(int16_t)eax;
        ebp = 0u;
L_10134446: ;
        if (rd8(COW_IMG(0x1036f744u) + ebp) == eax) goto L_10134457;
        if ((int32_t)(ebp + 1u) <= (int32_t)edi)
        {
            ebp = ebp + 1u;
            goto L_10134446;
        }
        ebp = ebp + 1u;
    }
L_10134457: ;
    if ((uint16_t)ecx != 4u) goto L_101344a2;
    if ((int32_t)(ebp + edi - 1u) <= (int32_t)ebp) goto L_10134501;
    ebx = ebp + edi - 1u;
L_10134469: ;
    t3 = cow_divs(g, ebx, edi);
    t4 = cow_mods(g, ebx, edi);
    t5 = (t3 & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t4);
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t6 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t5);
    t7 = g->ecx;
    if ((int16_t)t6 < 0) goto L_10134496;
    eax = t6;
    ecx = t7;
    pf = PARITY((uint8_t)t6);
    zf = (uint16_t)t6 == 0u;
    sf = (int16_t)t6 < 0;
    if ((rd16(self + 0x20u) & 1u << (eax & 0x1fu)) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)eax;
        goto L_101344ea;
    }
L_10134496: ;
    if ((int32_t)(ebx - 1u) > (int32_t)ebp)
    {
        ebx = ebx - 1u;
        goto L_10134469;
    }
    return;
L_101344a2: ;
    if ((uint16_t)ecx != 3u) goto L_10134501;
    if ((int32_t)(ebp + 1u) >= (int32_t)(ebp + edi)) goto L_10134501;
    ebx = ebp + 1u;
    ebp = ebp + edi;
L_101344b1: ;
    t8 = cow_divs(g, ebx, edi);
    t9 = cow_mods(g, ebx, edi);
    t10 = (t9 & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t9);
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t11 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t10);
    t12 = g->ecx;
    if ((int16_t)t11 < 0) goto L_101344de;
    eax = t11;
    ecx = t12;
    pf = PARITY((uint8_t)t11);
    zf = (uint16_t)t11 == 0u;
    sf = (int16_t)t11 < 0;
    if ((rd16(self + 0x20u) & 1u << (eax & 0x1fu)) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)eax;
        goto L_101344ea;
    }
L_101344de: ;
    if ((int32_t)(ebx + 1u) < (int32_t)ebp)
    {
        ebx = ebx + 1u;
        goto L_101344b1;
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_101344ea: ;
    t13 = cow_divs(g, ebx, edi);
    t14 = cow_mods(g, ebx, edi);
    t15 = (ecx & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t14);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10131810u), self, 2, t15, 1u);
L_10134501: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10134250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10134250(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
