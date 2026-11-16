/* f_0x1012e880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012e880(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 8u) == 0u)
    {
        ecx = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
        if (rd16(ecx + 0x4cu) == rd16(self + 0x1f0u))
        {
            edx = in_edx;
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | rd16(self + 0x1f0u);
            edi = (in_edi & 0xffff0000u) | rd16(ecx + 0x4cu);
            if ((uint16_t)edi != 0xbu) goto L_1012e8c4;
            if (rd16(self + 0x1b4u) != 0x10u) goto L_1012e8bc;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, eax, 0u);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
            edi = (edi & 0xffff0000u) | rd16(self + 0x1f0u);
L_1012e8db: ;
            wr16(self + 0x1f0u, (uint16_t)edi);
        }
    }
    if ((int32_t)rd32(self + 0x1c0u) > 0)
    {
        eax = rd32(self + 0x1c0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t9 = g->ecx;
        t10 = g->edx;
        d11 = cow_take_float(g);
        g->edx = t10;
        fpush(g, d11);
        t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
        t13 = g->edx;
        wr32(self + 0x1c0u, rd32(self + 0x1c0u) - t12);
        edx = t13;
    }
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_1012e921;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x1012fec0u), self, 0);
    t15 = g->edx;
    wr16(self + 0x1b4u, 0x18u);
    g->edx = t15;
    t16 = cow_call_regs(g, COW_IMG(0x1012f1b0u), t14, self, g->edx, 1, 0);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_1012e8bc: ;
    loc_14 = 7u;
L_1012e8ca: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, loc_14);
    t4 = g->edx;
    g->edx = t4;
    t5 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1011aaf0u), t5, 3, t3, 0u, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    goto L_1012e8db;
L_1012e8c4: ;
    loc_14 = 0xbu;
    goto L_1012e8ca;
L_1012e921: ;
    if (rd32(eax + 0x2c7d0u) == 0u)
    {
        ecx = rd32(eax + 0x2c7d0u);
    }
    else
    {
        ecx = rd32(eax + 0x2c7d0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t18 = cow_call_regs(g, COW_IMG(0x100f7fe0u), eax, g->ecx, g->edx, 1, 3, eax, in_edi, in_esi);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0xffffffffu)
        {
            ecx = t19;
            edx = t20;
            goto L_1012e954;
        }
        eax = t18;
        edx = t20;
L_1012e939: ;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10130080u), self, 1, eax);
        t21 = g->ecx;
        t22 = g->edx;
        g->ecx = t21;
        g->edx = t22;
        t23 = rd32(COW_IMG(0x104dfd98u));
        g->esp = sp0;
        t24 = cow_call_regs(g, COW_IMG(0x100f7fe0u), t23, g->ecx, g->edx, 1, 3, t23, in_edi, in_esi);
        t25 = g->ecx;
        t26 = g->edx;
        if (t24 != 0xffffffffu)
        {
            eax = t24;
            edx = t26;
            goto L_1012e939;
        }
        ecx = t25;
        edx = t26;
    }
L_1012e954: ;
    if ((uint32_t)(int16_t)rd16(self + 0x1b4u) - 1u > 0x19u) goto L_1012ea6c;
    eax = (uint32_t)(int16_t)rd16(self + 0x1b4u) - 1u;
    t27 = rd32(COW_IMG(0x1012eaccu) + eax * 4u);
    switch (t27 - RD)
    {
    case 0x1012e96cu: goto L_1012e96c;
    case 0x1012e978u: goto L_1012e978;
    case 0x1012e984u: goto L_1012e984;
    case 0x1012e990u: goto L_1012e990;
    case 0x1012e99cu: goto L_1012e99c;
    case 0x1012e9a8u: goto L_1012e9a8;
    case 0x1012e9b4u: goto L_1012e9b4;
    case 0x1012e9c0u: goto L_1012e9c0;
    case 0x1012e9ccu: goto L_1012e9cc;
    case 0x1012e9d8u: goto L_1012e9d8;
    case 0x1012e9e4u: goto L_1012e9e4;
    case 0x1012e9edu: goto L_1012e9ed;
    case 0x1012e9f6u: goto L_1012e9f6;
    case 0x1012e9ffu: goto L_1012e9ff;
    case 0x1012ea08u: goto L_1012ea08;
    case 0x1012ea11u: goto L_1012ea11;
    case 0x1012ea1au: goto L_1012ea1a;
    case 0x1012ea23u: goto L_1012ea23;
    case 0x1012ea2cu: goto L_1012ea2c;
    case 0x1012ea35u: goto L_1012ea35;
    case 0x1012ea3eu: goto L_1012ea3e;
    case 0x1012ea47u: goto L_1012ea47;
    case 0x1012ea50u: goto L_1012ea50;
    case 0x1012ea59u: goto L_1012ea59;
    case 0x1012ea6cu: goto L_1012ea6c;
    default: rt_fatal(g, COW_IMG(0x1012e965u), "switch");
    }
    return 0;
L_1012e96c: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f410u), self, 0);
L_1012ea6c: ;
    t28 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0xfbffffffu;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u, t28);
    if ((int32_t)rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) < 0)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
        edx = t28;
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t29 = cow_stdcall(g, COW_IMG(0x10130290u), 1, eax);
        t30 = g->ecx;
        t31 = g->edx;
        cow_thiscall(g, COW_IMG(0x10037c50u), t30, 0);
    }
    t32 = rd32(COW_IMG(0x104dfd98u));
    wr32(t32 + 0x2c7ccu, 0u);
    if (rd32(self + 0x1c0u) != 0u)
    {
        eax = rd32(self + 0x1c0u);
        edx = t32;
    }
    else
    {
        eax = rd32(self + 0x1c0u);
        edx = t32;
        wr32(self + 0x1c0u, 0xffffffffu);
    }
    g->edx = edx;
    return eax;
L_1012e978: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f450u), self, 0);
    goto L_1012ea6c;
L_1012e984: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f4b0u), self, 0);
    goto L_1012ea6c;
L_1012e990: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f500u), self, 0);
    goto L_1012ea6c;
L_1012e99c: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f570u), self, 0);
    goto L_1012ea6c;
L_1012e9a8: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012f620u), self, edx, 0);
    goto L_1012ea6c;
L_1012e9b4: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f790u), self, 0);
    goto L_1012ea6c;
L_1012e9c0: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012f7e0u), self, edx, 0);
    goto L_1012ea6c;
L_1012e9cc: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f8c0u), self, 0);
    goto L_1012ea6c;
L_1012e9d8: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1012f8e0u), eax, self, g->edx, 1, 0);
    goto L_1012ea6c;
L_1012e9e4: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012f980u), self, 0);
    goto L_1012ea6c;
L_1012e9ed: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fa10u), self, edx, 0);
    goto L_1012ea6c;
L_1012e9f6: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012faa0u), self, 0);
    goto L_1012ea6c;
L_1012e9ff: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fb30u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea08: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fb90u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea11: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fc80u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea1a: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fd00u), self, 0);
    goto L_1012ea6c;
L_1012ea23: ;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x1012fd90u), self, edx, 0);
    goto L_1012ea6c;
L_1012ea2c: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fe20u), self, 0);
    goto L_1012ea6c;
L_1012ea35: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fec0u), self, 0);
    goto L_1012ea6c;
L_1012ea3e: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012ff30u), self, 0);
    goto L_1012ea6c;
L_1012ea47: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10130000u), self, 0);
    goto L_1012ea6c;
L_1012ea50: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1012fe80u), self, 0);
    goto L_1012ea6c;
L_1012ea59: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100f7fa0u), 1, 0xfu);
    wr16(self + 0x1b4u, 0x19u);
    goto L_1012ea6c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012e880(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
