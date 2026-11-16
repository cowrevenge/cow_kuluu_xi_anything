/* f_0x1012ccd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012ccd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x1012d1d0u), 0);
    t2 = g->edx;
    wr16(self + 0x14u, (uint16_t)t1);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101ad830u), rd32(COW_IMG(0x10662da4u)), 0);
    t4 = g->edx;
    if (t3 - 2u > 0xau)
    {
        eax = t3 - 2u;
        edx = t4;
        goto L_1012cd28;
    }
    eax = t3 - 2u;
    edx = t4;
    t5 = rd32(COW_IMG(0x1012cdf8u) + eax * 4u);
    switch (t5 - RD)
    {
    case 0x1012ccf8u: goto L_1012ccf8;
    case 0x1012cd00u: goto L_1012cd00;
    case 0x1012cd08u: goto L_1012cd08;
    case 0x1012cd10u: goto L_1012cd10;
    case 0x1012cd18u: goto L_1012cd18;
    case 0x1012cd20u: goto L_1012cd20;
    case 0x1012cd28u: goto L_1012cd28;
    default: rt_fatal(g, COW_IMG(0x1012ccf1u), "switch");
    }
    return 0;
L_1012ccf8: ;
    wr16(self + 0x16u, 2u);
L_1012cd2e: ;
    t6 = rd32(self + 8u);
    t7 = (eax & 0xffff0000u) | rd16(self + 0x16u);
    g->ebx = 0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10118db0u), t7, t6, g->edx, 0, 2, t7, 0u);
    t9 = g->edx;
    g->edi = t6;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x101186a0u), t6, 0);
    t10 = g->edx;
    t11 = rd32(COW_IMG(0x10578474u));
    wr32(t11 + 0x28u, 0u);
    wr32(t11 + 0x20u, 0u);
    wr32(t11 + 0x24u, 0u);
    wr8(t11 + 0x30u, 0u);
    wr32(t11 + 0x34u, 0u);
    wr32(t11 + 0x2cu, 0x3e8u);
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f630u), 1u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint16_t)t14 != 0u)
    {
        ecx = t15;
        edx = t16;
    }
    else
    {
        ecx = t15;
        edx = t16;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t17 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 1u);
        t18 = g->ecx;
        t19 = g->edx;
        if ((uint8_t)t17 != 0u)
        {
            ecx = t18;
            edx = t19;
        }
        else
        {
            eax = t17;
            edx = t19;
            g->edx = edx;
            t20 = rd32(self + 8u);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10118b60u), t20, 2, 5u, 4u);
            t21 = g->ecx;
            t22 = g->edx;
            ecx = t21;
            edx = t22;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint16_t)t23 != 0u)
    {
        ecx = t24;
        edx = t25;
    }
    else
    {
        ecx = t24;
        edx = t25;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t26 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 2u);
        t27 = g->ecx;
        t28 = g->edx;
        if ((uint8_t)t26 != 0u)
        {
            ecx = t27;
            edx = t28;
        }
        else
        {
            eax = t26;
            edx = t28;
            g->edx = edx;
            t29 = rd32(self + 8u);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10118b60u), t29, 2, 5u, 5u);
            t30 = g->ecx;
            t31 = g->edx;
            ecx = t30;
            edx = t31;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t32 = cow_thiscall(g, COW_IMG(0x100a3600u), ecx, 0);
    t33 = g->edx;
    if ((uint8_t)t32 != 0u)
    {
        eax = t32;
        edx = t33;
    }
    else
    {
        eax = t32;
        edx = t33;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t34 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    }
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 1u);
    t36 = (edx & 0xffff0000u) | rd16(self + 0x16u);
    g->eax = eax;
    g->edx = t36;
    g->esp = sp0 - 0xcu;
    t37 = cow_stdcall(g, COW_IMG(0x1012cc20u), 1, t36);
    t38 = g->edx;
    wr8(self + 0x18u, 0u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t38;
    return t37;
L_1012cd00: ;
    wr16(self + 0x16u, 3u);
    goto L_1012cd2e;
L_1012cd08: ;
    wr16(self + 0x16u, 4u);
    goto L_1012cd2e;
L_1012cd10: ;
    wr16(self + 0x16u, 5u);
    goto L_1012cd2e;
L_1012cd18: ;
    wr16(self + 0x16u, 6u);
    goto L_1012cd2e;
L_1012cd20: ;
    wr16(self + 0x16u, 7u);
    goto L_1012cd2e;
L_1012cd28: ;
    wr16(self + 0x16u, 1u);
    goto L_1012cd2e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012ccd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012ccd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
