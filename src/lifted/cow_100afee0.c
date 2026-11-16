/* f_0x100afee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100afee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 4u) goto L_100b0100;
    eax = t1;
    edx = t1;
    t2 = rd32(COW_IMG(0x100b0108u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100aff0bu: goto L_100aff0b;
    case 0x100aff6au: goto L_100aff6a;
    case 0x100b0000u: goto L_100b0000;
    case 0x100b0055u: goto L_100b0055;
    case 0x100b009au: goto L_100b009a;
    default: rt_fatal(g, COW_IMG(0x100aff04u), "switch");
    }
    return;
L_100aff0b: ;
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t22 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t23 = g->edx;
    wr32(sp0 - 0x1cu, t22);
    g->esp = sp0 - 0x10u;
    t24 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t23, 3, t22, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t24 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            edx = (uint16_t)rd32(sp0 - 8u);
            if (rd32(eax + 0xd4u) != 0u)
            {
                edi = rd32(eax + 0xd4u);
                wr32(sp0 - 0x14u, 8u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t25 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
                t26 = g->edx;
                wr32(sp0 - 0x14u, t25);
                wr32(sp0 - 0x18u, 6u);
                cow_thiscall(g, COW_IMG(0x100af310u), edi, 2, 6u, t25);
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100aff6a: ;
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 4u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t19 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 4u);
    t20 = g->edx;
    wr32(sp0 - 0x1cu, t19);
    g->esp = sp0 - 0x10u;
    t21 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t20, 3, t19, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t21 != 1u) goto L_100b00f8;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
        edx = (uint16_t)rd32(sp0 - 8u);
        goto L_100affe4;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    edx = (uint16_t)rd32(sp0 - 8u);
    if (rd16(eax + 0x210u) == 0u) goto L_100affc9;
    wr32(sp0 - 0x14u, eax + 0x214u);
    wr32(sp0 - 0x18u, 2u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 2u, eax + 0x214u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100affc9: ;
    wr32(sp0 - 0x14u, eax + 0x7cu);
    wr32(sp0 - 0x18u, 2u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 2u, eax + 0x7cu);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100affe4: ;
    wr32(sp0 - 0x14u, COW_IMG(0x103d3c84u));
    wr32(sp0 - 0x18u, 2u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100af7e0u), self, 2, 2u, COW_IMG(0x103d3c84u));
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100b0000: ;
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 4u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 4u);
    t15 = g->edx;
    wr32(sp0 - 0x1cu, t14);
    g->esp = sp0 - 0x10u;
    t16 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t15, 3, t14, sp0 - 4u, sp0 - 8u);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        edx = t17;
        goto L_100b0039;
    }
    edx = t17;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 2u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100b0039: ;
    t18 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t18);
    wr32(sp0 - 0x18u, 2u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t18);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100b0055: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, 4u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 4u);
    t11 = g->edx;
    wr32(sp0 - 0x1cu, t10);
    g->esp = sp0 - 0x10u;
    t12 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t11, 3, t10, sp0 - 8u, sp0 - 4u);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = 0xffffu;
        edx = t13;
    }
    else
    {
        edx = t13;
        eax = rd32(sp0 - 4u);
    }
    wr32(sp0 - 0x14u, (uint16_t)eax);
    wr32(sp0 - 0x18u, 2u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, (uint16_t)eax);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100b009a: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, 4u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 4u);
    t4 = g->edx;
    wr32(sp0 - 0x1cu, t3);
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t4, 3, t3, sp0 - 8u, sp0 - 4u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        edx = t6;
        edi = 0xffffu;
    }
    else
    {
        eax = t5;
        edx = t6;
        edi = rd32(sp0 - 4u);
    }
    wr32(sp0 - 0x14u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_100b00ea;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    if ((int32_t)eax > 8) goto L_100b00ea;
    wr16(COW_IMG(0x10480a94u) + eax * 2u, (uint16_t)edi);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100b00ea: ;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, COW_IMG(0x1035d238u));
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
L_100b00f8: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
L_100b0100: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100afee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100afee0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
