/* f_0x101a4820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a4820(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x18u, in_ebp);
        wr32(sp0 - 0x1cu, in_edi);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->eax = sp0 - 8u;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_thiscall(g, COW_IMG(0x1011a710u), ecx, 1, sp0 - 8u);
        t2 = g->edx;
        g->edx = t2;
        t3 = rd32(self + 8u);
        t4 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781ecu)), 0);
        t5 = g->edx;
        t6 = rd32(COW_IMG(0x10578184u));
        wr8(sp0 - 9u, (uint8_t)t4);
        t7 = cow_thiscall(g, COW_IMG(0x1012c900u), t6, 0);
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu)) == 0u)
        {
            eax = t7;
            edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
            ebp = (uint32_t)(int16_t)rd16(sp0 - 6u);
            edi = t3;
            goto L_101a488b;
        }
        eax = t7;
        ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106218eeu));
        edx = (uint32_t)(int16_t)rd16(sp0 - 8u);
        ebp = (uint32_t)(int16_t)rd16(sp0 - 6u);
        edi = t3;
        if (ecx == 1u) goto L_101a4895;
L_101a489b: ;
        wr32(sp0 - 0x20u, ebp);
        wr32(sp0 - 0x24u, edx);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_call_regs(g, COW_IMG(0x10119110u), eax, edi, g->edx, 0, 2, edx, ebp);
        t9 = g->edx;
        g->edx = t9;
        t10 = rd32(self + 0x24u);
        t11 = cow_call_regs(g, COW_IMG(0x101a44b0u), t8, t10, g->edx, 1, 0);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        t14 = ((t12 & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)t11) + 1u;
        wr32(sp0 - 0x24u, t14);
        t15 = rd32(self + 8u);
        wr8(sp0 - 9u, (uint8_t)t11);
        g->ebx = 0u;
        g->edx = t13;
        t16 = cow_call_regs(g, COW_IMG(0x10118db0u), t11, t15, g->edx, 0, 2, t14, 0u);
        t17 = g->edx;
        t18 = cow_thiscall(g, COW_IMG(0x1011a400u), rd32(self + 8u), 0);
        t19 = rd32(self + 8u);
        wr32(sp0 - 0x20u, t19);
        g->edx = t19;
        t20 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t19);
        t21 = g->ecx;
        t22 = g->edx;
        if ((uint8_t)t20 == 0u)
        {
            ecx = (t21 & 0xffffff00u) | 1u;
            ebp = rd32(sp0 - 0x18u);
            edi = rd32(sp0 - 0x1cu);
            t23 = rd32(self + 8u);
            wr8(t23 + 0x63u, 0u);
            edx = t23;
        }
        else
        {
            ecx = (t21 & 0xffffff00u) | 1u;
            edx = t22;
            ebp = rd32(sp0 - 0x18u);
            edi = rd32(sp0 - 0x1cu);
            wr8(rd32(self + 8u) + 0x63u, (uint8_t)ecx);
        }
        if (rd8(rd32(self + 0x24u) + 0xcu) != (uint8_t)ecx)
        {
            eax = rd32(self + 0x24u);
        }
        else
        {
            eax = rd32(self + 0x24u);
            wr32(sp0 - 0x18u, 2u);
            t24 = (uint32_t)(int8_t)rd8(sp0 - 9u);
            wr32(sp0 - 0x1cu, t24);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t25 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t24);
            t26 = g->edx;
            wr32(sp0 - 0x1cu, t25);
            g->edx = t26;
            g->esp = sp0 - 0x14u;
            t27 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t25, 2u);
            t28 = g->edx;
            eax = t27;
            edx = t28;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t29 = cow_thiscall(g, COW_IMG(0x101a47e0u), self, 0);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    }
    g->ebx = in_ebx;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_101a488b: ;
    if (rd8(sp0 - 9u) != 0u) goto L_101a4895;
    if ((uint8_t)eax == 0u) goto L_101a489b;
L_101a4895: ;
    edx = edx + 0x82u;
    goto L_101a489b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a4820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a4820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
